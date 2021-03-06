#ifndef	__sendtcpresp_h
#define	__sendtcpresp_h

#include <libnet.h>

/*数据包的数据结构的定义*/
struct net_pppoe_hdr
{
	uint8_t type:4;
	uint8_t ver:4;
	uint8_t code;
	uint16_t ssn_id;
	uint16_t length;
	uint16_t protocol;
};

struct net_vlan_hdr
{
	uint16_t id;			//优先级和ID
	uint16_t next_type;	//下一个包的以太网类型
};

struct ipptr;
struct tcpptr;
struct ether_header;

bool send_tcp_resp(const char *data, int len,
	struct tcphdr *tcpptr, struct iphdr *ipptr, struct ether_header *eptr,
	libnet_t *l);

bool send_tcp_resp_raw(const char *data, int len,
	struct tcphdr *tcpptr, struct iphdr *ipptr, libnet_t *l);

bool send_tcp_resp_pppoe_vlan(const char *data, int len,
	struct tcphdr *tcpptr, struct iphdr *ipptr, struct net_pppoe_hdr *pppoe,
	struct net_vlan_hdr *vlan, int vlan_num, struct ether_header *eptr,
	libnet_t *l);
#endif
