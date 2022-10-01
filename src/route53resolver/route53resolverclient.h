// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RESOLVERCLIENT_H
#define QTAWS_ROUTE53RESOLVERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsroute53resolverglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Route53Resolver {

class Route53ResolverClientPrivate;
class AssociateFirewallRuleGroupRequest;
class AssociateFirewallRuleGroupResponse;
class AssociateResolverEndpointIpAddressRequest;
class AssociateResolverEndpointIpAddressResponse;
class AssociateResolverQueryLogConfigRequest;
class AssociateResolverQueryLogConfigResponse;
class AssociateResolverRuleRequest;
class AssociateResolverRuleResponse;
class CreateFirewallDomainListRequest;
class CreateFirewallDomainListResponse;
class CreateFirewallRuleRequest;
class CreateFirewallRuleResponse;
class CreateFirewallRuleGroupRequest;
class CreateFirewallRuleGroupResponse;
class CreateResolverEndpointRequest;
class CreateResolverEndpointResponse;
class CreateResolverQueryLogConfigRequest;
class CreateResolverQueryLogConfigResponse;
class CreateResolverRuleRequest;
class CreateResolverRuleResponse;
class DeleteFirewallDomainListRequest;
class DeleteFirewallDomainListResponse;
class DeleteFirewallRuleRequest;
class DeleteFirewallRuleResponse;
class DeleteFirewallRuleGroupRequest;
class DeleteFirewallRuleGroupResponse;
class DeleteResolverEndpointRequest;
class DeleteResolverEndpointResponse;
class DeleteResolverQueryLogConfigRequest;
class DeleteResolverQueryLogConfigResponse;
class DeleteResolverRuleRequest;
class DeleteResolverRuleResponse;
class DisassociateFirewallRuleGroupRequest;
class DisassociateFirewallRuleGroupResponse;
class DisassociateResolverEndpointIpAddressRequest;
class DisassociateResolverEndpointIpAddressResponse;
class DisassociateResolverQueryLogConfigRequest;
class DisassociateResolverQueryLogConfigResponse;
class DisassociateResolverRuleRequest;
class DisassociateResolverRuleResponse;
class GetFirewallConfigRequest;
class GetFirewallConfigResponse;
class GetFirewallDomainListRequest;
class GetFirewallDomainListResponse;
class GetFirewallRuleGroupRequest;
class GetFirewallRuleGroupResponse;
class GetFirewallRuleGroupAssociationRequest;
class GetFirewallRuleGroupAssociationResponse;
class GetFirewallRuleGroupPolicyRequest;
class GetFirewallRuleGroupPolicyResponse;
class GetResolverConfigRequest;
class GetResolverConfigResponse;
class GetResolverDnssecConfigRequest;
class GetResolverDnssecConfigResponse;
class GetResolverEndpointRequest;
class GetResolverEndpointResponse;
class GetResolverQueryLogConfigRequest;
class GetResolverQueryLogConfigResponse;
class GetResolverQueryLogConfigAssociationRequest;
class GetResolverQueryLogConfigAssociationResponse;
class GetResolverQueryLogConfigPolicyRequest;
class GetResolverQueryLogConfigPolicyResponse;
class GetResolverRuleRequest;
class GetResolverRuleResponse;
class GetResolverRuleAssociationRequest;
class GetResolverRuleAssociationResponse;
class GetResolverRulePolicyRequest;
class GetResolverRulePolicyResponse;
class ImportFirewallDomainsRequest;
class ImportFirewallDomainsResponse;
class ListFirewallConfigsRequest;
class ListFirewallConfigsResponse;
class ListFirewallDomainListsRequest;
class ListFirewallDomainListsResponse;
class ListFirewallDomainsRequest;
class ListFirewallDomainsResponse;
class ListFirewallRuleGroupAssociationsRequest;
class ListFirewallRuleGroupAssociationsResponse;
class ListFirewallRuleGroupsRequest;
class ListFirewallRuleGroupsResponse;
class ListFirewallRulesRequest;
class ListFirewallRulesResponse;
class ListResolverConfigsRequest;
class ListResolverConfigsResponse;
class ListResolverDnssecConfigsRequest;
class ListResolverDnssecConfigsResponse;
class ListResolverEndpointIpAddressesRequest;
class ListResolverEndpointIpAddressesResponse;
class ListResolverEndpointsRequest;
class ListResolverEndpointsResponse;
class ListResolverQueryLogConfigAssociationsRequest;
class ListResolverQueryLogConfigAssociationsResponse;
class ListResolverQueryLogConfigsRequest;
class ListResolverQueryLogConfigsResponse;
class ListResolverRuleAssociationsRequest;
class ListResolverRuleAssociationsResponse;
class ListResolverRulesRequest;
class ListResolverRulesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutFirewallRuleGroupPolicyRequest;
class PutFirewallRuleGroupPolicyResponse;
class PutResolverQueryLogConfigPolicyRequest;
class PutResolverQueryLogConfigPolicyResponse;
class PutResolverRulePolicyRequest;
class PutResolverRulePolicyResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateFirewallConfigRequest;
class UpdateFirewallConfigResponse;
class UpdateFirewallDomainsRequest;
class UpdateFirewallDomainsResponse;
class UpdateFirewallRuleRequest;
class UpdateFirewallRuleResponse;
class UpdateFirewallRuleGroupAssociationRequest;
class UpdateFirewallRuleGroupAssociationResponse;
class UpdateResolverConfigRequest;
class UpdateResolverConfigResponse;
class UpdateResolverDnssecConfigRequest;
class UpdateResolverDnssecConfigResponse;
class UpdateResolverEndpointRequest;
class UpdateResolverEndpointResponse;
class UpdateResolverRuleRequest;
class UpdateResolverRuleResponse;

class QTAWSROUTE53RESOLVER_EXPORT Route53ResolverClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    Route53ResolverClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit Route53ResolverClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateFirewallRuleGroupResponse * associateFirewallRuleGroup(const AssociateFirewallRuleGroupRequest &request);
    AssociateResolverEndpointIpAddressResponse * associateResolverEndpointIpAddress(const AssociateResolverEndpointIpAddressRequest &request);
    AssociateResolverQueryLogConfigResponse * associateResolverQueryLogConfig(const AssociateResolverQueryLogConfigRequest &request);
    AssociateResolverRuleResponse * associateResolverRule(const AssociateResolverRuleRequest &request);
    CreateFirewallDomainListResponse * createFirewallDomainList(const CreateFirewallDomainListRequest &request);
    CreateFirewallRuleResponse * createFirewallRule(const CreateFirewallRuleRequest &request);
    CreateFirewallRuleGroupResponse * createFirewallRuleGroup(const CreateFirewallRuleGroupRequest &request);
    CreateResolverEndpointResponse * createResolverEndpoint(const CreateResolverEndpointRequest &request);
    CreateResolverQueryLogConfigResponse * createResolverQueryLogConfig(const CreateResolverQueryLogConfigRequest &request);
    CreateResolverRuleResponse * createResolverRule(const CreateResolverRuleRequest &request);
    DeleteFirewallDomainListResponse * deleteFirewallDomainList(const DeleteFirewallDomainListRequest &request);
    DeleteFirewallRuleResponse * deleteFirewallRule(const DeleteFirewallRuleRequest &request);
    DeleteFirewallRuleGroupResponse * deleteFirewallRuleGroup(const DeleteFirewallRuleGroupRequest &request);
    DeleteResolverEndpointResponse * deleteResolverEndpoint(const DeleteResolverEndpointRequest &request);
    DeleteResolverQueryLogConfigResponse * deleteResolverQueryLogConfig(const DeleteResolverQueryLogConfigRequest &request);
    DeleteResolverRuleResponse * deleteResolverRule(const DeleteResolverRuleRequest &request);
    DisassociateFirewallRuleGroupResponse * disassociateFirewallRuleGroup(const DisassociateFirewallRuleGroupRequest &request);
    DisassociateResolverEndpointIpAddressResponse * disassociateResolverEndpointIpAddress(const DisassociateResolverEndpointIpAddressRequest &request);
    DisassociateResolverQueryLogConfigResponse * disassociateResolverQueryLogConfig(const DisassociateResolverQueryLogConfigRequest &request);
    DisassociateResolverRuleResponse * disassociateResolverRule(const DisassociateResolverRuleRequest &request);
    GetFirewallConfigResponse * getFirewallConfig(const GetFirewallConfigRequest &request);
    GetFirewallDomainListResponse * getFirewallDomainList(const GetFirewallDomainListRequest &request);
    GetFirewallRuleGroupResponse * getFirewallRuleGroup(const GetFirewallRuleGroupRequest &request);
    GetFirewallRuleGroupAssociationResponse * getFirewallRuleGroupAssociation(const GetFirewallRuleGroupAssociationRequest &request);
    GetFirewallRuleGroupPolicyResponse * getFirewallRuleGroupPolicy(const GetFirewallRuleGroupPolicyRequest &request);
    GetResolverConfigResponse * getResolverConfig(const GetResolverConfigRequest &request);
    GetResolverDnssecConfigResponse * getResolverDnssecConfig(const GetResolverDnssecConfigRequest &request);
    GetResolverEndpointResponse * getResolverEndpoint(const GetResolverEndpointRequest &request);
    GetResolverQueryLogConfigResponse * getResolverQueryLogConfig(const GetResolverQueryLogConfigRequest &request);
    GetResolverQueryLogConfigAssociationResponse * getResolverQueryLogConfigAssociation(const GetResolverQueryLogConfigAssociationRequest &request);
    GetResolverQueryLogConfigPolicyResponse * getResolverQueryLogConfigPolicy(const GetResolverQueryLogConfigPolicyRequest &request);
    GetResolverRuleResponse * getResolverRule(const GetResolverRuleRequest &request);
    GetResolverRuleAssociationResponse * getResolverRuleAssociation(const GetResolverRuleAssociationRequest &request);
    GetResolverRulePolicyResponse * getResolverRulePolicy(const GetResolverRulePolicyRequest &request);
    ImportFirewallDomainsResponse * importFirewallDomains(const ImportFirewallDomainsRequest &request);
    ListFirewallConfigsResponse * listFirewallConfigs(const ListFirewallConfigsRequest &request);
    ListFirewallDomainListsResponse * listFirewallDomainLists(const ListFirewallDomainListsRequest &request);
    ListFirewallDomainsResponse * listFirewallDomains(const ListFirewallDomainsRequest &request);
    ListFirewallRuleGroupAssociationsResponse * listFirewallRuleGroupAssociations(const ListFirewallRuleGroupAssociationsRequest &request);
    ListFirewallRuleGroupsResponse * listFirewallRuleGroups(const ListFirewallRuleGroupsRequest &request);
    ListFirewallRulesResponse * listFirewallRules(const ListFirewallRulesRequest &request);
    ListResolverConfigsResponse * listResolverConfigs(const ListResolverConfigsRequest &request);
    ListResolverDnssecConfigsResponse * listResolverDnssecConfigs(const ListResolverDnssecConfigsRequest &request);
    ListResolverEndpointIpAddressesResponse * listResolverEndpointIpAddresses(const ListResolverEndpointIpAddressesRequest &request);
    ListResolverEndpointsResponse * listResolverEndpoints(const ListResolverEndpointsRequest &request);
    ListResolverQueryLogConfigAssociationsResponse * listResolverQueryLogConfigAssociations(const ListResolverQueryLogConfigAssociationsRequest &request);
    ListResolverQueryLogConfigsResponse * listResolverQueryLogConfigs(const ListResolverQueryLogConfigsRequest &request);
    ListResolverRuleAssociationsResponse * listResolverRuleAssociations(const ListResolverRuleAssociationsRequest &request);
    ListResolverRulesResponse * listResolverRules(const ListResolverRulesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutFirewallRuleGroupPolicyResponse * putFirewallRuleGroupPolicy(const PutFirewallRuleGroupPolicyRequest &request);
    PutResolverQueryLogConfigPolicyResponse * putResolverQueryLogConfigPolicy(const PutResolverQueryLogConfigPolicyRequest &request);
    PutResolverRulePolicyResponse * putResolverRulePolicy(const PutResolverRulePolicyRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateFirewallConfigResponse * updateFirewallConfig(const UpdateFirewallConfigRequest &request);
    UpdateFirewallDomainsResponse * updateFirewallDomains(const UpdateFirewallDomainsRequest &request);
    UpdateFirewallRuleResponse * updateFirewallRule(const UpdateFirewallRuleRequest &request);
    UpdateFirewallRuleGroupAssociationResponse * updateFirewallRuleGroupAssociation(const UpdateFirewallRuleGroupAssociationRequest &request);
    UpdateResolverConfigResponse * updateResolverConfig(const UpdateResolverConfigRequest &request);
    UpdateResolverDnssecConfigResponse * updateResolverDnssecConfig(const UpdateResolverDnssecConfigRequest &request);
    UpdateResolverEndpointResponse * updateResolverEndpoint(const UpdateResolverEndpointRequest &request);
    UpdateResolverRuleResponse * updateResolverRule(const UpdateResolverRuleRequest &request);

private:
    Q_DECLARE_PRIVATE(Route53ResolverClient)
    Q_DISABLE_COPY(Route53ResolverClient)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif
