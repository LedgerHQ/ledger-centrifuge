/*******************************************************************************
*  (c) 2019 Zondax GmbH
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wextern-c-compat"
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "substrate_types.h"
#include "substrate_types_V1.h"
#include <stddef.h>
#include <stdint.h>

#define PD_CALL_SYSTEM_V1 0
#define PD_CALL_UTILITY_V1 1
#define PD_CALL_BABE_V1 2
#define PD_CALL_TIMESTAMP_V1 3
#define PD_CALL_AUTHORSHIP_V1 4
#define PD_CALL_BALANCES_V1 5
#define PD_CALL_STAKING_V1 6
#define PD_CALL_SESSION_V1 7
#define PD_CALL_DEMOCRACY_V1 8
#define PD_CALL_COUNCIL_V1 9
#define PD_CALL_ELECTIONS_V1 10
#define PD_CALL_FINALITYTRACKER_V1 11
#define PD_CALL_GRANDPA_V1 12
#define PD_CALL_IMONLINE_V1 13
#define PD_CALL_AUTHORITYDISCOVERY_V1 14
#define PD_CALL_OFFENCES_V1 15
#define PD_CALL_RANDOMNESSCOLLECTIVEFLIP_V1 16
#define PD_CALL_ANCHOR_V1 17
#define PD_CALL_FEES_V1 18
#define PD_CALL_NFTS_V1 19
#define PD_CALL_MULTIACCOUNT_V1 20
#define PD_CALL_IDENTITY_V1 21
#define PD_CALL_PALLETBRIDGE_V1 22
#define PD_CALL_CHAINBRIDGE_V1 23
#define PD_CALL_INDICES_V1 24
#define PD_CALL_SCHEDULER_V1 25
#define PD_CALL_PROXY_V1 26
#define PD_CALL_MULTISIG_V1 27
#define PD_CALL_RADCLAIMS_V1 28
#define PD_CALL_VESTING_V1 29
#define PD_CALL_REGISTRY_V1 30
#define PD_CALL_NFT_V1 31
#define PD_CALL_BRIDGEMAPPING_V1 32

#define PD_CALL_SYSTEM_FILL_BLOCK_V1 0
typedef struct {
    pd_Perbill_V1_t _ratio;
} pd_system_fill_block_V1_t;

#define PD_CALL_SYSTEM_REMARK_V1 1
typedef struct {
    pd_Bytes_t _remark;
} pd_system_remark_V1_t;

#define PD_CALL_SYSTEM_SET_HEAP_PAGES_V1 2
typedef struct {
    pd_u64_t pages;
} pd_system_set_heap_pages_V1_t;

#define PD_CALL_SYSTEM_SET_CODE_V1 3
typedef struct {
    pd_Bytes_t code;
} pd_system_set_code_V1_t;

#define PD_CALL_SYSTEM_SET_CODE_WITHOUT_CHECKS_V1 4
typedef struct {
    pd_Bytes_t code;
} pd_system_set_code_without_checks_V1_t;

#define PD_CALL_SYSTEM_SET_CHANGES_TRIE_CONFIG_V1 5
typedef struct {
    pd_OptionChangesTrieConfiguration_V1_t changes_trie_config;
} pd_system_set_changes_trie_config_V1_t;

#define PD_CALL_SYSTEM_SET_STORAGE_V1 6
typedef struct {
    pd_VecKeyValue_V1_t items;
} pd_system_set_storage_V1_t;

#define PD_CALL_SYSTEM_KILL_STORAGE_V1 7
typedef struct {
    pd_VecKey_V1_t keys;
} pd_system_kill_storage_V1_t;

#define PD_CALL_SYSTEM_KILL_PREFIX_V1 8
typedef struct {
    pd_Key_V1_t prefix;
    pd_u32_t _subkeys;
} pd_system_kill_prefix_V1_t;

#define PD_CALL_SYSTEM_SUICIDE_V1 9
typedef struct {
} pd_system_suicide_V1_t;

#define PD_CALL_UTILITY_BATCH_V1 0
typedef struct {
    pd_VecCall_t calls;
} pd_utility_batch_V1_t;

#define PD_CALL_UTILITY_AS_DERIVATIVE_V1 1
typedef struct {
    pd_u16_t index;
    pd_Call_t call;
} pd_utility_as_derivative_V1_t;

#define PD_CALL_BABE_REPORT_EQUIVOCATION_V1 0
typedef struct {
    pd_BabeEquivocationProof_V1_t equivocation_proof;
    pd_KeyOwnerProof_V1_t key_owner_proof;
} pd_babe_report_equivocation_V1_t;

#define PD_CALL_BABE_REPORT_EQUIVOCATION_UNSIGNED_V1 1
typedef struct {
    pd_BabeEquivocationProof_V1_t equivocation_proof;
    pd_KeyOwnerProof_V1_t key_owner_proof;
} pd_babe_report_equivocation_unsigned_V1_t;

#define PD_CALL_TIMESTAMP_SET_V1 0
typedef struct {
    pd_CompactMoment_V1_t now;
} pd_timestamp_set_V1_t;

#define PD_CALL_AUTHORSHIP_SET_UNCLES_V1 0
typedef struct {
    pd_VecHeader_t new_uncles;
} pd_authorship_set_uncles_V1_t;

#define PD_CALL_BALANCES_TRANSFER_V1 0
typedef struct {
    pd_LookupSource_V1_t dest;
    pd_CompactBalance_t value;
} pd_balances_transfer_V1_t;

#define PD_CALL_BALANCES_SET_BALANCE_V1 1
typedef struct {
    pd_LookupSource_V1_t who;
    pd_CompactBalance_t new_free;
    pd_CompactBalance_t new_reserved;
} pd_balances_set_balance_V1_t;

#define PD_CALL_BALANCES_FORCE_TRANSFER_V1 2
typedef struct {
    pd_LookupSource_V1_t source;
    pd_LookupSource_V1_t dest;
    pd_CompactBalance_t value;
} pd_balances_force_transfer_V1_t;

#define PD_CALL_BALANCES_TRANSFER_KEEP_ALIVE_V1 3
typedef struct {
    pd_LookupSource_V1_t dest;
    pd_CompactBalance_t value;
} pd_balances_transfer_keep_alive_V1_t;

#define PD_CALL_STAKING_BOND_V1 0
typedef struct {
    pd_LookupSource_V1_t controller;
    pd_CompactBalanceOf_t value;
    pd_RewardDestination_V1_t payee;
} pd_staking_bond_V1_t;

#define PD_CALL_STAKING_BOND_EXTRA_V1 1
typedef struct {
    pd_CompactBalanceOf_t max_additional;
} pd_staking_bond_extra_V1_t;

#define PD_CALL_STAKING_UNBOND_V1 2
typedef struct {
    pd_CompactBalanceOf_t value;
} pd_staking_unbond_V1_t;

#define PD_CALL_STAKING_WITHDRAW_UNBONDED_V1 3
typedef struct {
    pd_u32_t num_slashing_spans;
} pd_staking_withdraw_unbonded_V1_t;

#define PD_CALL_STAKING_VALIDATE_V1 4
typedef struct {
    pd_ValidatorPrefs_V1_t prefs;
} pd_staking_validate_V1_t;

#define PD_CALL_STAKING_NOMINATE_V1 5
typedef struct {
    pd_VecLookupSource_V1_t targets;
} pd_staking_nominate_V1_t;

#define PD_CALL_STAKING_CHILL_V1 6
typedef struct {
} pd_staking_chill_V1_t;

#define PD_CALL_STAKING_SET_PAYEE_V1 7
typedef struct {
    pd_RewardDestination_V1_t payee;
} pd_staking_set_payee_V1_t;

#define PD_CALL_STAKING_SET_CONTROLLER_V1 8
typedef struct {
    pd_LookupSource_V1_t controller;
} pd_staking_set_controller_V1_t;

#define PD_CALL_STAKING_SET_VALIDATOR_COUNT_V1 9
typedef struct {
    pd_Compactu32_t new_;
} pd_staking_set_validator_count_V1_t;

#define PD_CALL_STAKING_INCREASE_VALIDATOR_COUNT_V1 10
typedef struct {
    pd_Compactu32_t additional;
} pd_staking_increase_validator_count_V1_t;

#define PD_CALL_STAKING_SCALE_VALIDATOR_COUNT_V1 11
typedef struct {
    pd_Percent_V1_t factor;
} pd_staking_scale_validator_count_V1_t;

#define PD_CALL_STAKING_FORCE_NO_ERAS_V1 12
typedef struct {
} pd_staking_force_no_eras_V1_t;

#define PD_CALL_STAKING_FORCE_NEW_ERA_V1 13
typedef struct {
} pd_staking_force_new_era_V1_t;

#define PD_CALL_STAKING_SET_INVULNERABLES_V1 14
typedef struct {
    pd_VecAccountId_V1_t validators;
} pd_staking_set_invulnerables_V1_t;

#define PD_CALL_STAKING_FORCE_UNSTAKE_V1 15
typedef struct {
    pd_AccountId_V1_t stash;
    pd_u32_t num_slashing_spans;
} pd_staking_force_unstake_V1_t;

#define PD_CALL_STAKING_FORCE_NEW_ERA_ALWAYS_V1 16
typedef struct {
} pd_staking_force_new_era_always_V1_t;

#define PD_CALL_STAKING_CANCEL_DEFERRED_SLASH_V1 17
typedef struct {
    pd_EraIndex_V1_t era;
    pd_Vecu32_t slash_indices;
} pd_staking_cancel_deferred_slash_V1_t;

#define PD_CALL_STAKING_PAYOUT_STAKERS_V1 18
typedef struct {
    pd_AccountId_V1_t validator_stash;
    pd_EraIndex_V1_t era;
} pd_staking_payout_stakers_V1_t;

#define PD_CALL_STAKING_REBOND_V1 19
typedef struct {
    pd_CompactBalanceOf_t value;
} pd_staking_rebond_V1_t;

#define PD_CALL_STAKING_SET_HISTORY_DEPTH_V1 20
typedef struct {
    pd_CompactEraIndex_V1_t new_history_depth;
    pd_Compactu32_t _era_items_deleted;
} pd_staking_set_history_depth_V1_t;

#define PD_CALL_STAKING_REAP_STASH_V1 21
typedef struct {
    pd_AccountId_V1_t stash;
    pd_u32_t num_slashing_spans;
} pd_staking_reap_stash_V1_t;

#define PD_CALL_STAKING_SUBMIT_ELECTION_SOLUTION_V1 22
typedef struct {
    pd_VecValidatorIndex_V1_t winners;
    pd_CompactAssignments_V1_t compact;
    pd_ElectionScore_V1_t score;
    pd_EraIndex_V1_t era;
    pd_ElectionSize_V1_t size;
} pd_staking_submit_election_solution_V1_t;

#define PD_CALL_STAKING_SUBMIT_ELECTION_SOLUTION_UNSIGNED_V1 23
typedef struct {
    pd_VecValidatorIndex_V1_t winners;
    pd_CompactAssignments_V1_t compact;
    pd_ElectionScore_V1_t score;
    pd_EraIndex_V1_t era;
    pd_ElectionSize_V1_t size;
} pd_staking_submit_election_solution_unsigned_V1_t;

#define PD_CALL_SESSION_SET_KEYS_V1 0
typedef struct {
    pd_Keys_V1_t keys;
    pd_Bytes_t proof;
} pd_session_set_keys_V1_t;

#define PD_CALL_SESSION_PURGE_KEYS_V1 1
typedef struct {
} pd_session_purge_keys_V1_t;

#define PD_CALL_DEMOCRACY_PROPOSE_V1 0
typedef struct {
    pd_Hash_t proposal_hash;
    pd_CompactBalanceOf_t value;
} pd_democracy_propose_V1_t;

#define PD_CALL_DEMOCRACY_SECOND_V1 1
typedef struct {
    pd_CompactPropIndex_V1_t proposal;
    pd_Compactu32_t seconds_upper_bound;
} pd_democracy_second_V1_t;

#define PD_CALL_DEMOCRACY_VOTE_V1 2
typedef struct {
    pd_CompactReferendumIndex_V1_t ref_index;
    pd_AccountVote_V1_t vote;
} pd_democracy_vote_V1_t;

#define PD_CALL_DEMOCRACY_EMERGENCY_CANCEL_V1 3
typedef struct {
    pd_ReferendumIndex_V1_t ref_index;
} pd_democracy_emergency_cancel_V1_t;

#define PD_CALL_DEMOCRACY_EXTERNAL_PROPOSE_V1 4
typedef struct {
    pd_Hash_t proposal_hash;
} pd_democracy_external_propose_V1_t;

#define PD_CALL_DEMOCRACY_EXTERNAL_PROPOSE_MAJORITY_V1 5
typedef struct {
    pd_Hash_t proposal_hash;
} pd_democracy_external_propose_majority_V1_t;

#define PD_CALL_DEMOCRACY_EXTERNAL_PROPOSE_DEFAULT_V1 6
typedef struct {
    pd_Hash_t proposal_hash;
} pd_democracy_external_propose_default_V1_t;

#define PD_CALL_DEMOCRACY_FAST_TRACK_V1 7
typedef struct {
    pd_Hash_t proposal_hash;
    pd_BlockNumber_t voting_period;
    pd_BlockNumber_t delay;
} pd_democracy_fast_track_V1_t;

#define PD_CALL_DEMOCRACY_VETO_EXTERNAL_V1 8
typedef struct {
    pd_Hash_t proposal_hash;
} pd_democracy_veto_external_V1_t;

#define PD_CALL_DEMOCRACY_CANCEL_REFERENDUM_V1 9
typedef struct {
    pd_CompactReferendumIndex_V1_t ref_index;
} pd_democracy_cancel_referendum_V1_t;

#define PD_CALL_DEMOCRACY_CANCEL_QUEUED_V1 10
typedef struct {
    pd_ReferendumIndex_V1_t which;
} pd_democracy_cancel_queued_V1_t;

#define PD_CALL_DEMOCRACY_DELEGATE_V1 11
typedef struct {
    pd_AccountId_V1_t to;
    pd_Conviction_V1_t conviction;
    pd_BalanceOf_t balance;
} pd_democracy_delegate_V1_t;

#define PD_CALL_DEMOCRACY_UNDELEGATE_V1 12
typedef struct {
} pd_democracy_undelegate_V1_t;

#define PD_CALL_DEMOCRACY_CLEAR_PUBLIC_PROPOSALS_V1 13
typedef struct {
} pd_democracy_clear_public_proposals_V1_t;

#define PD_CALL_DEMOCRACY_NOTE_PREIMAGE_V1 14
typedef struct {
    pd_Bytes_t encoded_proposal;
} pd_democracy_note_preimage_V1_t;

#define PD_CALL_DEMOCRACY_NOTE_PREIMAGE_OPERATIONAL_V1 15
typedef struct {
    pd_Bytes_t encoded_proposal;
} pd_democracy_note_preimage_operational_V1_t;

#define PD_CALL_DEMOCRACY_NOTE_IMMINENT_PREIMAGE_V1 16
typedef struct {
    pd_Bytes_t encoded_proposal;
} pd_democracy_note_imminent_preimage_V1_t;

#define PD_CALL_DEMOCRACY_NOTE_IMMINENT_PREIMAGE_OPERATIONAL_V1 17
typedef struct {
    pd_Bytes_t encoded_proposal;
} pd_democracy_note_imminent_preimage_operational_V1_t;

#define PD_CALL_DEMOCRACY_REAP_PREIMAGE_V1 18
typedef struct {
    pd_Hash_t proposal_hash;
    pd_Compactu32_t proposal_len_upper_bound;
} pd_democracy_reap_preimage_V1_t;

#define PD_CALL_DEMOCRACY_UNLOCK_V1 19
typedef struct {
    pd_AccountId_V1_t target;
} pd_democracy_unlock_V1_t;

#define PD_CALL_DEMOCRACY_REMOVE_VOTE_V1 20
typedef struct {
    pd_ReferendumIndex_V1_t index;
} pd_democracy_remove_vote_V1_t;

#define PD_CALL_DEMOCRACY_REMOVE_OTHER_VOTE_V1 21
typedef struct {
    pd_AccountId_V1_t target;
    pd_ReferendumIndex_V1_t index;
} pd_democracy_remove_other_vote_V1_t;

#define PD_CALL_DEMOCRACY_ENACT_PROPOSAL_V1 22
typedef struct {
    pd_Hash_t proposal_hash;
    pd_ReferendumIndex_V1_t index;
} pd_democracy_enact_proposal_V1_t;

#define PD_CALL_COUNCIL_SET_MEMBERS_V1 0
typedef struct {
    pd_VecAccountId_V1_t new_members;
    pd_OptionAccountId_V1_t prime;
    pd_MemberCount_V1_t old_count;
} pd_council_set_members_V1_t;

#define PD_CALL_COUNCIL_EXECUTE_V1 1
typedef struct {
    pd_Proposal_t proposal;
    pd_Compactu32_t length_bound;
} pd_council_execute_V1_t;

#define PD_CALL_COUNCIL_PROPOSE_V1 2
typedef struct {
    pd_CompactMemberCount_V1_t threshold;
    pd_Proposal_t proposal;
    pd_Compactu32_t length_bound;
} pd_council_propose_V1_t;

#define PD_CALL_COUNCIL_VOTE_V1 3
typedef struct {
    pd_Hash_t proposal;
    pd_CompactProposalIndex_V1_t index;
    pd_bool_t approve;
} pd_council_vote_V1_t;

#define PD_CALL_COUNCIL_CLOSE_V1 4
typedef struct {
    pd_Hash_t proposal_hash;
    pd_CompactProposalIndex_V1_t index;
    pd_CompactWeight_V1_t proposal_weight_bound;
    pd_Compactu32_t length_bound;
} pd_council_close_V1_t;

#define PD_CALL_COUNCIL_DISAPPROVE_PROPOSAL_V1 5
typedef struct {
    pd_Hash_t proposal_hash;
} pd_council_disapprove_proposal_V1_t;

#define PD_CALL_ELECTIONS_VOTE_V1 0
typedef struct {
    pd_VecAccountId_V1_t votes;
    pd_CompactBalanceOf_t value;
} pd_elections_vote_V1_t;

#define PD_CALL_ELECTIONS_REMOVE_VOTER_V1 1
typedef struct {
} pd_elections_remove_voter_V1_t;

#define PD_CALL_ELECTIONS_REPORT_DEFUNCT_VOTER_V1 2
typedef struct {
    pd_DefunctVoter_V1_t defunct;
} pd_elections_report_defunct_voter_V1_t;

#define PD_CALL_ELECTIONS_SUBMIT_CANDIDACY_V1 3
typedef struct {
    pd_Compactu32_t candidate_count;
} pd_elections_submit_candidacy_V1_t;

#define PD_CALL_ELECTIONS_RENOUNCE_CANDIDACY_V1 4
typedef struct {
    pd_Renouncing_V1_t renouncing;
} pd_elections_renounce_candidacy_V1_t;

#define PD_CALL_ELECTIONS_REMOVE_MEMBER_V1 5
typedef struct {
    pd_LookupSource_V1_t who;
    pd_bool_t has_replacement;
} pd_elections_remove_member_V1_t;

#define PD_CALL_FINALITYTRACKER_FINAL_HINT_V1 0
typedef struct {
    pd_CompactBlockNumber_t hint;
} pd_finalitytracker_final_hint_V1_t;

#define PD_CALL_GRANDPA_REPORT_EQUIVOCATION_V1 0
typedef struct {
    pd_GrandpaEquivocationProof_V1_t equivocation_proof;
    pd_KeyOwnerProof_V1_t key_owner_proof;
} pd_grandpa_report_equivocation_V1_t;

#define PD_CALL_GRANDPA_REPORT_EQUIVOCATION_UNSIGNED_V1 1
typedef struct {
    pd_GrandpaEquivocationProof_V1_t equivocation_proof;
    pd_KeyOwnerProof_V1_t key_owner_proof;
} pd_grandpa_report_equivocation_unsigned_V1_t;

#define PD_CALL_GRANDPA_NOTE_STALLED_V1 2
typedef struct {
    pd_BlockNumber_t delay;
    pd_BlockNumber_t best_finalized_block_number;
} pd_grandpa_note_stalled_V1_t;

#define PD_CALL_IMONLINE_HEARTBEAT_V1 0
typedef struct {
    pd_Heartbeat_t heartbeat;
    pd_Signature_V1_t _signature;
} pd_imonline_heartbeat_V1_t;

#define PD_CALL_ANCHOR_PRE_COMMIT_V1 0
typedef struct {
    pd_Hash_t anchor_id;
    pd_Hash_t signing_root;
} pd_anchor_pre_commit_V1_t;

#define PD_CALL_ANCHOR_COMMIT_V1 1
typedef struct {
    pd_Hash_t anchor_id_preimage;
    pd_Hash_t doc_root;
    pd_Hash_t proof;
    pd_Moment_V1_t stored_until_date;
} pd_anchor_commit_V1_t;

#define PD_CALL_ANCHOR_EVICT_PRE_COMMITS_V1 2
typedef struct {
    pd_BlockNumber_t evict_bucket;
} pd_anchor_evict_pre_commits_V1_t;

#define PD_CALL_ANCHOR_EVICT_ANCHORS_V1 3
typedef struct {
} pd_anchor_evict_anchors_V1_t;

#define PD_CALL_FEES_SET_FEE_V1 0
typedef struct {
    pd_Hash_t key;
    pd_Balance_t new_price;
} pd_fees_set_fee_V1_t;

#define PD_CALL_NFTS_VALIDATE_MINT_V1 0
typedef struct {
    pd_Hash_t anchor_id;
    pd_u8_array_20_t deposit_address;
    pd_VecProof_V1_t pfs;
    pd_H256_array_3_V1_t static_proofs;
    pd_ChainId_V1_t dest_id;
} pd_nfts_validate_mint_V1_t;

#define PD_CALL_MULTIACCOUNT_CREATE_V1 0
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V1_t other_signatories;
} pd_multiaccount_create_V1_t;

#define PD_CALL_MULTIACCOUNT_UPDATE_V1 1
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V1_t signatories;
} pd_multiaccount_update_V1_t;

#define PD_CALL_MULTIACCOUNT_REMOVE_V1 2
typedef struct {
} pd_multiaccount_remove_V1_t;

#define PD_CALL_MULTIACCOUNT_CALL_V1 3
typedef struct {
    pd_AccountId_V1_t multi_account_id;
    pd_OptionTimepoint_V1_t maybe_timepoint;
    pd_Call_t call;
} pd_multiaccount_call_V1_t;

#define PD_CALL_MULTIACCOUNT_APPROVE_V1 4
typedef struct {
    pd_AccountId_V1_t multi_account_id;
    pd_OptionTimepoint_V1_t maybe_timepoint;
    pd_u8_array_32_V1_t call_hash;
} pd_multiaccount_approve_V1_t;

#define PD_CALL_MULTIACCOUNT_CANCEL_V1 5
typedef struct {
    pd_AccountId_V1_t multi_account_id;
    pd_Timepoint_V1_t timepoint;
    pd_u8_array_32_V1_t call_hash;
} pd_multiaccount_cancel_V1_t;

#define PD_CALL_IDENTITY_ADD_REGISTRAR_V1 0
typedef struct {
    pd_AccountId_V1_t account;
} pd_identity_add_registrar_V1_t;

#define PD_CALL_IDENTITY_SET_IDENTITY_V1 1
typedef struct {
    pd_IdentityInfo_V1_t info;
} pd_identity_set_identity_V1_t;

#define PD_CALL_IDENTITY_SET_SUBS_V1 2
typedef struct {
    pd_VecTupleAccountIdData_V1_t subs;
} pd_identity_set_subs_V1_t;

#define PD_CALL_IDENTITY_CLEAR_IDENTITY_V1 3
typedef struct {
} pd_identity_clear_identity_V1_t;

#define PD_CALL_IDENTITY_REQUEST_JUDGEMENT_V1 4
typedef struct {
    pd_CompactRegistrarIndex_V1_t reg_index;
    pd_CompactBalanceOf_t max_fee;
} pd_identity_request_judgement_V1_t;

#define PD_CALL_IDENTITY_CANCEL_REQUEST_V1 5
typedef struct {
    pd_RegistrarIndex_V1_t reg_index;
} pd_identity_cancel_request_V1_t;

#define PD_CALL_IDENTITY_SET_FEE_V1 6
typedef struct {
    pd_CompactRegistrarIndex_V1_t index;
    pd_CompactBalanceOf_t fee;
} pd_identity_set_fee_V1_t;

#define PD_CALL_IDENTITY_SET_ACCOUNT_ID_V1 7
typedef struct {
    pd_CompactRegistrarIndex_V1_t index;
    pd_AccountId_V1_t new_;
} pd_identity_set_account_id_V1_t;

#define PD_CALL_IDENTITY_SET_FIELDS_V1 8
typedef struct {
    pd_CompactRegistrarIndex_V1_t index;
    pd_IdentityFields_V1_t fields;
} pd_identity_set_fields_V1_t;

#define PD_CALL_IDENTITY_PROVIDE_JUDGEMENT_V1 9
typedef struct {
    pd_CompactRegistrarIndex_V1_t reg_index;
    pd_LookupSource_V1_t target;
    pd_IdentityJudgement_V1_t judgement;
} pd_identity_provide_judgement_V1_t;

#define PD_CALL_IDENTITY_KILL_IDENTITY_V1 10
typedef struct {
    pd_LookupSource_V1_t target;
} pd_identity_kill_identity_V1_t;

#define PD_CALL_IDENTITY_ADD_SUB_V1 11
typedef struct {
    pd_LookupSource_V1_t sub;
    pd_Data_t data;
} pd_identity_add_sub_V1_t;

#define PD_CALL_IDENTITY_RENAME_SUB_V1 12
typedef struct {
    pd_LookupSource_V1_t sub;
    pd_Data_t data;
} pd_identity_rename_sub_V1_t;

#define PD_CALL_IDENTITY_REMOVE_SUB_V1 13
typedef struct {
    pd_LookupSource_V1_t sub;
} pd_identity_remove_sub_V1_t;

#define PD_CALL_IDENTITY_QUIT_SUB_V1 14
typedef struct {
} pd_identity_quit_sub_V1_t;

#define PD_CALL_PALLETBRIDGE_TRANSFER_NATIVE_V1 0
typedef struct {
    pd_BalanceOf_t amount;
    pd_Bytes_t recipient;
    pd_ChainId_V1_t dest_id;
} pd_palletbridge_transfer_native_V1_t;

#define PD_CALL_PALLETBRIDGE_TRANSFER_ASSET_V1 1
typedef struct {
    pd_Bytes_t recipient;
    pd_RegistryId_V1_t from_registry;
    pd_TokenId_V1_t token_id;
    pd_ChainId_V1_t dest_id;
} pd_palletbridge_transfer_asset_V1_t;

#define PD_CALL_PALLETBRIDGE_TRANSFER_V1 2
typedef struct {
    pd_AccountId_V1_t to;
    pd_BalanceOf_t amount;
    pd_ResourceId_V1_t r_id;
} pd_palletbridge_transfer_V1_t;

#define PD_CALL_PALLETBRIDGE_RECEIVE_NONFUNGIBLE_V1 3
typedef struct {
    pd_AccountId_V1_t to;
    pd_TokenId_V1_t token_id;
    pd_Bytes_t _metadata;
    pd_ResourceId_V1_t resource_id;
} pd_palletbridge_receive_nonfungible_V1_t;

#define PD_CALL_PALLETBRIDGE_REMARK_V1 4
typedef struct {
    pd_Hash_t hash;
    pd_ResourceId_V1_t r_id;
} pd_palletbridge_remark_V1_t;

#define PD_CALL_CHAINBRIDGE_SET_THRESHOLD_V1 0
typedef struct {
    pd_u32_t threshold;
} pd_chainbridge_set_threshold_V1_t;

#define PD_CALL_CHAINBRIDGE_SET_RESOURCE_V1 1
typedef struct {
    pd_ResourceId_V1_t id;
    pd_Bytes_t method;
} pd_chainbridge_set_resource_V1_t;

#define PD_CALL_CHAINBRIDGE_REMOVE_RESOURCE_V1 2
typedef struct {
    pd_ResourceId_V1_t id;
} pd_chainbridge_remove_resource_V1_t;

#define PD_CALL_CHAINBRIDGE_WHITELIST_CHAIN_V1 3
typedef struct {
    pd_ChainId_V1_t id;
} pd_chainbridge_whitelist_chain_V1_t;

#define PD_CALL_CHAINBRIDGE_ADD_RELAYER_V1 4
typedef struct {
    pd_AccountId_V1_t v;
} pd_chainbridge_add_relayer_V1_t;

#define PD_CALL_CHAINBRIDGE_REMOVE_RELAYER_V1 5
typedef struct {
    pd_AccountId_V1_t v;
} pd_chainbridge_remove_relayer_V1_t;

#define PD_CALL_CHAINBRIDGE_ACKNOWLEDGE_PROPOSAL_V1 6
typedef struct {
    pd_DepositNonce_V1_t nonce;
    pd_ChainId_V1_t src_id;
    pd_ResourceId_V1_t r_id;
    pd_Proposal_t call;
} pd_chainbridge_acknowledge_proposal_V1_t;

#define PD_CALL_CHAINBRIDGE_REJECT_PROPOSAL_V1 7
typedef struct {
    pd_DepositNonce_V1_t nonce;
    pd_ChainId_V1_t src_id;
    pd_ResourceId_V1_t r_id;
    pd_Proposal_t call;
} pd_chainbridge_reject_proposal_V1_t;

#define PD_CALL_CHAINBRIDGE_EVAL_VOTE_STATE_V1 8
typedef struct {
    pd_DepositNonce_V1_t nonce;
    pd_ChainId_V1_t src_id;
    pd_Proposal_t prop;
} pd_chainbridge_eval_vote_state_V1_t;

#define PD_CALL_INDICES_CLAIM_V1 0
typedef struct {
    pd_AccountIndex_V1_t index;
} pd_indices_claim_V1_t;

#define PD_CALL_INDICES_TRANSFER_V1 1
typedef struct {
    pd_AccountId_V1_t new_;
    pd_AccountIndex_V1_t index;
} pd_indices_transfer_V1_t;

#define PD_CALL_INDICES_FREE_V1 2
typedef struct {
    pd_AccountIndex_V1_t index;
} pd_indices_free_V1_t;

#define PD_CALL_INDICES_FORCE_TRANSFER_V1 3
typedef struct {
    pd_AccountId_V1_t new_;
    pd_AccountIndex_V1_t index;
    pd_bool_t freeze;
} pd_indices_force_transfer_V1_t;

#define PD_CALL_INDICES_FREEZE_V1 4
typedef struct {
    pd_AccountIndex_V1_t index;
} pd_indices_freeze_V1_t;

#define PD_CALL_SCHEDULER_SCHEDULE_V1 0
typedef struct {
    pd_BlockNumber_t when;
    pd_OptionPeriod_V1_t maybe_periodic;
    pd_Priority_V1_t priority;
    pd_Call_t call;
} pd_scheduler_schedule_V1_t;

#define PD_CALL_SCHEDULER_CANCEL_V1 1
typedef struct {
    pd_BlockNumber_t when;
    pd_u32_t index;
} pd_scheduler_cancel_V1_t;

#define PD_CALL_SCHEDULER_SCHEDULE_NAMED_V1 2
typedef struct {
    pd_Bytes_t id;
    pd_BlockNumber_t when;
    pd_OptionPeriod_V1_t maybe_periodic;
    pd_Priority_V1_t priority;
    pd_Call_t call;
} pd_scheduler_schedule_named_V1_t;

#define PD_CALL_SCHEDULER_CANCEL_NAMED_V1 3
typedef struct {
    pd_Bytes_t id;
} pd_scheduler_cancel_named_V1_t;

#define PD_CALL_SCHEDULER_SCHEDULE_AFTER_V1 4
typedef struct {
    pd_BlockNumber_t after;
    pd_OptionPeriod_V1_t maybe_periodic;
    pd_Priority_V1_t priority;
    pd_Call_t call;
} pd_scheduler_schedule_after_V1_t;

#define PD_CALL_SCHEDULER_SCHEDULE_NAMED_AFTER_V1 5
typedef struct {
    pd_Bytes_t id;
    pd_BlockNumber_t after;
    pd_OptionPeriod_V1_t maybe_periodic;
    pd_Priority_V1_t priority;
    pd_Call_t call;
} pd_scheduler_schedule_named_after_V1_t;

#define PD_CALL_PROXY_PROXY_V1 0
typedef struct {
    pd_AccountId_V1_t real;
    pd_OptionProxyType_V1_t force_proxy_type;
    pd_Call_t call;
} pd_proxy_proxy_V1_t;

#define PD_CALL_PROXY_ADD_PROXY_V1 1
typedef struct {
    pd_AccountId_V1_t proxy;
    pd_ProxyType_V1_t proxy_type;
} pd_proxy_add_proxy_V1_t;

#define PD_CALL_PROXY_REMOVE_PROXY_V1 2
typedef struct {
    pd_AccountId_V1_t proxy;
    pd_ProxyType_V1_t proxy_type;
} pd_proxy_remove_proxy_V1_t;

#define PD_CALL_PROXY_REMOVE_PROXIES_V1 3
typedef struct {
} pd_proxy_remove_proxies_V1_t;

#define PD_CALL_PROXY_ANONYMOUS_V1 4
typedef struct {
    pd_ProxyType_V1_t proxy_type;
    pd_u16_t index;
} pd_proxy_anonymous_V1_t;

#define PD_CALL_PROXY_KILL_ANONYMOUS_V1 5
typedef struct {
    pd_AccountId_V1_t spawner;
    pd_ProxyType_V1_t proxy_type;
    pd_u16_t index;
    pd_CompactBlockNumber_t height;
    pd_Compactu32_t ext_index;
} pd_proxy_kill_anonymous_V1_t;

#define PD_CALL_MULTISIG_AS_MULTI_THRESHOLD_1_V1 0
typedef struct {
    pd_VecAccountId_V1_t other_signatories;
    pd_Call_t call;
} pd_multisig_as_multi_threshold_1_V1_t;

#define PD_CALL_MULTISIG_AS_MULTI_V1 1
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V1_t other_signatories;
    pd_OptionTimepoint_V1_t maybe_timepoint;
    pd_OpaqueCall_V1_t call;
    pd_bool_t store_call;
    pd_Weight_V1_t max_weight;
} pd_multisig_as_multi_V1_t;

#define PD_CALL_MULTISIG_APPROVE_AS_MULTI_V1 2
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V1_t other_signatories;
    pd_OptionTimepoint_V1_t maybe_timepoint;
    pd_u8_array_32_V1_t call_hash;
    pd_Weight_V1_t max_weight;
} pd_multisig_approve_as_multi_V1_t;

#define PD_CALL_MULTISIG_CANCEL_AS_MULTI_V1 3
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V1_t other_signatories;
    pd_Timepoint_V1_t timepoint;
    pd_u8_array_32_V1_t call_hash;
} pd_multisig_cancel_as_multi_V1_t;

#define PD_CALL_RADCLAIMS_CLAIM_V1 0
typedef struct {
    pd_AccountId_V1_t account_id;
    pd_Balance_t amount;
    pd_VecHash_t sorted_hashes;
} pd_radclaims_claim_V1_t;

#define PD_CALL_RADCLAIMS_SET_UPLOAD_ACCOUNT_V1 1
typedef struct {
    pd_AccountId_V1_t account_id;
} pd_radclaims_set_upload_account_V1_t;

#define PD_CALL_RADCLAIMS_STORE_ROOT_HASH_V1 2
typedef struct {
    pd_Hash_t root_hash;
} pd_radclaims_store_root_hash_V1_t;

#define PD_CALL_VESTING_VEST_V1 0
typedef struct {
} pd_vesting_vest_V1_t;

#define PD_CALL_VESTING_VEST_OTHER_V1 1
typedef struct {
    pd_LookupSource_V1_t target;
} pd_vesting_vest_other_V1_t;

#define PD_CALL_VESTING_VESTED_TRANSFER_V1 2
typedef struct {
    pd_LookupSource_V1_t target;
    pd_VestingInfo_V1_t schedule;
} pd_vesting_vested_transfer_V1_t;

#define PD_CALL_VESTING_FORCE_VESTED_TRANSFER_V1 3
typedef struct {
    pd_LookupSource_V1_t source;
    pd_LookupSource_V1_t target;
    pd_VestingInfo_V1_t schedule;
} pd_vesting_force_vested_transfer_V1_t;

#define PD_CALL_REGISTRY_CREATE_REGISTRY_V1 0
typedef struct {
    pd_RegistryInfo_V1_t info;
} pd_registry_create_registry_V1_t;

#define PD_CALL_REGISTRY_MINT_V1 1
typedef struct {
    pd_AccountId_V1_t owner_account;
    pd_RegistryId_V1_t registry_id;
    pd_TokenId_V1_t token_id;
    pd_AssetInfo_V1_t asset_info;
    pd_MintInfo_V1_t mint_info;
} pd_registry_mint_V1_t;

#define PD_CALL_NFT_TRANSFER_V1 0
typedef struct {
    pd_AccountId_V1_t dest_account;
    pd_RegistryId_V1_t registry_id;
    pd_TokenId_V1_t token_id;
} pd_nft_transfer_V1_t;

#define PD_CALL_BRIDGEMAPPING_SET_V1 0
typedef struct {
    pd_ResourceId_V1_t rid;
    pd_Address_V1_t local_addr;
} pd_bridgemapping_set_V1_t;

#define PD_CALL_BRIDGEMAPPING_REMOVE_V1 1
typedef struct {
    pd_ResourceId_V1_t rid;
} pd_bridgemapping_remove_V1_t;

typedef union {
    pd_system_fill_block_V1_t system_fill_block_V1;
    pd_system_remark_V1_t system_remark_V1;
    pd_system_set_heap_pages_V1_t system_set_heap_pages_V1;
    pd_system_set_code_V1_t system_set_code_V1;
    pd_system_set_code_without_checks_V1_t system_set_code_without_checks_V1;
    pd_system_set_changes_trie_config_V1_t system_set_changes_trie_config_V1;
    pd_system_set_storage_V1_t system_set_storage_V1;
    pd_system_kill_storage_V1_t system_kill_storage_V1;
    pd_system_kill_prefix_V1_t system_kill_prefix_V1;
    pd_system_suicide_V1_t system_suicide_V1;
    pd_utility_batch_V1_t utility_batch_V1;
    pd_utility_as_derivative_V1_t utility_as_derivative_V1;
    pd_babe_report_equivocation_V1_t babe_report_equivocation_V1;
    pd_babe_report_equivocation_unsigned_V1_t babe_report_equivocation_unsigned_V1;
    pd_timestamp_set_V1_t timestamp_set_V1;
    pd_authorship_set_uncles_V1_t authorship_set_uncles_V1;
    pd_balances_transfer_V1_t balances_transfer_V1;
    pd_balances_set_balance_V1_t balances_set_balance_V1;
    pd_balances_force_transfer_V1_t balances_force_transfer_V1;
    pd_balances_transfer_keep_alive_V1_t balances_transfer_keep_alive_V1;
    pd_staking_bond_V1_t staking_bond_V1;
    pd_staking_bond_extra_V1_t staking_bond_extra_V1;
    pd_staking_unbond_V1_t staking_unbond_V1;
    pd_staking_withdraw_unbonded_V1_t staking_withdraw_unbonded_V1;
    pd_staking_validate_V1_t staking_validate_V1;
    pd_staking_nominate_V1_t staking_nominate_V1;
    pd_staking_chill_V1_t staking_chill_V1;
    pd_staking_set_payee_V1_t staking_set_payee_V1;
    pd_staking_set_controller_V1_t staking_set_controller_V1;
    pd_staking_set_validator_count_V1_t staking_set_validator_count_V1;
    pd_staking_increase_validator_count_V1_t staking_increase_validator_count_V1;
    pd_staking_scale_validator_count_V1_t staking_scale_validator_count_V1;
    pd_staking_force_no_eras_V1_t staking_force_no_eras_V1;
    pd_staking_force_new_era_V1_t staking_force_new_era_V1;
    pd_staking_set_invulnerables_V1_t staking_set_invulnerables_V1;
    pd_staking_force_unstake_V1_t staking_force_unstake_V1;
    pd_staking_force_new_era_always_V1_t staking_force_new_era_always_V1;
    pd_staking_cancel_deferred_slash_V1_t staking_cancel_deferred_slash_V1;
    pd_staking_payout_stakers_V1_t staking_payout_stakers_V1;
    pd_staking_rebond_V1_t staking_rebond_V1;
    pd_staking_set_history_depth_V1_t staking_set_history_depth_V1;
    pd_staking_reap_stash_V1_t staking_reap_stash_V1;
    pd_staking_submit_election_solution_V1_t staking_submit_election_solution_V1;
    pd_staking_submit_election_solution_unsigned_V1_t staking_submit_election_solution_unsigned_V1;
    pd_session_set_keys_V1_t session_set_keys_V1;
    pd_session_purge_keys_V1_t session_purge_keys_V1;
    pd_democracy_propose_V1_t democracy_propose_V1;
    pd_democracy_second_V1_t democracy_second_V1;
    pd_democracy_vote_V1_t democracy_vote_V1;
    pd_democracy_emergency_cancel_V1_t democracy_emergency_cancel_V1;
    pd_democracy_external_propose_V1_t democracy_external_propose_V1;
    pd_democracy_external_propose_majority_V1_t democracy_external_propose_majority_V1;
    pd_democracy_external_propose_default_V1_t democracy_external_propose_default_V1;
    pd_democracy_fast_track_V1_t democracy_fast_track_V1;
    pd_democracy_veto_external_V1_t democracy_veto_external_V1;
    pd_democracy_cancel_referendum_V1_t democracy_cancel_referendum_V1;
    pd_democracy_cancel_queued_V1_t democracy_cancel_queued_V1;
    pd_democracy_delegate_V1_t democracy_delegate_V1;
    pd_democracy_undelegate_V1_t democracy_undelegate_V1;
    pd_democracy_clear_public_proposals_V1_t democracy_clear_public_proposals_V1;
    pd_democracy_note_preimage_V1_t democracy_note_preimage_V1;
    pd_democracy_note_preimage_operational_V1_t democracy_note_preimage_operational_V1;
    pd_democracy_note_imminent_preimage_V1_t democracy_note_imminent_preimage_V1;
    pd_democracy_note_imminent_preimage_operational_V1_t democracy_note_imminent_preimage_operational_V1;
    pd_democracy_reap_preimage_V1_t democracy_reap_preimage_V1;
    pd_democracy_unlock_V1_t democracy_unlock_V1;
    pd_democracy_remove_vote_V1_t democracy_remove_vote_V1;
    pd_democracy_remove_other_vote_V1_t democracy_remove_other_vote_V1;
    pd_democracy_enact_proposal_V1_t democracy_enact_proposal_V1;
    pd_council_set_members_V1_t council_set_members_V1;
    pd_council_execute_V1_t council_execute_V1;
    pd_council_propose_V1_t council_propose_V1;
    pd_council_vote_V1_t council_vote_V1;
    pd_council_close_V1_t council_close_V1;
    pd_council_disapprove_proposal_V1_t council_disapprove_proposal_V1;
    pd_elections_vote_V1_t elections_vote_V1;
    pd_elections_remove_voter_V1_t elections_remove_voter_V1;
    pd_elections_report_defunct_voter_V1_t elections_report_defunct_voter_V1;
    pd_elections_submit_candidacy_V1_t elections_submit_candidacy_V1;
    pd_elections_renounce_candidacy_V1_t elections_renounce_candidacy_V1;
    pd_elections_remove_member_V1_t elections_remove_member_V1;
    pd_finalitytracker_final_hint_V1_t finalitytracker_final_hint_V1;
    pd_grandpa_report_equivocation_V1_t grandpa_report_equivocation_V1;
    pd_grandpa_report_equivocation_unsigned_V1_t grandpa_report_equivocation_unsigned_V1;
    pd_grandpa_note_stalled_V1_t grandpa_note_stalled_V1;
    pd_imonline_heartbeat_V1_t imonline_heartbeat_V1;
    pd_anchor_pre_commit_V1_t anchor_pre_commit_V1;
    pd_anchor_commit_V1_t anchor_commit_V1;
    pd_anchor_evict_pre_commits_V1_t anchor_evict_pre_commits_V1;
    pd_anchor_evict_anchors_V1_t anchor_evict_anchors_V1;
    pd_fees_set_fee_V1_t fees_set_fee_V1;
    pd_nfts_validate_mint_V1_t nfts_validate_mint_V1;
    pd_multiaccount_create_V1_t multiaccount_create_V1;
    pd_multiaccount_update_V1_t multiaccount_update_V1;
    pd_multiaccount_remove_V1_t multiaccount_remove_V1;
    pd_multiaccount_call_V1_t multiaccount_call_V1;
    pd_multiaccount_approve_V1_t multiaccount_approve_V1;
    pd_multiaccount_cancel_V1_t multiaccount_cancel_V1;
    pd_identity_add_registrar_V1_t identity_add_registrar_V1;
    pd_identity_set_identity_V1_t identity_set_identity_V1;
    pd_identity_set_subs_V1_t identity_set_subs_V1;
    pd_identity_clear_identity_V1_t identity_clear_identity_V1;
    pd_identity_request_judgement_V1_t identity_request_judgement_V1;
    pd_identity_cancel_request_V1_t identity_cancel_request_V1;
    pd_identity_set_fee_V1_t identity_set_fee_V1;
    pd_identity_set_account_id_V1_t identity_set_account_id_V1;
    pd_identity_set_fields_V1_t identity_set_fields_V1;
    pd_identity_provide_judgement_V1_t identity_provide_judgement_V1;
    pd_identity_kill_identity_V1_t identity_kill_identity_V1;
    pd_identity_add_sub_V1_t identity_add_sub_V1;
    pd_identity_rename_sub_V1_t identity_rename_sub_V1;
    pd_identity_remove_sub_V1_t identity_remove_sub_V1;
    pd_identity_quit_sub_V1_t identity_quit_sub_V1;
    pd_palletbridge_transfer_native_V1_t palletbridge_transfer_native_V1;
    pd_palletbridge_transfer_asset_V1_t palletbridge_transfer_asset_V1;
    pd_palletbridge_transfer_V1_t palletbridge_transfer_V1;
    pd_palletbridge_receive_nonfungible_V1_t palletbridge_receive_nonfungible_V1;
    pd_palletbridge_remark_V1_t palletbridge_remark_V1;
    pd_chainbridge_set_threshold_V1_t chainbridge_set_threshold_V1;
    pd_chainbridge_set_resource_V1_t chainbridge_set_resource_V1;
    pd_chainbridge_remove_resource_V1_t chainbridge_remove_resource_V1;
    pd_chainbridge_whitelist_chain_V1_t chainbridge_whitelist_chain_V1;
    pd_chainbridge_add_relayer_V1_t chainbridge_add_relayer_V1;
    pd_chainbridge_remove_relayer_V1_t chainbridge_remove_relayer_V1;
    pd_chainbridge_acknowledge_proposal_V1_t chainbridge_acknowledge_proposal_V1;
    pd_chainbridge_reject_proposal_V1_t chainbridge_reject_proposal_V1;
    pd_chainbridge_eval_vote_state_V1_t chainbridge_eval_vote_state_V1;
    pd_indices_claim_V1_t indices_claim_V1;
    pd_indices_transfer_V1_t indices_transfer_V1;
    pd_indices_free_V1_t indices_free_V1;
    pd_indices_force_transfer_V1_t indices_force_transfer_V1;
    pd_indices_freeze_V1_t indices_freeze_V1;
    pd_scheduler_schedule_V1_t scheduler_schedule_V1;
    pd_scheduler_cancel_V1_t scheduler_cancel_V1;
    pd_scheduler_schedule_named_V1_t scheduler_schedule_named_V1;
    pd_scheduler_cancel_named_V1_t scheduler_cancel_named_V1;
    pd_scheduler_schedule_after_V1_t scheduler_schedule_after_V1;
    pd_scheduler_schedule_named_after_V1_t scheduler_schedule_named_after_V1;
    pd_proxy_proxy_V1_t proxy_proxy_V1;
    pd_proxy_add_proxy_V1_t proxy_add_proxy_V1;
    pd_proxy_remove_proxy_V1_t proxy_remove_proxy_V1;
    pd_proxy_remove_proxies_V1_t proxy_remove_proxies_V1;
    pd_proxy_anonymous_V1_t proxy_anonymous_V1;
    pd_proxy_kill_anonymous_V1_t proxy_kill_anonymous_V1;
    pd_multisig_as_multi_threshold_1_V1_t multisig_as_multi_threshold_1_V1;
    pd_multisig_as_multi_V1_t multisig_as_multi_V1;
    pd_multisig_approve_as_multi_V1_t multisig_approve_as_multi_V1;
    pd_multisig_cancel_as_multi_V1_t multisig_cancel_as_multi_V1;
    pd_radclaims_claim_V1_t radclaims_claim_V1;
    pd_radclaims_set_upload_account_V1_t radclaims_set_upload_account_V1;
    pd_radclaims_store_root_hash_V1_t radclaims_store_root_hash_V1;
    pd_vesting_vest_V1_t vesting_vest_V1;
    pd_vesting_vest_other_V1_t vesting_vest_other_V1;
    pd_vesting_vested_transfer_V1_t vesting_vested_transfer_V1;
    pd_vesting_force_vested_transfer_V1_t vesting_force_vested_transfer_V1;
    pd_registry_create_registry_V1_t registry_create_registry_V1;
    pd_registry_mint_V1_t registry_mint_V1;
    pd_nft_transfer_V1_t nft_transfer_V1;
    pd_bridgemapping_set_V1_t bridgemapping_set_V1;
    pd_bridgemapping_remove_V1_t bridgemapping_remove_V1;
} pd_MethodBasic_V1_t;

typedef union {
} pd_MethodNested_V1_t;

typedef union {
    pd_MethodBasic_V1_t basic;
    pd_MethodNested_V1_t nested;
} pd_Method_V1_t;

#ifdef __cplusplus
}
#endif

#pragma clang diagnostic pop
