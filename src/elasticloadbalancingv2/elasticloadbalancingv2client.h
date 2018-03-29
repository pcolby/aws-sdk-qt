/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ELASTICLOADBALANCINGV2CLIENT_H
#define QTAWS_ELASTICLOADBALANCINGV2CLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class QtAws::Core::AwsAbstractClient;
class QtAws::Core::AwsAbstractCredentials;

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ElasticLoadBalancingv2ClientPrivate;
class AddListenerCertificatesRequest;
class AddListenerCertificatesResponse;
class AddTagsRequest;
class AddTagsResponse;
class CreateListenerRequest;
class CreateListenerResponse;
class CreateLoadBalancerRequest;
class CreateLoadBalancerResponse;
class CreateRuleRequest;
class CreateRuleResponse;
class CreateTargetGroupRequest;
class CreateTargetGroupResponse;
class DeleteListenerRequest;
class DeleteListenerResponse;
class DeleteLoadBalancerRequest;
class DeleteLoadBalancerResponse;
class DeleteRuleRequest;
class DeleteRuleResponse;
class DeleteTargetGroupRequest;
class DeleteTargetGroupResponse;
class DeregisterTargetsRequest;
class DeregisterTargetsResponse;
class DescribeAccountLimitsRequest;
class DescribeAccountLimitsResponse;
class DescribeListenerCertificatesRequest;
class DescribeListenerCertificatesResponse;
class DescribeListenersRequest;
class DescribeListenersResponse;
class DescribeLoadBalancerAttributesRequest;
class DescribeLoadBalancerAttributesResponse;
class DescribeLoadBalancersRequest;
class DescribeLoadBalancersResponse;
class DescribeRulesRequest;
class DescribeRulesResponse;
class DescribeSSLPoliciesRequest;
class DescribeSSLPoliciesResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class DescribeTargetGroupAttributesRequest;
class DescribeTargetGroupAttributesResponse;
class DescribeTargetGroupsRequest;
class DescribeTargetGroupsResponse;
class DescribeTargetHealthRequest;
class DescribeTargetHealthResponse;
class ModifyListenerRequest;
class ModifyListenerResponse;
class ModifyLoadBalancerAttributesRequest;
class ModifyLoadBalancerAttributesResponse;
class ModifyRuleRequest;
class ModifyRuleResponse;
class ModifyTargetGroupRequest;
class ModifyTargetGroupResponse;
class ModifyTargetGroupAttributesRequest;
class ModifyTargetGroupAttributesResponse;
class RegisterTargetsRequest;
class RegisterTargetsResponse;
class RemoveListenerCertificatesRequest;
class RemoveListenerCertificatesResponse;
class RemoveTagsRequest;
class RemoveTagsResponse;
class SetIpAddressTypeRequest;
class SetIpAddressTypeResponse;
class SetRulePrioritiesRequest;
class SetRulePrioritiesResponse;
class SetSecurityGroupsRequest;
class SetSecurityGroupsResponse;
class SetSubnetsRequest;
class SetSubnetsResponse;

class QTAWS_EXPORT ElasticLoadBalancingv2Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ElasticLoadBalancingv2Client(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ElasticLoadBalancingv2Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddListenerCertificatesResponse * addListenerCertificates(const AddListenerCertificatesRequest &request);
    AddTagsResponse * addTags(const AddTagsRequest &request);
    CreateListenerResponse * createListener(const CreateListenerRequest &request);
    CreateLoadBalancerResponse * createLoadBalancer(const CreateLoadBalancerRequest &request);
    CreateRuleResponse * createRule(const CreateRuleRequest &request);
    CreateTargetGroupResponse * createTargetGroup(const CreateTargetGroupRequest &request);
    DeleteListenerResponse * deleteListener(const DeleteListenerRequest &request);
    DeleteLoadBalancerResponse * deleteLoadBalancer(const DeleteLoadBalancerRequest &request);
    DeleteRuleResponse * deleteRule(const DeleteRuleRequest &request);
    DeleteTargetGroupResponse * deleteTargetGroup(const DeleteTargetGroupRequest &request);
    DeregisterTargetsResponse * deregisterTargets(const DeregisterTargetsRequest &request);
    DescribeAccountLimitsResponse * describeAccountLimits(const DescribeAccountLimitsRequest &request);
    DescribeListenerCertificatesResponse * describeListenerCertificates(const DescribeListenerCertificatesRequest &request);
    DescribeListenersResponse * describeListeners(const DescribeListenersRequest &request);
    DescribeLoadBalancerAttributesResponse * describeLoadBalancerAttributes(const DescribeLoadBalancerAttributesRequest &request);
    DescribeLoadBalancersResponse * describeLoadBalancers(const DescribeLoadBalancersRequest &request);
    DescribeRulesResponse * describeRules(const DescribeRulesRequest &request);
    DescribeSSLPoliciesResponse * describeSSLPolicies(const DescribeSSLPoliciesRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DescribeTargetGroupAttributesResponse * describeTargetGroupAttributes(const DescribeTargetGroupAttributesRequest &request);
    DescribeTargetGroupsResponse * describeTargetGroups(const DescribeTargetGroupsRequest &request);
    DescribeTargetHealthResponse * describeTargetHealth(const DescribeTargetHealthRequest &request);
    ModifyListenerResponse * modifyListener(const ModifyListenerRequest &request);
    ModifyLoadBalancerAttributesResponse * modifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest &request);
    ModifyRuleResponse * modifyRule(const ModifyRuleRequest &request);
    ModifyTargetGroupResponse * modifyTargetGroup(const ModifyTargetGroupRequest &request);
    ModifyTargetGroupAttributesResponse * modifyTargetGroupAttributes(const ModifyTargetGroupAttributesRequest &request);
    RegisterTargetsResponse * registerTargets(const RegisterTargetsRequest &request);
    RemoveListenerCertificatesResponse * removeListenerCertificates(const RemoveListenerCertificatesRequest &request);
    RemoveTagsResponse * removeTags(const RemoveTagsRequest &request);
    SetIpAddressTypeResponse * setIpAddressType(const SetIpAddressTypeRequest &request);
    SetRulePrioritiesResponse * setRulePriorities(const SetRulePrioritiesRequest &request);
    SetSecurityGroupsResponse * setSecurityGroups(const SetSecurityGroupsRequest &request);
    SetSubnetsResponse * setSubnets(const SetSubnetsRequest &request);

private:
    Q_DECLARE_PRIVATE(ElasticLoadBalancingv2Client)
    Q_DISABLE_COPY(ElasticLoadBalancingv2Client)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
