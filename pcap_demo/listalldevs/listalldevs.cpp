#include "pcap.h"
#include <stdlib.h>
#include <stdio.h>

int main()//ȡ�������豸�б�
{
	pcap_if_t *alldevs;
	pcap_if_t *d;
	int i=0;
	char errbuf[PCAP_ERRBUF_SIZE];
	//ȡ�������豸�б�
	if(pcap_findalldevs(&alldevs,errbuf)==-1)
	{
		fprintf(stderr,"Error in pcap_findalldevs:%s\n",errbuf);
		exit(1);
	}
	//��ʾ�����豸�б�
	for(d=alldevs;d;d=d->next)
	{
		printf("%d",++i);
		printf("    ");
		printf("%s",d->name);
		printf("     ");
		if(d->description)
			printf("(%s)\n",d->description);
		else
			printf("(No description available)\n");
	}
	if(i==0)
	{
		printf("\nNo interfaces found!Make sure WinPcap is installed.\n");
		return 128;
	}
	pcap_freealldevs(alldevs);

	return 0;
}
