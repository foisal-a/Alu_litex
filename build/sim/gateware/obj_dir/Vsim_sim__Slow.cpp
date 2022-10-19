// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim_sim.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*0:0*/ Vsim_sim::__Vtable1___PVT__main_sdram_bankmachine0_cmd_payload_is_cmd[64];
CData/*0:0*/ Vsim_sim::__Vtable2___PVT__main_sdram_bankmachine0_cmd_payload_is_read[256];
CData/*0:0*/ Vsim_sim::__Vtable3___PVT__main_sdram_bankmachine0_cmd_payload_is_write[256];
CData/*0:0*/ Vsim_sim::__Vtable4___PVT__main_sdram_bankmachine0_req_wdata_ready[512];
CData/*0:0*/ Vsim_sim::__Vtable5___PVT__main_sdram_bankmachine0_req_rdata_valid[512];
CData/*0:0*/ Vsim_sim::__Vtable6___PVT__main_sdram_bankmachine0_refresh_gnt[16];
CData/*0:0*/ Vsim_sim::__Vtable7___PVT__main_sdram_bankmachine0_row_open[16];
CData/*0:0*/ Vsim_sim::__Vtable8___PVT__main_sdram_bankmachine0_row_close[8];
CData/*0:0*/ Vsim_sim::__Vtable9___PVT__main_sdram_bankmachine0_row_col_n_addr_sel[16];
CData/*0:0*/ Vsim_sim::__Vtable10___PVT__main_sdram_bankmachine0_cmd_payload_cas[128];
CData/*0:0*/ Vsim_sim::__Vtable11___PVT__main_sdram_bankmachine0_cmd_payload_ras[64];
CData/*0:0*/ Vsim_sim::__Vtable12___PVT__main_sdram_bankmachine1_req_rdata_valid[512];
CData/*0:0*/ Vsim_sim::__Vtable13___PVT__main_sdram_bankmachine1_refresh_gnt[16];
CData/*0:0*/ Vsim_sim::__Vtable14___PVT__main_sdram_bankmachine1_row_open[16];
CData/*0:0*/ Vsim_sim::__Vtable15___PVT__main_sdram_bankmachine1_row_close[8];
CData/*0:0*/ Vsim_sim::__Vtable16___PVT__main_sdram_bankmachine1_row_col_n_addr_sel[16];
CData/*0:0*/ Vsim_sim::__Vtable17___PVT__main_sdram_bankmachine1_cmd_payload_cas[128];
CData/*0:0*/ Vsim_sim::__Vtable18___PVT__main_sdram_bankmachine1_cmd_payload_ras[64];
CData/*0:0*/ Vsim_sim::__Vtable19___PVT__main_sdram_bankmachine1_cmd_payload_is_cmd[64];
CData/*0:0*/ Vsim_sim::__Vtable20___PVT__main_sdram_bankmachine1_cmd_payload_is_read[256];
CData/*0:0*/ Vsim_sim::__Vtable21___PVT__main_sdram_bankmachine1_cmd_payload_is_write[256];
CData/*0:0*/ Vsim_sim::__Vtable22___PVT__main_sdram_bankmachine1_req_wdata_ready[512];
CData/*0:0*/ Vsim_sim::__Vtable23___PVT__main_sdram_bankmachine2_row_close[8];
CData/*0:0*/ Vsim_sim::__Vtable24___PVT__main_sdram_bankmachine2_row_col_n_addr_sel[16];
CData/*0:0*/ Vsim_sim::__Vtable25___PVT__main_sdram_bankmachine2_cmd_payload_cas[128];
CData/*0:0*/ Vsim_sim::__Vtable26___PVT__main_sdram_bankmachine2_cmd_payload_ras[64];
CData/*0:0*/ Vsim_sim::__Vtable27___PVT__main_sdram_bankmachine2_cmd_payload_is_cmd[64];
CData/*0:0*/ Vsim_sim::__Vtable28___PVT__main_sdram_bankmachine2_cmd_payload_is_read[256];
CData/*0:0*/ Vsim_sim::__Vtable29___PVT__main_sdram_bankmachine2_cmd_payload_is_write[256];
CData/*0:0*/ Vsim_sim::__Vtable30___PVT__main_sdram_bankmachine2_req_wdata_ready[512];
CData/*0:0*/ Vsim_sim::__Vtable31___PVT__main_sdram_bankmachine2_req_rdata_valid[512];
CData/*0:0*/ Vsim_sim::__Vtable32___PVT__main_sdram_bankmachine2_refresh_gnt[16];
CData/*0:0*/ Vsim_sim::__Vtable33___PVT__main_sdram_bankmachine2_row_open[16];
CData/*0:0*/ Vsim_sim::__Vtable34___PVT__main_sdram_bankmachine3_cmd_payload_cas[128];
CData/*0:0*/ Vsim_sim::__Vtable35___PVT__main_sdram_bankmachine3_cmd_payload_ras[64];
CData/*0:0*/ Vsim_sim::__Vtable36___PVT__main_sdram_bankmachine3_cmd_payload_is_cmd[64];
CData/*0:0*/ Vsim_sim::__Vtable37___PVT__main_sdram_bankmachine3_cmd_payload_is_read[256];
CData/*0:0*/ Vsim_sim::__Vtable38___PVT__main_sdram_bankmachine3_cmd_payload_is_write[256];
CData/*0:0*/ Vsim_sim::__Vtable39___PVT__main_sdram_bankmachine3_req_wdata_ready[512];
CData/*0:0*/ Vsim_sim::__Vtable40___PVT__main_sdram_bankmachine3_req_rdata_valid[512];
CData/*0:0*/ Vsim_sim::__Vtable41___PVT__main_sdram_bankmachine3_refresh_gnt[16];
CData/*0:0*/ Vsim_sim::__Vtable42___PVT__main_sdram_bankmachine3_row_open[16];
CData/*0:0*/ Vsim_sim::__Vtable43___PVT__main_sdram_bankmachine3_row_close[8];
CData/*0:0*/ Vsim_sim::__Vtable44___PVT__main_sdram_bankmachine3_row_col_n_addr_sel[16];
CData/*0:0*/ Vsim_sim::__Vtable45___PVT__main_sdram_choose_req_want_reads[8];
CData/*0:0*/ Vsim_sim::__Vtable46___PVT__main_sdram_choose_req_cmd_ready[256];
CData/*1:0*/ Vsim_sim::__Vtable47___PVT__main_sdram_steerer_sel[8];
CData/*0:0*/ Vsim_sim::__Vtable48___PVT__main_sdram_en0[8];
CData/*0:0*/ Vsim_sim::__Vtable49___PVT__builder_rhs_array_muxed0[64];
CData/*0:0*/ Vsim_sim::__Vtable50___PVT__builder_rhs_array_muxed6[64];

VL_CTOR_IMP(Vsim_sim) {
    VL_CELL(VexRiscv, Vsim_VexRiscv);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vsim_sim::__Vconfigure(Vsim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vsim_sim::~Vsim_sim() {
}

void Vsim_sim::_initial__TOP__sim__1(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_initial__TOP__sim__1\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    WData/*127:0*/ __Vtemp2[4];
    WData/*127:0*/ __Vtemp3[4];
    WData/*127:0*/ __Vtemp4[4];
    WData/*127:0*/ __Vtemp5[4];
    // Body
    vlSymsp->TOP__sim.__PVT__main_scratch_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_bus_errors_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_txfull_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_rxempty_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_status_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_enable_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_txempty_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_rxfull_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_load_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_reload_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_en_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_value_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_status_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_enable_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_command_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_address_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_baddress_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_wrdata_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_rddata_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_first = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_last = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_first = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_last = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_first = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_last = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_first = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_last = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_valid_token_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_rxtx_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cke = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_odt = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_reset_n = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_act_n = 1U;
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata_en = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_rddata_en = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_ext_dfi_p0_rddata = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_ext_dfi_p0_rddata_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_cmd_payload_cas = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_cmd_payload_ras = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_cmd_payload_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_word_clr = 0U;
    vlSymsp->TOP__sim.__PVT__main_word_inc = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_is_ongoing = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_reset0_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_scratch0_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_bus_errors_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_control0_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_command0_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_address0_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_baddress0_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_wrdata0_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_rddata_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed1 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed2 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed3 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed4 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed5 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed11 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed30 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed31 = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_pending_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_pending_r = 0U;
    vlSymsp->TOP__sim.__PVT__main_soc_rst = 0U;
    vlSymsp->TOP__sim.__PVT__builder_t_array_muxed0 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_t_array_muxed1 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_t_array_muxed2 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_a = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ba = 0U;
    vlSymsp->TOP__sim.__PVT__main_bank_write0 = 0U;
    vlSymsp->TOP__sim.__PVT__main_bank_write_col0 = 0U;
    vlSymsp->TOP__sim.__PVT__main_bank_write1 = 0U;
    vlSymsp->TOP__sim.__PVT__main_bank_write_col1 = 0U;
    vlSymsp->TOP__sim.__PVT__main_bank_write2 = 0U;
    vlSymsp->TOP__sim.__PVT__main_bank_write_col2 = 0U;
    vlSymsp->TOP__sim.__PVT__main_bank_write3 = 0U;
    vlSymsp->TOP__sim.__PVT__main_bank_write_col3 = 0U;
    vlSymsp->TOP__sim.__PVT__main_interface_dat_r[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_interface_dat_r[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_interface_dat_r[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_interface_dat_r[3U] = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed7 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed8 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_wrdata_en = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_rddata_en = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_postponer_req_o = 0U;
    __Vtemp1[0U] = 0x696e6974U;
    __Vtemp1[1U] = 0x6d5f312eU;
    __Vtemp1[2U] = 0x6d5f6d65U;
    __Vtemp1[3U] = 0x7369U;
    VL_READMEM_N(true, 32, 4194304, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 , vlSymsp->TOP__sim.__PVT__mem_1, 0
                 , ~VL_ULL(0));
    __Vtemp2[0U] = 0x696e6974U;
    __Vtemp2[1U] = 0x6d5f322eU;
    __Vtemp2[2U] = 0x6d5f6d65U;
    __Vtemp2[3U] = 0x7369U;
    VL_READMEM_N(true, 32, 4194304, 0, VL_CVT_PACK_STR_NW(4, __Vtemp2)
                 , vlSymsp->TOP__sim.__PVT__mem_2, 0
                 , ~VL_ULL(0));
    __Vtemp3[0U] = 0x696e6974U;
    __Vtemp3[1U] = 0x6d5f332eU;
    __Vtemp3[2U] = 0x6d5f6d65U;
    __Vtemp3[3U] = 0x7369U;
    VL_READMEM_N(true, 32, 4194304, 0, VL_CVT_PACK_STR_NW(4, __Vtemp3)
                 , vlSymsp->TOP__sim.__PVT__mem_3, 0
                 , ~VL_ULL(0));
    __Vtemp4[0U] = 0x696e6974U;
    __Vtemp4[1U] = 0x6d5f342eU;
    __Vtemp4[2U] = 0x6d5f6d65U;
    __Vtemp4[3U] = 0x7369U;
    VL_READMEM_N(true, 32, 4194304, 0, VL_CVT_PACK_STR_NW(4, __Vtemp4)
                 , vlSymsp->TOP__sim.__PVT__mem_4, 0
                 , ~VL_ULL(0));
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_port_adr = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_port_adr = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_port_adr = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_port_adr = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_cas = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ras = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_slave_sel_r = 0U;
    __Vtemp5[0U] = 0x696e6974U;
    __Vtemp5[1U] = 0x72616d2eU;
    __Vtemp5[2U] = 0x696d5f73U;
    __Vtemp5[3U] = 0x73U;
    VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(4, __Vtemp5)
                 , vlSymsp->TOP__sim.__PVT__sram, 0
                 , ~VL_ULL(0));
    vlSymsp->TOP__sim.__PVT__main_wb_sdram_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_ready = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__main_new_banks_read3 = 0U;
    vlSymsp->TOP__sim.__PVT__main_new_banks_read_data3 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_last = 0U;
    vlSymsp->TOP__sim.__PVT__main_reset_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_write_from_slave = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[3U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_tx_pending = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_rx_pending = 0U;
}

void Vsim_sim::_initial__TOP__sim__2(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_initial__TOP__sim__2\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp6[3];
    // Body
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_col = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_col = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_col = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_col = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata = 0U;
    vlSymsp->TOP__sim.__PVT__main_adr_offset_r = 0U;
    vlSymsp->TOP__sim.__PVT__main_precharge = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata_mask = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed26 = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_row = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_row = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_row = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_row = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_refresh_gnt = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_refresh_gnt = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_refresh_gnt = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_refresh_gnt = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_a = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_a = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_a = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_a = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__main_port_cmd_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_pending_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_pending_r = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed29 = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[3U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_activate = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_active = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_active = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_active = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_active = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_interface_wdata = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_interface_wdata_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel = 0U;
    __Vtemp6[0U] = 0x696e6974U;
    __Vtemp6[1U] = 0x6d656d2eU;
    __Vtemp6[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 8, 37, 0, VL_CVT_PACK_STR_NW(3, __Vtemp6)
                 , vlSymsp->TOP__sim.__PVT__mem, 0, ~VL_ULL(0));
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sel_r = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_col_n_addr_sel = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_col_n_addr_sel = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_col_n_addr_sel = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_col_n_addr_sel = 0U;
    vlSymsp->TOP__sim.__PVT__main_interface_ack = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_auto_precharge = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_auto_precharge = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_auto_precharge = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_auto_precharge = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_ack = 0U;
    vlSymsp->TOP__sim.__PVT__main_wb_sdram_ack = 0U;
    vlSymsp->TOP__sim.__PVT__main_write = 0U;
    vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted = 0U;
    vlSymsp->TOP__sim.__PVT__main_interface_cyc = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_interface_stb = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank = 0U;
    vlSymsp->TOP__sim.__PVT__main_interface_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_read = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_address = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_bank = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_source_payload_data = VL_ULL(0);
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cas_n = 1U;
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cs_n = 1U;
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_ras_n = 1U;
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_we_n = 1U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[4U] = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_cas_n = 1U;
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_cs_n = 1U;
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_ras_n = 1U;
    vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_we_n = 1U;
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_cas_n = 1U;
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_cs_n = 1U;
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_ras_n = 1U;
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_we_n = 1U;
    vlSymsp->TOP__sim.__PVT__builder_t_array_muxed3 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_t_array_muxed4 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_t_array_muxed5 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_reads = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_writes = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_activates = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_cmd = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_cmd = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_cmd = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_cmd = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_read = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_read = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_read = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_read = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_cas = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_ras = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_cas = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_ras = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_cas = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_ras = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_cas = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_ras = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_we = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_opened = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_opened = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_opened = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_opened = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row = 0U;
}

void Vsim_sim::_initial__TOP__sim__3(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_initial__TOP__sim__3\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp7[3];
    // Body
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state = 0U;
    __Vtemp7[0U] = 0x696e6974U;
    __Vtemp7[1U] = 0x726f6d2eU;
    __Vtemp7[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 32, 6235, 0, VL_CVT_PACK_STR_NW(3, __Vtemp7)
                 , vlSymsp->TOP__sim.__PVT__rom, 0, ~VL_ULL(0));
    vlSymsp->TOP__sim.__PVT__main_scratch_storage = 0x12345678U;
    vlSymsp->TOP__sim.__PVT__main_bus_errors = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_tx_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_rx_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_consume = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_consume = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_update_value_storage = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_value_status = 0U;
    vlSymsp->TOP__sim.__PVT__main_new_banks_read2 = 0U;
    vlSymsp->TOP__sim.__PVT__main_new_banks_read_data2 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_rddata_status = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_postponer_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_trrdcon_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_tccdcon_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_twtrcon_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_first = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_last = 0U;
    vlSymsp->TOP__sim.__PVT__main_interrupt = 0U;
    vlSymsp->TOP__sim.__PVT__main_ram_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_rxtx_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_tx_clear = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_status_status = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_wrport_adr = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_wrport_adr = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_activate = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_activate_row = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_precharge = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_adr = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_dat_w = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_activate = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_activate_row = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_precharge = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_adr = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_dat_w = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_activate = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_activate_row = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_precharge = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_adr = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_dat_w = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_activate = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_activate_row = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_precharge = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_adr = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_dat_w = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_wrport_adr = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_open = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_wrport_adr = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_open = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_wrport_adr = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_open = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_wrport_adr = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_open = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_en0 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_en1 = 0U;
    vlSymsp->TOP__sim.__PVT__main_data_port_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[3U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_tag_port_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_tag_di_dirty = 0U;
    vlSymsp->TOP__sim.__PVT__builder_error = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_bus_errors_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_rddata_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_next_state = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_next_state = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_next_state = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_next_state = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_next_state = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_next_state = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_next_state = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_next_state = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count_litedramnativeportconverter_next_value = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count_litedramnativeportconverter_next_value_ce = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_next_state = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted_fsm_next_value = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted_fsm_next_value_ce = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_next_state = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_we_next_value2 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_we_next_value_ce2 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed12 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed13 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed14 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed15 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed16 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed17 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed18 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed19 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed20 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed21 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed22 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed23 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_array_muxed0 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_array_muxed1 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_array_muxed2 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_array_muxed3 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_array_muxed4 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_array_muxed5 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_array_muxed6 = 0U;
}

void Vsim_sim::_initial__TOP__sim__4(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_initial__TOP__sim__4\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_sdram_timer_count1 = 0x30dU;
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_produce = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_produce = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_produce = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_produce = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_produce = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_produce = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_start0 = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_enable_storage = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_zero_pending = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_enable_storage = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_pending_status = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed9 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed10 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_twtrcon_ready = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed25 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_time0 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_time1 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed0 = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable = 0U;
    vlSymsp->TOP__sim.__PVT__main_reset_storage = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids = 0U;
    vlSymsp->TOP__sim.__PVT__builder_shared_ack = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_wrdata_storage = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28 = 0U;
    vlSymsp->TOP__sim.__PVT__main_simsoc_ram_bus_ack = 0U;
    vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_ack = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_ready = 0U;
    vlSymsp->TOP__sim.__PVT__builder_count = 0xf4240U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant = 0U;
    vlSymsp->TOP__sim.__PVT__builder_slave_sel = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed27 = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_close = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_close = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_close = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_close = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_strobe_all = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_wdata_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_address_storage = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_baddress_storage = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_tccdcon_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_cas = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_ras = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux = 0U;
    vlSymsp->TOP__sim.__PVT__builder_grant = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_consume = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_consume = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_consume = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_consume = 0U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_storage = 1U;
    vlSymsp->TOP__sim.__PVT__main_sdram_command_storage = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_adr = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_write = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_write = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_write = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_write = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_trrdcon_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_addr = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_addr = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_addr = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_addr = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done1 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_count = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_load_storage = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_reload_storage = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_en_storage = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_update_value_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_zero_trigger_d = 0U;
    vlSymsp->TOP__sim.__PVT__main_new_banks_read1 = 0U;
    vlSymsp->TOP__sim.__PVT__main_new_banks_read_data1 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_counter = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_demux = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid4 = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_zero_clear = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_rddata = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_rddata_valid = 0U;
    vlSymsp->TOP__sim.__PVT__builder_shared_dat_r = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_reset0_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_scratch0_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_control0_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_command0_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_address0_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_baddress0_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_wrdata0_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_adr_next_value1 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_adr_next_value_ce1 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_wdata_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_wdata_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_wdata_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_wdata_ready = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0 = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level = 0U;
}

void Vsim_sim::_initial__TOP__sim__5(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_initial__TOP__sim__5\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_timer_value = 0U;
    vlSymsp->TOP__sim.__PVT__main_new_banks_read0 = 0U;
    vlSymsp->TOP__sim.__PVT__main_new_banks_read_data0 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid3 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_re = 0U;
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_re = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_rx_clear = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid2 = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_data = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_data = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_data = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_data = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w_next_value0 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w_next_value_ce0 = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_read = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_read = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_read = 0U;
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_read = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid1 = 0U;
    vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_rdata_valid0 = 0U;
    vlSymsp->TOP__sim.__PVT__main_int_rst = 1U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_rdata_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_rdata_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_rdata_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_rdata_valid = 0U;
}

void Vsim_sim::_settle__TOP__sim__6(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__6\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_sdram_ext_dfi_p0_rddata = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_ext_dfi_p0_rddata_valid = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_act_n = 1U;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed31 = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted_fsm_next_value_ce = 1U;
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_last 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_dat1) 
                 >> 9U));
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_first 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_dat1) 
                 >> 8U));
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_last 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1) 
                 >> 9U));
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_first 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1) 
                 >> 8U));
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_1_dat1));
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlSymsp->TOP__sim.__PVT__storage_dat1));
    vlSymsp->TOP__sim.__PVT__main_tag_port_dat_r = 
        vlSymsp->TOP__sim.__PVT__tag_mem[vlSymsp->TOP__sim.__PVT__tag_mem_adr0];
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U] 
        = ((0xffffff00U & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U]) 
           | vlSymsp->TOP__sim.__PVT__data_mem_grain0
           [vlSymsp->TOP__sim.__PVT__data_mem_grain0_adr0]);
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U] 
        = ((0xffff00ffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U]) 
           | (0xffffff00U & (vlSymsp->TOP__sim.__PVT__data_mem_grain1
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain1_adr0] 
                             << 8U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U] 
        = ((0xff00ffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U]) 
           | (0xffff0000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain2
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain2_adr0] 
                             << 0x10U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U] 
        = ((0xffffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U]) 
           | (0xff000000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain3
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain3_adr0] 
                             << 0x18U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U] 
        = ((0xffffff00U & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U]) 
           | vlSymsp->TOP__sim.__PVT__data_mem_grain4
           [vlSymsp->TOP__sim.__PVT__data_mem_grain4_adr0]);
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U] 
        = ((0xffff00ffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U]) 
           | (0xffffff00U & (vlSymsp->TOP__sim.__PVT__data_mem_grain5
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain5_adr0] 
                             << 8U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U] 
        = ((0xff00ffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U]) 
           | (0xffff0000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain6
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain6_adr0] 
                             << 0x10U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U] 
        = ((0xffffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U]) 
           | (0xff000000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain7
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain7_adr0] 
                             << 0x18U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U] 
        = ((0xffffff00U & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U]) 
           | vlSymsp->TOP__sim.__PVT__data_mem_grain8
           [vlSymsp->TOP__sim.__PVT__data_mem_grain8_adr0]);
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U] 
        = ((0xffff00ffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U]) 
           | (0xffffff00U & (vlSymsp->TOP__sim.__PVT__data_mem_grain9
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain9_adr0] 
                             << 8U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U] 
        = ((0xff00ffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U]) 
           | (0xffff0000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain10
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain10_adr0] 
                             << 0x10U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U] 
        = ((0xffffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U]) 
           | (0xff000000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain11
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain11_adr0] 
                             << 0x18U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U] 
        = ((0xffffff00U & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U]) 
           | vlSymsp->TOP__sim.__PVT__data_mem_grain12
           [vlSymsp->TOP__sim.__PVT__data_mem_grain12_adr0]);
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U] 
        = ((0xffff00ffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U]) 
           | (0xffffff00U & (vlSymsp->TOP__sim.__PVT__data_mem_grain13
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain13_adr0] 
                             << 8U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U] 
        = ((0xff00ffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U]) 
           | (0xffff0000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain14
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain14_adr0] 
                             << 0x10U)));
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U] 
        = ((0xffffffU & vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U]) 
           | (0xff000000U & (vlSymsp->TOP__sim.__PVT__data_mem_grain15
                             [vlSymsp->TOP__sim.__PVT__data_mem_grain15_adr0] 
                             << 0x18U)));
    vlSymsp->TOP__sim.__PVT__main_timer_zero_clear = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__main_timer_pending_re) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_timer_pending_r))) {
        vlSymsp->TOP__sim.__PVT__main_timer_zero_clear = 1U;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_pending_status = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_pending_status 
        = ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_status)) 
           | (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_pending));
    vlSymsp->TOP__sim.__PVT__main_uart_pending_status 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_status)) 
           | ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_pending) 
              << 1U));
    vlSymsp->TOP__sim.__PVT__main_uart_tx_clear = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_re) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_r))) {
        vlSymsp->TOP__sim.__PVT__main_uart_tx_clear = 1U;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_rx_clear = 0U;
    if (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_re) 
         & ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_r) 
            >> 1U))) {
        vlSymsp->TOP__sim.__PVT__main_uart_rx_clear = 1U;
    }
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[3U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[0U] 
        = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[0U];
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[1U] 
        = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[1U];
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[2U] 
        = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[2U];
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[3U] 
        = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_source_payload_data[3U];
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sel_r) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r 
            = ((0x24U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                ? vlSymsp->TOP__sim.__PVT__mem[vlSymsp->TOP__sim.__PVT__mem_adr0]
                : 0U);
    }
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_is_ongoing = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_is_ongoing = 1U;
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_ack = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
            vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_ack = 1U;
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w_next_value_ce0 = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
        if ((2U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
            vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w_next_value_ce0 = 1U;
        }
    }
    vlSymsp->TOP__sim.__PVT__main_port_cmd_valid = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state) {
        vlSymsp->TOP__sim.__PVT__main_port_cmd_valid = 1U;
    }
    vlSymsp->TOP__sim.__PVT__main_interface_cyc = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
            vlSymsp->TOP__sim.__PVT__main_interface_cyc = 1U;
        } else {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
                vlSymsp->TOP__sim.__PVT__main_interface_cyc = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_interface_stb = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
            vlSymsp->TOP__sim.__PVT__main_interface_stb = 1U;
        } else {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
                vlSymsp->TOP__sim.__PVT__main_interface_stb = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_interface_we = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
            vlSymsp->TOP__sim.__PVT__main_interface_we = 1U;
        } else {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
                vlSymsp->TOP__sim.__PVT__main_interface_we = 0U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_en1 = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state))) {
                vlSymsp->TOP__sim.__PVT__main_sdram_en1 = 1U;
            }
        }
    }
}

void Vsim_sim::_settle__TOP__sim__7(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__7\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__Vtableidx48 = vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state;
    vlSymsp->TOP__sim.__PVT__main_sdram_en0 = vlSymsp->TOP__sim.__Vtable48___PVT__main_sdram_en0
        [vlSymsp->TOP__sim.__Vtableidx48];
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_ready = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state)))) {
                vlSymsp->TOP__sim.__PVT__main_sdram_cmd_ready = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__Vtableidx47 = vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state;
    vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel 
        = vlSymsp->TOP__sim.__Vtable47___PVT__main_sdram_steerer_sel
        [vlSymsp->TOP__sim.__Vtableidx47];
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_writes = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state))) {
                vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_writes = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__Vtableidx45 = vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_reads 
        = vlSymsp->TOP__sim.__Vtable45___PVT__main_sdram_choose_req_want_reads
        [vlSymsp->TOP__sim.__Vtableidx45];
    vlSymsp->TOP__sim.__Vtableidx8 = vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_close 
        = vlSymsp->TOP__sim.__Vtable8___PVT__main_sdram_bankmachine0_row_close
        [vlSymsp->TOP__sim.__Vtableidx8];
    vlSymsp->TOP__sim.__Vtableidx15 = vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_close 
        = vlSymsp->TOP__sim.__Vtable15___PVT__main_sdram_bankmachine1_row_close
        [vlSymsp->TOP__sim.__Vtableidx15];
    vlSymsp->TOP__sim.__Vtableidx23 = vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_close 
        = vlSymsp->TOP__sim.__Vtable23___PVT__main_sdram_bankmachine2_row_close
        [vlSymsp->TOP__sim.__Vtableidx23];
    vlSymsp->TOP__sim.__Vtableidx43 = vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_close 
        = vlSymsp->TOP__sim.__Vtable43___PVT__main_sdram_bankmachine3_row_close
        [vlSymsp->TOP__sim.__Vtableidx43];
    vlSymsp->TOP__sim.__PVT__main_sdram_timer_done1 
        = (0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_timer_count1));
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_produce;
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_produce;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_produce;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_produce;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_produce;
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_wrport_adr 
        = vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_produce;
    vlSymsp->TOP__sim.__PVT__main_sdram_max_time0 = 
        (0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_time0));
    vlSymsp->TOP__sim.__PVT__main_sdram_max_time1 = 
        (0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_time1));
    vlSymsp->TOP__sim.__PVT__main_soc_rst = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_reset_re) {
        vlSymsp->TOP__sim.__PVT__main_soc_rst = (1U 
                                                 & (IData)(vlSymsp->TOP__sim.__PVT__main_reset_storage));
    }
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0));
    vlSymsp->TOP__sim.__PVT__builder_done = (0U == vlSymsp->TOP__sim.__PVT__builder_count);
    vlSymsp->TOP__sim.__PVT__builder_error = 0U;
    if ((0U == vlSymsp->TOP__sim.__PVT__builder_count)) {
        vlSymsp->TOP__sim.__PVT__builder_error = 1U;
    }
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed2 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
            ? 0U : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                     ? 1U : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                              ? 2U : 3U)));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_last 
        = (3U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_ready 
        = ((3U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux)) 
           & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_wdata_ready));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed25 
        = ((IData)(vlSymsp->TOP__sim.__PVT__builder_grant)
            ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data
            : 0U);
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
        = (0x3fffffffU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_grant)
                           ? (((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                ? ((0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                   | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
                                      << 2U)) : (0xfffffffcU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                              >> 2U) : ((0x3ffffff8U 
                                         & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                            >> 2U)) 
                                        | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed26 
        = ((IData)(vlSymsp->TOP__sim.__PVT__builder_grant)
            ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                : 0xfU) : 0xfU);
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed29 
        = ((IData)(vlSymsp->TOP__sim.__PVT__builder_grant) 
           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_rdport_dat_r 
        = vlSymsp->TOP__sim.__PVT__storage_2[vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_consume];
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_rdport_dat_r 
        = vlSymsp->TOP__sim.__PVT__storage_3[vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_consume];
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_rdport_dat_r 
        = vlSymsp->TOP__sim.__PVT__storage_4[vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_consume];
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_rdport_dat_r 
        = vlSymsp->TOP__sim.__PVT__storage_5[vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_consume];
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cke 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage) 
                 | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage) 
                    >> 1U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_odt 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage) 
                 | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage) 
                    >> 2U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_reset_n 
        = (1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage) 
                 | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage) 
                    >> 3U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata = 0U;
    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata 
            = vlSymsp->TOP__sim.__PVT__main_new_banks_read_data3;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata_valid = 0U;
    if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_slave_p0_rddata_valid 
            = vlSymsp->TOP__sim.__PVT__main_new_banks_read3;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_rddata = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage)))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_rddata 
            = vlSymsp->TOP__sim.__PVT__main_new_banks_read_data3;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_rddata_valid = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage)))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_rddata_valid 
            = vlSymsp->TOP__sim.__PVT__main_new_banks_read3;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_address)
            : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_address_storage));
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_bank)
            : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_baddress_storage));
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_reset0_re = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_reset0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_reset0_we = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_reset0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_scratch0_re = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_scratch0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
}

void Vsim_sim::_settle__TOP__sim__8(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__8\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_scratch0_we = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_scratch0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_bus_errors_we = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_bus_errors_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_bus_errors_re = 0U;
    if (((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_bus_errors_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_control0_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_control0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_control0_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_control0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_command0_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_command0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_command0_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_command0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_address0_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_address0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_address0_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_address0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_baddress0_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_baddress0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_baddress0_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_baddress0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_wrdata0_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_wrdata0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_wrdata0_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_wrdata0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_rddata_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_rddata_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_rddata_we = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_dfii_pi0_rddata_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
}

void Vsim_sim::_settle__TOP__sim__9(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__9\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_we = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__main_uart_rxtx_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__main_uart_rxtx_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__main_uart_rxtx_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__main_uart_rxtx_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (4U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (5U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (6U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_we = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_we 
            = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_we)));
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_re = 0U;
    if (((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (7U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re = 0U;
    if (((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (0U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (1U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (2U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
}

void Vsim_sim::_settle__TOP__sim__10(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__10\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_re = 0U;
    if (((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                          >> 9U))) & (3U == (0x1ffU 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))))) {
        vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_re 
            = vlSymsp->TOP__sim.__PVT__builder_simsoc_we;
    }
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed8 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
            ? 0U : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                     ? 1U : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                              ? 2U : 3U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_activates 
        = vlSymsp->TOP__sim.__PVT__main_sdram_trrdcon_ready;
    vlSymsp->TOP__sim.__Vtableidx7 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_ready) 
                                       << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_open 
        = vlSymsp->TOP__sim.__Vtable7___PVT__main_sdram_bankmachine0_row_open
        [vlSymsp->TOP__sim.__Vtableidx7];
    vlSymsp->TOP__sim.__Vtableidx9 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_ready) 
                                       << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_col_n_addr_sel 
        = vlSymsp->TOP__sim.__Vtable9___PVT__main_sdram_bankmachine0_row_col_n_addr_sel
        [vlSymsp->TOP__sim.__Vtableidx9];
    vlSymsp->TOP__sim.__Vtableidx14 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_open 
        = vlSymsp->TOP__sim.__Vtable14___PVT__main_sdram_bankmachine1_row_open
        [vlSymsp->TOP__sim.__Vtableidx14];
    vlSymsp->TOP__sim.__Vtableidx16 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_col_n_addr_sel 
        = vlSymsp->TOP__sim.__Vtable16___PVT__main_sdram_bankmachine1_row_col_n_addr_sel
        [vlSymsp->TOP__sim.__Vtableidx16];
    vlSymsp->TOP__sim.__Vtableidx33 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_open 
        = vlSymsp->TOP__sim.__Vtable33___PVT__main_sdram_bankmachine2_row_open
        [vlSymsp->TOP__sim.__Vtableidx33];
    vlSymsp->TOP__sim.__Vtableidx24 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_col_n_addr_sel 
        = vlSymsp->TOP__sim.__Vtable24___PVT__main_sdram_bankmachine2_row_col_n_addr_sel
        [vlSymsp->TOP__sim.__Vtableidx24];
    vlSymsp->TOP__sim.__Vtableidx42 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_open 
        = vlSymsp->TOP__sim.__Vtable42___PVT__main_sdram_bankmachine3_row_open
        [vlSymsp->TOP__sim.__Vtableidx42];
    vlSymsp->TOP__sim.__Vtableidx44 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_col_n_addr_sel 
        = vlSymsp->TOP__sim.__Vtable44___PVT__main_sdram_bankmachine3_row_col_n_addr_sel
        [vlSymsp->TOP__sim.__Vtableidx44];
    vlSymsp->TOP__sim.__Vtableidx6 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_ready) 
                                       << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_refresh_gnt 
        = vlSymsp->TOP__sim.__Vtable6___PVT__main_sdram_bankmachine0_refresh_gnt
        [vlSymsp->TOP__sim.__Vtableidx6];
    vlSymsp->TOP__sim.__Vtableidx1 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_ready) 
                                       << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_ready) 
                                                  << 4U) 
                                                 | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_ready) 
                                                     << 3U) 
                                                    | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_cmd 
        = vlSymsp->TOP__sim.__Vtable1___PVT__main_sdram_bankmachine0_cmd_payload_is_cmd
        [vlSymsp->TOP__sim.__Vtableidx1];
    vlSymsp->TOP__sim.__Vtableidx11 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_ready) 
                                        << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_ready) 
                                                      << 3U) 
                                                     | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_ras 
        = vlSymsp->TOP__sim.__Vtable11___PVT__main_sdram_bankmachine0_cmd_payload_ras
        [vlSymsp->TOP__sim.__Vtableidx11];
    vlSymsp->TOP__sim.__Vtableidx13 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_refresh_gnt 
        = vlSymsp->TOP__sim.__Vtable13___PVT__main_sdram_bankmachine1_refresh_gnt
        [vlSymsp->TOP__sim.__Vtableidx13];
    vlSymsp->TOP__sim.__Vtableidx19 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_ready) 
                                        << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_ready) 
                                                      << 3U) 
                                                     | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_cmd 
        = vlSymsp->TOP__sim.__Vtable19___PVT__main_sdram_bankmachine1_cmd_payload_is_cmd
        [vlSymsp->TOP__sim.__Vtableidx19];
    vlSymsp->TOP__sim.__Vtableidx18 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_ready) 
                                        << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_ready) 
                                                      << 3U) 
                                                     | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_ras 
        = vlSymsp->TOP__sim.__Vtable18___PVT__main_sdram_bankmachine1_cmd_payload_ras
        [vlSymsp->TOP__sim.__Vtableidx18];
    vlSymsp->TOP__sim.__Vtableidx32 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_refresh_gnt 
        = vlSymsp->TOP__sim.__Vtable32___PVT__main_sdram_bankmachine2_refresh_gnt
        [vlSymsp->TOP__sim.__Vtableidx32];
    vlSymsp->TOP__sim.__Vtableidx27 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_ready) 
                                        << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_ready) 
                                                      << 3U) 
                                                     | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_cmd 
        = vlSymsp->TOP__sim.__Vtable27___PVT__main_sdram_bankmachine2_cmd_payload_is_cmd
        [vlSymsp->TOP__sim.__Vtableidx27];
    vlSymsp->TOP__sim.__Vtableidx26 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_ready) 
                                        << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_ready) 
                                                      << 3U) 
                                                     | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_ras 
        = vlSymsp->TOP__sim.__Vtable26___PVT__main_sdram_bankmachine2_cmd_payload_ras
        [vlSymsp->TOP__sim.__Vtableidx26];
    vlSymsp->TOP__sim.__Vtableidx41 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_ready) 
                                        << 3U) | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_refresh_gnt 
        = vlSymsp->TOP__sim.__Vtable41___PVT__main_sdram_bankmachine3_refresh_gnt
        [vlSymsp->TOP__sim.__Vtableidx41];
    vlSymsp->TOP__sim.__Vtableidx36 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_ready) 
                                        << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_ready) 
                                                      << 3U) 
                                                     | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_cmd 
        = vlSymsp->TOP__sim.__Vtable36___PVT__main_sdram_bankmachine3_cmd_payload_is_cmd
        [vlSymsp->TOP__sim.__Vtableidx36];
    vlSymsp->TOP__sim.__Vtableidx35 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_ready) 
                                        << 5U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_ready) 
                                                      << 3U) 
                                                     | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_ras 
        = vlSymsp->TOP__sim.__Vtable35___PVT__main_sdram_bankmachine3_cmd_payload_ras
        [vlSymsp->TOP__sim.__Vtableidx35];
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_hit 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row) 
           == (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_hit 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row) 
           == (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_hit 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row) 
           == (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_hit 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row) 
           == (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_addr 
                          >> 9U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done0 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done1) 
           & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_count)));
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0));
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0)) 
           & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable)) 
              | (IData)(vlTOPp->serial_source_ready)));
    vlSymsp->TOP__sim.__PVT__main_uart_status_status = 0U;
    vlSymsp->TOP__sim.__PVT__main_uart_status_status 
        = ((2U & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_status_status)) 
           | (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0)));
    vlSymsp->TOP__sim.__PVT__main_uart_status_status 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_status_status)) 
           | ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable) 
              << 1U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_syncfifo0_writable 
        = (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_syncfifo1_writable 
        = (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_syncfifo2_writable 
        = (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_syncfifo3_writable 
        = (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_lock 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level)) 
           | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_lock 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level)) 
           | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_lock 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level)) 
           | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_lock 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level)) 
           | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed30 
        = ((IData)(vlSymsp->TOP__sim.__PVT__builder_grant)
            ? ((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)
                    ? 7U : 2U) : 0U) : ((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                         ? 7U : 2U));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28 
        = ((IData)(vlSymsp->TOP__sim.__PVT__builder_grant)
            ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)
            : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB));
    vlSymsp->TOP__sim.__PVT__builder_request = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed27 
        = ((IData)(vlSymsp->TOP__sim.__PVT__builder_grant)
            ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)
            : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
    vlSymsp->TOP__sim.__PVT__main_tag_do_dirty = (1U 
                                                  & (vlSymsp->TOP__sim.__PVT__main_tag_port_dat_r 
                                                     >> 0x17U));
    vlSymsp->TOP__sim.__PVT__main_tag_do_tag = (0x7fffffU 
                                                & vlSymsp->TOP__sim.__PVT__main_tag_port_dat_r);
    vlSymsp->TOP__sim.__PVT__main_wb_sdram_dat_r = 
        ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_adr_offset_r))
          ? vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U]
          : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_adr_offset_r))
              ? vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U]
              : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_adr_offset_r))
                  ? vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U]
                  : vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U])));
}
