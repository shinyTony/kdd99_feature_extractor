#pragma once
#include "Packet.h"

namespace FeatureExtractor {
	class IpFragment :
		public Packet
	{
		bool ip_flag_mf;
		uint16_t ip_frag_offset;
		size_t ip_payload_length;

	public:
		IpFragment();
		~IpFragment();

		bool get_ip_flag_mf();
		void set_ip_flag_mf(bool ip_flag_mf);

		uint16_t get_ip_frag_offset();
		void set_ip_frag_offset(uint16_t ip_frag_offset);

		size_t get_ip_payload_length();
		void set_ip_payload_length(size_t ip_payload_length);
	};
}
