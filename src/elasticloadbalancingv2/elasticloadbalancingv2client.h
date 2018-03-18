/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ELASTICLOADBALANCINGV2CLIENT_H
#define QTAWS_ELASTICLOADBALANCINGV2CLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace ElasticLoadBalancingv2 {

class ElasticLoadBalancingv2ClientPrivate;

class QTAWS_EXPORT ElasticLoadBalancingv2Client : public AwsAbstractClient {
    Q_OBJECT

public:
    ElasticLoadBalancingv2Client(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ElasticLoadBalancingv2Client(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
} // namespace AWS

#endif
