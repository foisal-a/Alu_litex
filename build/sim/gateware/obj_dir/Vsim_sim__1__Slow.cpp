// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim_sim.h"
#include "Vsim__Syms.h"

#include "verilated_dpi.h"

void Vsim_sim::_settle__TOP__sim__11(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__11\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[4U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[0U] 
        = vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[0U];
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[1U] 
        = (0xfU | vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[1U]);
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[1U] 
        = ((0xfU & vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[1U]) 
           | (0xfffffff0U & (vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U] 
                             << 4U)));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U] 
        = ((0xfffffff0U & vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U]) 
           | (0xfU & (vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[1U] 
                      >> 0x1cU)));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U] 
        = (0xf0U | vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U]);
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U] 
        = ((0xffU & vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U]) 
           | (0xffffff00U & (vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U] 
                             << 8U)));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U] 
        = ((0xffffff00U & vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U]) 
           | (0xffU & (vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[2U] 
                       >> 0x18U)));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U] 
        = (0xf00U | vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U]);
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U] 
        = ((0xfffU & vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U]) 
           | (0xfffff000U & (vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U] 
                             << 0xcU)));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[4U] 
        = ((0xf000U & vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[4U]) 
           | (0xfffU & (vlSymsp->TOP__sim.__PVT__main_data_port_dat_r[3U] 
                        >> 0x14U)));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[4U] 
        = (0xf000U | vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[4U]);
    vlSymsp->TOP__sim.__PVT__main_interrupt = 0U;
    vlSymsp->TOP__sim.__PVT__main_interrupt = ((0xfffffffdU 
                                                & vlSymsp->TOP__sim.__PVT__main_interrupt) 
                                               | (((IData)(vlSymsp->TOP__sim.__PVT__main_timer_zero_pending) 
                                                   & (IData)(vlSymsp->TOP__sim.__PVT__main_timer_enable_storage)) 
                                                  << 1U));
    vlSymsp->TOP__sim.__PVT__main_interrupt = ((0xfffffffeU 
                                                & vlSymsp->TOP__sim.__PVT__main_interrupt) 
                                               | (1U 
                                                  & (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_status) 
                                                      & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage)) 
                                                     | (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_status) 
                                                         & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage)) 
                                                        >> 1U))));
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0)) 
           & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable)) 
              | (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_clear)));
    vlSymsp->TOP__sim.__PVT__main_interface_dat_r[0U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_interface_dat_r[1U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_interface_dat_r[2U] = 0U;
    vlSymsp->TOP__sim.__PVT__main_interface_dat_r[3U] = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
            if (vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_strobe_all) {
                vlSymsp->TOP__sim.__PVT__main_interface_dat_r[0U] 
                    = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[0U];
                vlSymsp->TOP__sim.__PVT__main_interface_dat_r[1U] 
                    = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[1U];
                vlSymsp->TOP__sim.__PVT__main_interface_dat_r[2U] 
                    = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[2U];
                vlSymsp->TOP__sim.__PVT__main_interface_dat_r[3U] 
                    = vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_source_payload_data[3U];
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_dat_r = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
            vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_dat_r 
                = ((((vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                      | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r) 
                     | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r) 
                    | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r) 
                   | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r);
        }
    }
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted_fsm_next_value 
        = (1U & ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))
                  ? ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_interface_cyc)) 
                     | (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted))
                  : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state)) 
                     & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_interface_cyc)) 
                        | (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted)))));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_valid = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
        if ((2U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
            vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_valid 
                = ((IData)(vlSymsp->TOP__sim.__PVT__main_interface_cyc) 
                   & (IData)(vlSymsp->TOP__sim.__PVT__main_interface_stb));
        }
    }
    vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_we = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state) {
        vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_we 
            = vlSymsp->TOP__sim.__PVT__main_interface_we;
    }
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_valid 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_interface_stb) 
           & (IData)(vlSymsp->TOP__sim.__PVT__main_interface_we));
    vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_start0 = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state))) {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_cmd_ready) {
            vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_start0 = 1U;
        }
    }
    vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset = 
        (1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_int_rst) 
               | ((IData)(vlSymsp->TOP__sim.__PVT__main_soc_rst) 
                  | ((IData)(vlSymsp->TOP__sim.__PVT__main_reset_storage) 
                     >> 1U))));
    vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w_next_value0 = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
        if ((2U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
            vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w_next_value0 
                = vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed25;
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_slave_sel = 0U;
    vlSymsp->TOP__sim.__PVT__builder_slave_sel = ((0xeU 
                                                   & (IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel)) 
                                                  | (0U 
                                                     == 
                                                     (0x7fffU 
                                                      & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                                                         >> 0xfU))));
    vlSymsp->TOP__sim.__PVT__builder_slave_sel = ((0xdU 
                                                   & (IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel)) 
                                                  | ((0x8000U 
                                                      == 
                                                      (0x7ffffU 
                                                       & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                                                          >> 0xbU))) 
                                                     << 1U));
    vlSymsp->TOP__sim.__PVT__builder_slave_sel = ((0xbU 
                                                   & (IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel)) 
                                                  | ((0x10U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                                                          >> 0x18U))) 
                                                     << 2U));
    vlSymsp->TOP__sim.__PVT__builder_slave_sel = ((7U 
                                                   & (IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel)) 
                                                  | ((0xf000U 
                                                      == 
                                                      (0xffffU 
                                                       & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                                                          >> 0xeU))) 
                                                     << 3U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_last 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_rdport_dat_r 
                 >> 0x18U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_first 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_rdport_dat_r 
                 >> 0x17U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_payload_we 
        = (1U & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_rdport_dat_r);
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_payload_addr 
        = (0x3fffffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_rdport_dat_r 
                        >> 1U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_last 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_rdport_dat_r 
                 >> 0x18U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_first 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_rdport_dat_r 
                 >> 0x17U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_payload_we 
        = (1U & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_rdport_dat_r);
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_payload_addr 
        = (0x3fffffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_rdport_dat_r 
                        >> 1U));
}

void Vsim_sim::_settle__TOP__sim__12(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__12\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_last 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_rdport_dat_r 
                 >> 0x18U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_first 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_rdport_dat_r 
                 >> 0x17U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_payload_we 
        = (1U & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_rdport_dat_r);
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_payload_addr 
        = (0x3fffffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_rdport_dat_r 
                        >> 1U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_last 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_rdport_dat_r 
                 >> 0x18U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_first 
        = (1U & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_rdport_dat_r 
                 >> 0x17U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_payload_we 
        = (1U & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_rdport_dat_r);
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_payload_addr 
        = (0x3fffffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_rdport_dat_r 
                        >> 1U));
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata_en 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_wrdata_en)
            : ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re) 
               & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                  >> 4U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_rddata_en 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_rddata_en)
            : ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re) 
               & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                  >> 5U)));
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_we_n 
        = (1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re)) 
                 | (~ ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                       >> 1U))));
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_cas_n 
        = (1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re)) 
                 | (~ ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                       >> 2U))));
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_cs_n 
        = (1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re)) 
                 | (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage))));
    vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_ras_n 
        = (1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_issue_re)) 
                 | (~ ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_command_storage) 
                       >> 3U))));
    vlSymsp->TOP__sim.__PVT__builder_array_muxed0 = 
        ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
          ? 0U : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
                   ? (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed8)
                   : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
                       ? (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed8)
                       : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ba))));
    vlSymsp->TOP__sim.__PVT__main_sdram_go_to_refresh 
        = ((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_refresh_gnt) 
             & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_refresh_gnt)) 
            & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_refresh_gnt)) 
           & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_refresh_gnt));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed5 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_cmd)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_cmd)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_cmd)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_cmd))));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed11 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_cmd)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_cmd)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_cmd)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_cmd))));
    vlSymsp->TOP__sim.__PVT__builder_t_array_muxed1 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_ras)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_ras)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_ras)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_ras))));
    vlSymsp->TOP__sim.__PVT__builder_t_array_muxed4 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_ras)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_ras)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_ras)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_ras))));
    vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_next_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state))) {
        if (vlSymsp->TOP__sim.__PVT__main_sdram_cmd_ready) {
            vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_next_state = 2U;
        }
    } else {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state))) {
            if (vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done0) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_next_state = 0U;
            }
        } else {
            if (vlSymsp->TOP__sim.__PVT__main_sdram_postponer_req_o) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_next_state = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_last = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state))) {
            if (vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done0) {
                vlSymsp->TOP__sim.__PVT__main_sdram_cmd_last = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid = 1U;
    } else {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_refresher_state))) {
            vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid = 1U;
            if (vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_done0) {
                vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid = 0U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_do_read 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0)) 
           & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_syncfifo_re));
    vlSymsp->TOP__sim.__PVT__main_wb_sdram_ack = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
        if ((vlSymsp->TOP__sim.__PVT__main_tag_do_tag 
             == (0x7ffffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                             >> 0xbU)))) {
            vlSymsp->TOP__sim.__PVT__main_wb_sdram_ack = 1U;
        }
    }
    vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state) {
        vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
            = (0xffffffU & (((0xfff800U & (vlSymsp->TOP__sim.__PVT__main_tag_do_tag 
                                           << 0xbU)) 
                             | (0x7fcU & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24)) 
                            + (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count)));
    }
}

void Vsim_sim::_settle__TOP__sim__13(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__13\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_tag_di_dirty = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
        if ((vlSymsp->TOP__sim.__PVT__main_tag_do_tag 
             == (0x7ffffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                             >> 0xbU)))) {
            if (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed29) {
                vlSymsp->TOP__sim.__PVT__main_tag_di_dirty = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_source_payload_data 
        = (VL_ULL(0xfffffffff) & ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux))
                                   ? (((QData)((IData)(
                                                       vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[0U])))
                                   : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux))
                                       ? (((QData)((IData)(
                                                           vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U])) 
                                           << 0x3cU) 
                                          | (((QData)((IData)(
                                                              vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U])) 
                                              << 0x1cU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[1U])) 
                                                >> 4U)))
                                       : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_mux))
                                           ? (((QData)((IData)(
                                                               vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[4U])) 
                                               << 0x38U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U])) 
                                                  << 0x18U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[2U])) 
                                                    >> 8U)))
                                           : (((QData)((IData)(
                                                               vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[4U])) 
                                               << 0x14U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_payload_data[3U])) 
                                                 >> 0xcU))))));
    vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_do_read 
        = ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0)) 
           & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_syncfifo_re));
    vlSymsp->TOP__sim.__PVT__builder_shared_dat_r = 
        ((((VL_NEGATE_I((IData)((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel_r)))) 
            & vlSymsp->TOP__sim.__PVT__rom_dat0) | 
           (VL_NEGATE_I((IData)((1U & ((IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel_r) 
                                       >> 1U)))) & 
            vlSymsp->TOP__sim.__PVT__sram[vlSymsp->TOP__sim.__PVT__sram_adr0])) 
          | (VL_NEGATE_I((IData)((1U & ((IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel_r) 
                                        >> 2U)))) & vlSymsp->TOP__sim.__PVT__main_wb_sdram_dat_r)) 
         | (VL_NEGATE_I((IData)((1U & ((IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel_r) 
                                       >> 3U)))) & vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_dat_r));
    if ((0U == vlSymsp->TOP__sim.__PVT__builder_count)) {
        vlSymsp->TOP__sim.__PVT__builder_shared_dat_r = 0xffffffffU;
    }
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed13 
        = vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_we;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed16 
        = vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_we;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed19 
        = vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_we;
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed22 
        = vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_we;
    vlSymsp->TOP__sim.__PVT__main_interface_ack = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
        if (((IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_valid) 
             & (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_ready))) {
            vlSymsp->TOP__sim.__PVT__main_interface_ack 
                = ((IData)(vlSymsp->TOP__sim.__PVT__main_interface_cyc) 
                   & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted)));
        }
    } else {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
            if (vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_strobe_all) {
                vlSymsp->TOP__sim.__PVT__main_interface_ack 
                    = ((IData)(vlSymsp->TOP__sim.__PVT__main_interface_cyc) 
                       & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_aborted)));
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_start1 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_start0) 
           | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_sequencer_count));
    vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_cyc 
        = ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed27) 
           & ((IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel) 
              >> 1U));
    vlSymsp->TOP__sim.__PVT__main_wb_sdram_cyc = ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed27) 
                                                  & ((IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel) 
                                                     >> 2U));
    vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_cyc 
        = ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed27) 
           & ((IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel) 
              >> 3U));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_auto_precharge = 0U;
    if (((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_fifo_out_payload_addr 
                         >> 9U)) != (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_addr 
                                                >> 9U)))) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_auto_precharge 
                = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_close)));
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_auto_precharge = 0U;
    if (((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_fifo_out_payload_addr 
                         >> 9U)) != (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_addr 
                                                >> 9U)))) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_auto_precharge 
                = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_close)));
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_auto_precharge = 0U;
    if (((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_fifo_out_payload_addr 
                         >> 9U)) != (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_addr 
                                                >> 9U)))) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_auto_precharge 
                = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_close)));
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_auto_precharge = 0U;
    if (((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level)) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid))) {
        if (((0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_fifo_out_payload_addr 
                         >> 9U)) != (0x1fffU & (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_addr 
                                                >> 9U)))) {
            vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_auto_precharge 
                = (1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_close)));
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_we_n 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_we_n)
            : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_we_n));
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cas_n 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_cas_n)
            : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_cas_n));
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cs_n 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_cs_n)
            : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_cs_n));
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_ras_n 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_dfi_p0_ras_n)
            : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_csr_dfi_p0_ras_n));
    vlSymsp->TOP__sim.__Vtableidx2 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_we) 
                                       << 7U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_hit) 
                                                  << 6U) 
                                                 | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_opened) 
                                                     << 5U) 
                                                    | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid) 
                                                        << 4U) 
                                                       | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid) 
                                                           << 3U) 
                                                          | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_read 
        = vlSymsp->TOP__sim.__Vtable2___PVT__main_sdram_bankmachine0_cmd_payload_is_read
        [vlSymsp->TOP__sim.__Vtableidx2];
    vlSymsp->TOP__sim.__Vtableidx3 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_we) 
                                       << 7U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_hit) 
                                                  << 6U) 
                                                 | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_opened) 
                                                     << 5U) 
                                                    | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid) 
                                                        << 4U) 
                                                       | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid) 
                                                           << 3U) 
                                                          | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_write 
        = vlSymsp->TOP__sim.__Vtable3___PVT__main_sdram_bankmachine0_cmd_payload_is_write
        [vlSymsp->TOP__sim.__Vtableidx3];
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid = 0U;
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))) {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_hit) {
                                vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))) {
                if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trccon_ready) {
                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid = 1U;
                }
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))) {
                if (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_ready) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_ready))) {
                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid = 1U;
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_hit) {
                                vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid = 0U;
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))) {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_hit) {
                                vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))) {
                if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trccon_ready) {
                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid = 1U;
                }
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))) {
                if (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_ready) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_ready))) {
                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid = 1U;
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_hit) {
                                vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vsim_sim::_settle__TOP__sim__14(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__14\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__Vtableidx20 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_we) 
                                        << 7U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_hit) 
                                                   << 6U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_opened) 
                                                      << 5U) 
                                                     | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid) 
                                                         << 4U) 
                                                        | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid) 
                                                            << 3U) 
                                                           | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_read 
        = vlSymsp->TOP__sim.__Vtable20___PVT__main_sdram_bankmachine1_cmd_payload_is_read
        [vlSymsp->TOP__sim.__Vtableidx20];
    vlSymsp->TOP__sim.__Vtableidx21 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_we) 
                                        << 7U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_hit) 
                                                   << 6U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_opened) 
                                                      << 5U) 
                                                     | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid) 
                                                         << 4U) 
                                                        | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid) 
                                                            << 3U) 
                                                           | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_write 
        = vlSymsp->TOP__sim.__Vtable21___PVT__main_sdram_bankmachine1_cmd_payload_is_write
        [vlSymsp->TOP__sim.__Vtableidx21];
    vlSymsp->TOP__sim.__Vtableidx28 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_we) 
                                        << 7U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_hit) 
                                                   << 6U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_opened) 
                                                      << 5U) 
                                                     | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid) 
                                                         << 4U) 
                                                        | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid) 
                                                            << 3U) 
                                                           | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_read 
        = vlSymsp->TOP__sim.__Vtable28___PVT__main_sdram_bankmachine2_cmd_payload_is_read
        [vlSymsp->TOP__sim.__Vtableidx28];
    vlSymsp->TOP__sim.__Vtableidx29 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_we) 
                                        << 7U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_hit) 
                                                   << 6U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_opened) 
                                                      << 5U) 
                                                     | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid) 
                                                         << 4U) 
                                                        | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid) 
                                                            << 3U) 
                                                           | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_write 
        = vlSymsp->TOP__sim.__Vtable29___PVT__main_sdram_bankmachine2_cmd_payload_is_write
        [vlSymsp->TOP__sim.__Vtableidx29];
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid = 0U;
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))) {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_hit) {
                                vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))) {
                if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trccon_ready) {
                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid = 1U;
                }
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))) {
                if (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_ready) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_ready))) {
                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid = 1U;
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_hit) {
                                vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__sim.__Vtableidx37 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_we) 
                                        << 7U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_hit) 
                                                   << 6U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_opened) 
                                                      << 5U) 
                                                     | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid) 
                                                         << 4U) 
                                                        | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid) 
                                                            << 3U) 
                                                           | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_read 
        = vlSymsp->TOP__sim.__Vtable37___PVT__main_sdram_bankmachine3_cmd_payload_is_read
        [vlSymsp->TOP__sim.__Vtableidx37];
    vlSymsp->TOP__sim.__Vtableidx38 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_we) 
                                        << 7U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_hit) 
                                                   << 6U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_opened) 
                                                      << 5U) 
                                                     | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid) 
                                                         << 4U) 
                                                        | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid) 
                                                            << 3U) 
                                                           | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_write 
        = vlSymsp->TOP__sim.__Vtable38___PVT__main_sdram_bankmachine3_cmd_payload_is_write
        [vlSymsp->TOP__sim.__Vtableidx38];
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid = 0U;
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))) {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_hit) {
                                vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))) {
                if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trccon_ready) {
                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid = 1U;
                }
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))) {
                if (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_ready) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_ready))) {
                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid = 1U;
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_hit) {
                                vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_we = 0U;
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))) {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_hit) {
                                if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_we) {
                                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_we = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state))) {
                if (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_twtpcon_ready) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_trascon_ready))) {
                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_we = 1U;
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_hit) {
                                if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_we) {
                                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_we = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_we = 0U;
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))) {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_hit) {
                                if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_we) {
                                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_we = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state))) {
                if (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_twtpcon_ready) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_trascon_ready))) {
                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_we = 1U;
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_hit) {
                                if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_we) {
                                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_we = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_we = 0U;
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))) {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_hit) {
                                if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_we) {
                                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_we = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state))) {
                if (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_twtpcon_ready) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_trascon_ready))) {
                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_we = 1U;
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_hit) {
                                if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_we) {
                                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_we = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_we = 0U;
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))) {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_hit) {
                                if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_we) {
                                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_we = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state))) {
                if (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_twtpcon_ready) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_trascon_ready))) {
                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_we = 1U;
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid)))) {
                    if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid) {
                        if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_opened) {
                            if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_hit) {
                                if (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_we) {
                                    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_we = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vsim_sim::_settle__TOP__sim__15(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__15\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__Vtableidx10 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_hit) 
                                        << 6U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_opened) 
                                                   << 5U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_valid) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid) 
                                                         << 3U) 
                                                        | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine0_state)))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_cas 
        = vlSymsp->TOP__sim.__Vtable10___PVT__main_sdram_bankmachine0_cmd_payload_cas
        [vlSymsp->TOP__sim.__Vtableidx10];
    vlSymsp->TOP__sim.__Vtableidx17 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_hit) 
                                        << 6U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_opened) 
                                                   << 5U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_valid) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid) 
                                                         << 3U) 
                                                        | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine1_state)))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_cas 
        = vlSymsp->TOP__sim.__Vtable17___PVT__main_sdram_bankmachine1_cmd_payload_cas
        [vlSymsp->TOP__sim.__Vtableidx17];
    vlSymsp->TOP__sim.__Vtableidx25 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_hit) 
                                        << 6U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_opened) 
                                                   << 5U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_valid) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid) 
                                                         << 3U) 
                                                        | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine2_state)))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_cas 
        = vlSymsp->TOP__sim.__Vtable25___PVT__main_sdram_bankmachine2_cmd_payload_cas
        [vlSymsp->TOP__sim.__Vtableidx25];
    vlSymsp->TOP__sim.__Vtableidx34 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_hit) 
                                        << 6U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_opened) 
                                                   << 5U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_valid) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid) 
                                                         << 3U) 
                                                        | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_bankmachine3_state)))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_cas 
        = vlSymsp->TOP__sim.__Vtable34___PVT__main_sdram_bankmachine3_cmd_payload_cas
        [vlSymsp->TOP__sim.__Vtableidx34];
    vlSymsp->TOP__sim.__PVT__builder_shared_ack = (
                                                   (((IData)(vlSymsp->TOP__sim.__PVT__main_simsoc_ram_bus_ack) 
                                                     | (IData)(vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_ack)) 
                                                    | (IData)(vlSymsp->TOP__sim.__PVT__main_wb_sdram_ack)) 
                                                   | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_ack));
    if ((0U == vlSymsp->TOP__sim.__PVT__builder_count)) {
        vlSymsp->TOP__sim.__PVT__builder_shared_ack = 1U;
    }
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed12 
        = ((0x3ffe00U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                         >> 2U)) | (0x1ffU & vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed15 
        = ((0x3ffe00U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                         >> 2U)) | (0x1ffU & vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed18 
        = ((0x3ffe00U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                         >> 2U)) | (0x1ffU & vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed21 
        = ((0x3ffe00U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                         >> 2U)) | (0x1ffU & vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed14 
        = (((0U == (3U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                          >> 9U))) & (~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_lock) 
                                          | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_lock)) 
                                         | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_lock)))) 
           & (IData)(vlSymsp->TOP__sim.__PVT__main_port_cmd_valid));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed17 
        = (((1U == (3U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                          >> 9U))) & (~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_lock) 
                                          | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_lock)) 
                                         | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_lock)))) 
           & (IData)(vlSymsp->TOP__sim.__PVT__main_port_cmd_valid));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed20 
        = (((2U == (3U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                          >> 9U))) & (~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_lock) 
                                          | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_lock)) 
                                         | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_lock)))) 
           & (IData)(vlSymsp->TOP__sim.__PVT__main_port_cmd_valid));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed23 
        = (((3U == (3U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                          >> 9U))) & (~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_lock) 
                                          | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_lock)) 
                                         | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_lock)))) 
           & (IData)(vlSymsp->TOP__sim.__PVT__main_port_cmd_valid));
    vlSymsp->TOP__sim.__PVT__main_port_cmd_ready = 
        ((((((0U == (3U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                           >> 9U))) & (~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_lock) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_lock)) 
                                          | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_lock)))) 
            & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_level))) 
           | (((1U == (3U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                             >> 9U))) & (~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_lock) 
                                             | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_lock)) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_lock)))) 
              & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_level)))) 
          | (((2U == (3U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                            >> 9U))) & (~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_lock) 
                                            | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_lock)) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_req_lock)))) 
             & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_level)))) 
         | (((3U == (3U & (vlSymsp->TOP__sim.__PVT__main_port_cmd_payload_addr 
                           >> 9U))) & (~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_req_lock) 
                                           | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_req_lock)) 
                                          | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_req_lock)))) 
            & (8U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_level))));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_source_payload_data 
        = (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_source_payload_data);
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_source_payload_we 
        = (0xfU & (IData)((vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_source_payload_data 
                           >> 0x20U)));
    vlSymsp->TOP__sim.__PVT__main_word_inc = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
            if (vlSymsp->TOP__sim.__PVT__main_interface_ack) {
                vlSymsp->TOP__sim.__PVT__main_word_inc = 1U;
            }
        } else {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
                if (vlSymsp->TOP__sim.__PVT__main_interface_ack) {
                    vlSymsp->TOP__sim.__PVT__main_word_inc = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_word_clr = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
        vlSymsp->TOP__sim.__PVT__main_word_clr = 1U;
        if ((vlSymsp->TOP__sim.__PVT__main_tag_do_tag 
             != (0x7ffffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                             >> 0xbU)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_tag_do_dirty)))) {
                vlSymsp->TOP__sim.__PVT__main_word_clr = 1U;
            }
        }
    } else {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
            if (vlSymsp->TOP__sim.__PVT__main_interface_ack) {
                vlSymsp->TOP__sim.__PVT__main_word_clr = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_write_from_slave = 0U;
    if ((1U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
        if ((2U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
                if (vlSymsp->TOP__sim.__PVT__main_interface_ack) {
                    vlSymsp->TOP__sim.__PVT__main_write_from_slave = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_tag_port_we = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
        if ((vlSymsp->TOP__sim.__PVT__main_tag_do_tag 
             == (0x7ffffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                             >> 0xbU)))) {
            if (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed29) {
                vlSymsp->TOP__sim.__PVT__main_tag_port_we = 1U;
            }
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_tag_do_dirty)))) {
                vlSymsp->TOP__sim.__PVT__main_tag_port_we = 1U;
            }
        }
    } else {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
            if (vlSymsp->TOP__sim.__PVT__main_interface_ack) {
                vlSymsp->TOP__sim.__PVT__main_tag_port_we = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_ram_we = 0U;
    vlSymsp->TOP__sim.__PVT__main_ram_we = ((0xeU & (IData)(vlSymsp->TOP__sim.__PVT__main_ram_we)) 
                                            | ((((IData)(vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_cyc) 
                                                 & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28)) 
                                                & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed29)) 
                                               & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed26)));
    vlSymsp->TOP__sim.__PVT__main_ram_we = ((0xdU & (IData)(vlSymsp->TOP__sim.__PVT__main_ram_we)) 
                                            | (0xfffffffeU 
                                               & (((((IData)(vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_cyc) 
                                                     & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28)) 
                                                    & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed29)) 
                                                   << 1U) 
                                                  & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed26))));
    vlSymsp->TOP__sim.__PVT__main_ram_we = ((0xbU & (IData)(vlSymsp->TOP__sim.__PVT__main_ram_we)) 
                                            | (0xfffffffcU 
                                               & (((((IData)(vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_cyc) 
                                                     & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28)) 
                                                    & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed29)) 
                                                   << 2U) 
                                                  & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed26))));
    vlSymsp->TOP__sim.__PVT__main_ram_we = ((7U & (IData)(vlSymsp->TOP__sim.__PVT__main_ram_we)) 
                                            | (0xfffffff8U 
                                               & (((((IData)(vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_cyc) 
                                                     & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28)) 
                                                    & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed29)) 
                                                   << 3U) 
                                                  & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed26))));
}

void Vsim_sim::_settle__TOP__sim__16(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__16\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_next_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_next_state 
            = ((vlSymsp->TOP__sim.__PVT__main_tag_do_tag 
                == (0x7ffffU & (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24 
                                >> 0xbU))) ? 0U : ((IData)(vlSymsp->TOP__sim.__PVT__main_tag_do_dirty)
                                                    ? 2U
                                                    : 3U));
    } else {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
            if (vlSymsp->TOP__sim.__PVT__main_interface_ack) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_next_state = 3U;
            }
        } else {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_state))) {
                if (vlSymsp->TOP__sim.__PVT__main_interface_ack) {
                    vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_next_state = 1U;
                }
            } else {
                if (((IData)(vlSymsp->TOP__sim.__PVT__main_wb_sdram_cyc) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28))) {
                    vlSymsp->TOP__sim.__PVT__builder_simsoc_fullmemorywe_next_state = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_next_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_next_state = 2U;
    } else {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
            vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_next_state = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_cyc) 
                 & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28))) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_next_state = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_adr_next_value_ce1 = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_adr_next_value_ce1 = 1U;
    } else {
        if ((2U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
            if (((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_cyc) 
                 & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28))) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_adr_next_value_ce1 = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_we_next_value_ce2 = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_we_next_value_ce2 = 1U;
    } else {
        if ((2U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
            if (((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_cyc) 
                 & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28))) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_we_next_value_ce2 = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_adr_next_value1 = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_adr_next_value1 = 0U;
    } else {
        if ((2U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
            if (((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_cyc) 
                 & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28))) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_adr_next_value1 
                    = (0x3fffU & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24);
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_we_next_value2 = 0U;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
        vlSymsp->TOP__sim.__PVT__builder_simsoc_we_next_value2 = 0U;
    } else {
        if ((2U != (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone2csr_state))) {
            if (((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_cyc) 
                 & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28))) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_we_next_value2 
                    = ((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed29) 
                       & (0U != (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed26)));
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_row_col_n_addr_sel)
                       ? (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_pipe_valid_source_payload_addr))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_row_col_n_addr_sel)
                       ? (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_pipe_valid_source_payload_addr))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_row_col_n_addr_sel)
                       ? (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_pipe_valid_source_payload_addr))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_a 
        = (0x1fffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_row_col_n_addr_sel)
                       ? (vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_addr 
                          >> 9U) : (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_auto_precharge) 
                                     << 0xaU) | (0x1ffU 
                                                 & vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_pipe_valid_source_payload_addr))));
    vlSymsp->TOP__sim.__PVT__main_precharge = 0U;
    if ((((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cs_n)) 
          & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_ras_n))) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cas_n))) {
        vlSymsp->TOP__sim.__PVT__main_precharge = (1U 
                                                   & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_we_n)));
    }
    vlSymsp->TOP__sim.__PVT__main_activate = 0U;
    if ((((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cs_n)) 
          & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_ras_n))) 
         & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cas_n))) {
        vlSymsp->TOP__sim.__PVT__main_activate = vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_we_n;
    }
    vlSymsp->TOP__sim.__PVT__main_write = 0U;
    if ((((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cs_n)) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_ras_n)) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cas_n)))) {
        vlSymsp->TOP__sim.__PVT__main_write = (1U & 
                                               (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_we_n)));
    }
    vlSymsp->TOP__sim.__PVT__main_read = 0U;
    if ((((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cs_n)) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_ras_n)) 
         & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_cas_n)))) {
        vlSymsp->TOP__sim.__PVT__main_read = vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_we_n;
    }
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed3 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_read)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_read)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_read)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_read))));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed9 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_read)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_read)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_read)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_read))));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed4 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_write)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_write)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_write)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_write))));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed10 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_write)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_write)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_write)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_write))));
    vlSymsp->TOP__sim.__PVT__main_sdram_read_available 
        = (((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid) 
              & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_read)) 
             | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid) 
                & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_read))) 
            | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid) 
               & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_read))) 
           | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid) 
              & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_read)));
    vlSymsp->TOP__sim.__PVT__main_sdram_write_available 
        = (((((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid) 
              & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_write)) 
             | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid) 
                & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_write))) 
            | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid) 
               & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_write))) 
           | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid) 
              & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_write)));
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids 
        = ((0xeU & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids)) 
           | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid) 
              & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_read)) 
                 & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_write)))));
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids 
        = ((0xdU & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids)) 
           | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid) 
               & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_read)) 
                  & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_write)))) 
              << 1U));
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids 
        = ((0xbU & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids)) 
           | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid) 
               & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_read)) 
                  & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_write)))) 
              << 2U));
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids 
        = ((7U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids)) 
           | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid) 
               & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_read)) 
                  & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_write)))) 
              << 3U));
    vlSymsp->TOP__sim.__PVT__builder_t_array_muxed2 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_we)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_we)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_we)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_we))));
}

void Vsim_sim::_settle__TOP__sim__17(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__17\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__builder_t_array_muxed5 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_we)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_we)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_we)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_we))));
    vlSymsp->TOP__sim.__PVT__builder_t_array_muxed0 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_cas)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_cas)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_cas)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_cas))));
    vlSymsp->TOP__sim.__PVT__builder_t_array_muxed3 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_cas)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_cas)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_cas)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_cas))));
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids = 0U;
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids 
        = ((0xeU & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids)) 
           | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_valid) 
              & (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_cmd) 
                  & ((~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_ras) 
                          & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_cas))) 
                         & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_we)))) 
                     | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_activates))) 
                 | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_read) 
                     == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_reads)) 
                    & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_is_write) 
                       == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_writes))))));
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids 
        = ((0xdU & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids)) 
           | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_valid) 
               & (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_cmd) 
                   & ((~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_ras) 
                           & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_cas))) 
                          & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_we)))) 
                      | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_activates))) 
                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_read) 
                      == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_reads)) 
                     & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_is_write) 
                        == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_writes))))) 
              << 1U));
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids 
        = ((0xbU & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids)) 
           | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_valid) 
               & (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_cmd) 
                   & ((~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_ras) 
                           & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_cas))) 
                          & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_we)))) 
                      | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_activates))) 
                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_read) 
                      == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_reads)) 
                     & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_is_write) 
                        == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_writes))))) 
              << 2U));
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids 
        = ((7U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids)) 
           | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_valid) 
               & (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_cmd) 
                   & ((~ (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_ras) 
                           & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_cas))) 
                          & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_we)))) 
                      | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_activates))) 
                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_read) 
                      == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_reads)) 
                     & ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_is_write) 
                        == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_want_writes))))) 
              << 3U));
    vlSymsp->TOP__sim.__PVT__main_ibus_ack = ((IData)(vlSymsp->TOP__sim.__PVT__builder_shared_ack) 
                                              & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_grant)));
    vlSymsp->TOP__sim.__PVT__main_dbus_ack = ((IData)(vlSymsp->TOP__sim.__PVT__builder_shared_ack) 
                                              & (IData)(vlSymsp->TOP__sim.__PVT__builder_grant));
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count_litedramnativeportconverter_next_value_ce = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state) {
        if (vlSymsp->TOP__sim.__PVT__main_port_cmd_ready) {
            vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count_litedramnativeportconverter_next_value_ce = 1U;
        }
    } else {
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count_litedramnativeportconverter_next_value_ce = 1U;
    }
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count_litedramnativeportconverter_next_value = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state) {
        if (vlSymsp->TOP__sim.__PVT__main_port_cmd_ready) {
            vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count_litedramnativeportconverter_next_value 
                = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count)));
        }
    } else {
        vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count_litedramnativeportconverter_next_value = 0U;
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_next_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state;
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state) {
        if (vlSymsp->TOP__sim.__PVT__main_port_cmd_ready) {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count))) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_next_state = 0U;
            }
        }
    } else {
        if (vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_valid) {
            vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_next_state = 1U;
        }
    }
    vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_ready = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_simsoc_litedramnativeportconverter_state) {
        if (vlSymsp->TOP__sim.__PVT__main_port_cmd_ready) {
            if ((3U == (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_count))) {
                vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_ready = 1U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_interface_wdata 
        = ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_wdata_ready)
            ? vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_source_payload_data
            : 0U);
    vlSymsp->TOP__sim.__PVT__main_sdram_interface_wdata_we 
        = ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_new_master_wdata_ready)
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_source_payload_we)
            : 0U);
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[0U] 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_write_from_slave)
            ? vlSymsp->TOP__sim.__PVT__main_interface_dat_r[0U]
            : vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed25);
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[1U] 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_write_from_slave)
            ? vlSymsp->TOP__sim.__PVT__main_interface_dat_r[1U]
            : vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed25);
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[2U] 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_write_from_slave)
            ? vlSymsp->TOP__sim.__PVT__main_interface_dat_r[2U]
            : vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed25);
    vlSymsp->TOP__sim.__PVT__main_data_port_dat_w[3U] 
        = ((IData)(vlSymsp->TOP__sim.__PVT__main_write_from_slave)
            ? vlSymsp->TOP__sim.__PVT__main_interface_dat_r[3U]
            : vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed25);
    vlSymsp->TOP__sim.__PVT__main_data_port_we = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_write_from_slave) {
        vlSymsp->TOP__sim.__PVT__main_data_port_we = 0xffffU;
    } else {
        if (((((IData)(vlSymsp->TOP__sim.__PVT__main_wb_sdram_cyc) 
               & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed28)) 
              & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed29)) 
             & (IData)(vlSymsp->TOP__sim.__PVT__main_wb_sdram_ack))) {
            vlSymsp->TOP__sim.__PVT__main_data_port_we 
                = (((VL_NEGATE_I((IData)((3U == (3U 
                                                 & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24)))) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed26)) 
                    << 0xcU) | (((VL_NEGATE_I((IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24)))) 
                                  & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed26)) 
                                 << 8U) | (((VL_NEGATE_I((IData)(
                                                                 (1U 
                                                                  == 
                                                                  (3U 
                                                                   & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24)))) 
                                             & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed26)) 
                                            << 4U) 
                                           | (VL_NEGATE_I((IData)(
                                                                  (0U 
                                                                   == 
                                                                   (3U 
                                                                    & vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed24)))) 
                                              & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed26)))));
        }
    }
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed1 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_a)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_a)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_a)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_a))));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed7 
        = ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
            ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_payload_a)
            : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_payload_a)
                : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant))
                    ? (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine2_cmd_payload_a)
                    : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine3_cmd_payload_a))));
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_precharge = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_precharge) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel0_precharge 
            = (1U & ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank)) 
                     | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address) 
                        >> 0xaU)));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_precharge = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_precharge) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel1_precharge 
            = (1U & ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank)) 
                     | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address) 
                        >> 0xaU)));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_precharge = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_precharge) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel2_precharge 
            = (1U & ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank)) 
                     | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address) 
                        >> 0xaU)));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_precharge = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_precharge) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel3_precharge 
            = (1U & ((3U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank)) 
                     | ((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address) 
                        >> 0xaU)));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_activate = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_activate) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel0_activate 
            = (0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_activate_row = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_activate) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel0_activate_row 
            = vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address;
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_activate_row = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_activate) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel1_activate_row 
            = vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address;
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_activate = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_activate) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel1_activate 
            = (1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_activate = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_activate) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel2_activate 
            = (2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank));
    }
}

void Vsim_sim::_settle__TOP__sim__18(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__18\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_activate_row = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_activate) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel2_activate_row 
            = vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address;
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_activate = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_activate) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel3_activate 
            = (3U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_activate_row = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_activate) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel3_activate_row 
            = vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address;
    }
    vlSymsp->TOP__sim.__PVT__main_bank_write_col0 = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_write) {
        vlSymsp->TOP__sim.__PVT__main_bank_write_col0 
            = (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address));
    }
    vlSymsp->TOP__sim.__PVT__main_bank_write0 = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_write) {
        vlSymsp->TOP__sim.__PVT__main_bank_write0 = 
            (0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank));
    }
    vlSymsp->TOP__sim.__PVT__main_bank_write_col1 = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_write) {
        vlSymsp->TOP__sim.__PVT__main_bank_write_col1 
            = (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address));
    }
    vlSymsp->TOP__sim.__PVT__main_bank_write1 = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_write) {
        vlSymsp->TOP__sim.__PVT__main_bank_write1 = 
            (1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank));
    }
    vlSymsp->TOP__sim.__PVT__main_bank_write_col2 = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_write) {
        vlSymsp->TOP__sim.__PVT__main_bank_write_col2 
            = (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address));
    }
    vlSymsp->TOP__sim.__PVT__main_bank_write2 = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_write) {
        vlSymsp->TOP__sim.__PVT__main_bank_write2 = 
            (2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank));
    }
    vlSymsp->TOP__sim.__PVT__main_bank_write_col3 = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_write) {
        vlSymsp->TOP__sim.__PVT__main_bank_write_col3 
            = (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address));
    }
    vlSymsp->TOP__sim.__PVT__main_bank_write3 = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_write) {
        vlSymsp->TOP__sim.__PVT__main_bank_write3 = 
            (3U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_col = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_read) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_col 
            = (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_col = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_read) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_col 
            = (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_col = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_read) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_col 
            = (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_col = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_read) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_col 
            = (0x1ffU & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_address));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_read = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_read) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel0_read 
            = (0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_read = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_read) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel1_read 
            = (1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_read = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_read) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel2_read 
            = (2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_read = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_read) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel3_read 
            = (3U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_bank));
    }
    vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_next_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state;
    if ((4U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state))) {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state))) {
                if (vlSymsp->TOP__sim.__PVT__main_sdram_write_available) {
                    if ((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_read_available)) 
                               | (0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_time0))))) {
                        vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_next_state = 4U;
                    }
                }
                if (vlSymsp->TOP__sim.__PVT__main_sdram_go_to_refresh) {
                    vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_next_state = 2U;
                }
            } else {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_next_state = 1U;
            }
        } else {
            vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_next_state 
                = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state))
                    ? 6U : 5U);
        }
    } else {
        if ((2U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state))) {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state))) {
                if (vlSymsp->TOP__sim.__PVT__main_sdram_twtrcon_ready) {
                    vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_next_state = 0U;
                }
            } else {
                if (vlSymsp->TOP__sim.__PVT__main_sdram_cmd_last) {
                    vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_next_state = 0U;
                }
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state))) {
                if (vlSymsp->TOP__sim.__PVT__main_sdram_read_available) {
                    if ((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_write_available)) 
                               | (0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_time1))))) {
                        vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_next_state = 3U;
                    }
                }
                if (vlSymsp->TOP__sim.__PVT__main_sdram_go_to_refresh) {
                    vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_next_state = 2U;
                }
            } else {
                if (vlSymsp->TOP__sim.__PVT__main_sdram_write_available) {
                    if ((1U & ((~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_read_available)) 
                               | (0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_time0))))) {
                        vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_next_state = 4U;
                    }
                }
                if (vlSymsp->TOP__sim.__PVT__main_sdram_go_to_refresh) {
                    vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_next_state = 2U;
                }
            }
        }
    }
    vlSymsp->TOP__sim.__Vtableidx49 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_valids) 
                                        << 2U) | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_grant));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed0 
        = vlSymsp->TOP__sim.__Vtable49___PVT__builder_rhs_array_muxed0
        [vlSymsp->TOP__sim.__Vtableidx49];
    vlSymsp->TOP__sim.__Vtableidx50 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_valids) 
                                        << 2U) | (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant));
    vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6 
        = vlSymsp->TOP__sim.__Vtable50___PVT__builder_rhs_array_muxed6
        [vlSymsp->TOP__sim.__Vtableidx50];
    vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_next_state 
        = vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state;
    if ((1U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
        if (((IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_valid) 
             & (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_wdata_converter_converter_sink_ready))) {
            vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_next_state = 0U;
        }
    } else {
        if ((2U == (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_state))) {
            if (vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_rdata_converter_converter_strobe_all) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_next_state = 0U;
            }
        } else {
            if ((((IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_valid) 
                  & (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_ready)) 
                 & (IData)(vlSymsp->TOP__sim.__PVT__main_interface_we))) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_next_state = 1U;
            }
            if ((((IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_valid) 
                  & (IData)(vlSymsp->TOP__sim.__PVT__main_wishbone_bridge_cmd_ready)) 
                 & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_interface_we)))) {
                vlSymsp->TOP__sim.__PVT__builder_simsoc_fsm_next_state = 2U;
            }
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))
            ? vlSymsp->TOP__sim.__PVT__main_sdram_interface_wdata
            : vlSymsp->TOP__sim.__PVT__main_sdram_wrdata_storage);
    vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata_mask 
        = ((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_storage))
            ? (0xfU & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_interface_wdata_we)))
            : 0U);
    vlSymsp->TOP__sim.__PVT__builder_array_muxed1 = 
        ((0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
          ? 0U : ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
                   ? (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed7)
                   : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
                       ? (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed7)
                       : (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_a))));
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_adr = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel0_active) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_row) 
                                          << 9U)) | (IData)(vlSymsp->TOP__sim.__PVT__main_bank_write_col0)));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_adr = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel1_active) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_row) 
                                          << 9U)) | (IData)(vlSymsp->TOP__sim.__PVT__main_bank_write_col1)));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_adr = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel2_active) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_row) 
                                          << 9U)) | (IData)(vlSymsp->TOP__sim.__PVT__main_bank_write_col2)));
    }
}

void Vsim_sim::_settle__TOP__sim__19(Vsim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim::_settle__TOP__sim__19\n"); );
    Vsim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_adr = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel3_active) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_adr 
            = (0x3fffffU & ((0x7fffffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_row) 
                                          << 9U)) | (IData)(vlSymsp->TOP__sim.__PVT__main_bank_write_col3)));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_port_adr = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel0_active) {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel0_read) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_row) 
                                              << 9U)) 
                                | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_col)));
        }
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_port_adr = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel1_active) {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel1_read) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_row) 
                                              << 9U)) 
                                | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_col)));
        }
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_port_adr = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel2_active) {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel2_read) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_row) 
                                              << 9U)) 
                                | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_col)));
        }
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_port_adr = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel3_active) {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel3_read) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_port_adr 
                = (0x3fffffU & ((0x7fffffU & ((IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_row) 
                                              << 9U)) 
                                | (IData)(vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_col)));
        }
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_cmd_payload_cas = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed0) {
        vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_cmd_payload_cas 
            = vlSymsp->TOP__sim.__PVT__builder_t_array_muxed0;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_cmd_payload_ras = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed0) {
        vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_cmd_payload_ras 
            = vlSymsp->TOP__sim.__PVT__builder_t_array_muxed1;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_cmd_payload_we = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed0) {
        vlSymsp->TOP__sim.__PVT__main_sdram_choose_cmd_cmd_payload_we 
            = vlSymsp->TOP__sim.__PVT__builder_t_array_muxed2;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_cas = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) {
        vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_cas 
            = vlSymsp->TOP__sim.__PVT__builder_t_array_muxed3;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_ras = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) {
        vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_ras 
            = vlSymsp->TOP__sim.__PVT__builder_t_array_muxed4;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_we = 0U;
    if (vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) {
        vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_we 
            = vlSymsp->TOP__sim.__PVT__builder_t_array_muxed5;
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_dat_w = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel0_active) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_dat_w 
            = vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata;
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_dat_w = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel1_active) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_dat_w 
            = vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata;
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_dat_w = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel2_active) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_dat_w 
            = vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata;
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_dat_w = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel3_active) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_dat_w 
            = vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata;
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_we = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel0_active) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel0_write_port_we 
            = (0xfU & (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__sim.__PVT__main_bank_write0))) 
                       & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata_mask))));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_we = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel1_active) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel1_write_port_we 
            = (0xfU & (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__sim.__PVT__main_bank_write1))) 
                       & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata_mask))));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_we = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel2_active) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel2_write_port_we 
            = (0xfU & (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__sim.__PVT__main_bank_write2))) 
                       & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata_mask))));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_we = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel3_active) {
        vlSymsp->TOP__sim.__PVT__main_bankmodel3_write_port_we 
            = (0xfU & (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__sim.__PVT__main_bank_write3))) 
                       & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_master_p0_wrdata_mask))));
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_data = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel0_active) {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel0_read) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_data 
                = vlSymsp->TOP__sim.__PVT__mem_1[vlSymsp->TOP__sim.__PVT__main_bankmodel0_read_port_adr];
        }
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_data = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel1_active) {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel1_read) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_data 
                = vlSymsp->TOP__sim.__PVT__mem_2[vlSymsp->TOP__sim.__PVT__main_bankmodel1_read_port_adr];
        }
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_data = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel2_active) {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel2_read) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_data 
                = vlSymsp->TOP__sim.__PVT__mem_3[vlSymsp->TOP__sim.__PVT__main_bankmodel2_read_port_adr];
        }
    }
    vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_data = 0U;
    if (vlSymsp->TOP__sim.__PVT__main_bankmodel3_active) {
        if (vlSymsp->TOP__sim.__PVT__main_bankmodel3_read) {
            vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_data 
                = vlSymsp->TOP__sim.__PVT__mem_4[vlSymsp->TOP__sim.__PVT__main_bankmodel3_read_port_adr];
        }
    }
    vlSymsp->TOP__sim.__Vtableidx46 = (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_trrdcon_ready) 
                                        << 7U) | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_we) 
                                                   << 6U) 
                                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_cas) 
                                                      << 5U) 
                                                     | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_ras) 
                                                         << 4U) 
                                                        | (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_tccdcon_ready) 
                                                            << 3U) 
                                                           | (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_multiplexer_state))))));
    vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready 
        = vlSymsp->TOP__sim.__Vtable46___PVT__main_sdram_choose_req_cmd_ready
        [vlSymsp->TOP__sim.__Vtableidx46];
    vlSymsp->TOP__sim.__PVT__builder_array_muxed5 = 
        ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel)) 
         & ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
             ? (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
                 & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
                & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed9))
             : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel)) 
                & (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
                    & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
                   & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed9)))));
    vlSymsp->TOP__sim.__PVT__builder_array_muxed6 = 
        ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel)) 
         & ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
             ? (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
                 & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
                & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed10))
             : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel)) 
                & (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
                    & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
                   & (IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed10)))));
    vlSymsp->TOP__sim.__PVT__builder_array_muxed2 = 
        ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel)) 
         & ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
             ? (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
                 & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
                & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_cas))
             : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
                 ? (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
                    & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_cas))
                 : (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_ready)) 
                    & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_cas)))));
    vlSymsp->TOP__sim.__PVT__builder_array_muxed3 = 
        ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel)) 
         & ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
             ? (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
                 & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
                & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_ras))
             : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
                 ? (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
                    & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_ras))
                 : (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_ready)) 
                    & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_ras)))));
    vlSymsp->TOP__sim.__PVT__builder_array_muxed4 = 
        ((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel)) 
         & ((1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
             ? (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
                 & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
                & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_we))
             : ((2U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_steerer_sel))
                 ? (((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
                    & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_payload_we))
                 : (((IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_valid) 
                     & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_ready)) 
                    & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_cmd_payload_we)))));
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_ready = 0U;
    if ((((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
         & (0U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant)))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine0_cmd_ready = 1U;
    }
    vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_ready = 0U;
    if ((((IData)(vlSymsp->TOP__sim.__PVT__builder_rhs_array_muxed6) 
          & (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_cmd_ready)) 
         & (1U == (IData)(vlSymsp->TOP__sim.__PVT__main_sdram_choose_req_grant)))) {
        vlSymsp->TOP__sim.__PVT__main_sdram_bankmachine1_cmd_ready = 1U;
    }
}
