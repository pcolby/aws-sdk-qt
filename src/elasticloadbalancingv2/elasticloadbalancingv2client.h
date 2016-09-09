/*
    Copyright 2013-2016 Paul Colby

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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    ElasticLoadBalancingv2AddTagsResponse * addTags(const ElasticLoadBalancingv2AddTagsRequest &request);
    ElasticLoadBalancingv2CreateListenerResponse * createListener(const ElasticLoadBalancingv2CreateListenerRequest &request);
    ElasticLoadBalancingv2CreateLoadBalancerResponse * createLoadBalancer(const ElasticLoadBalancingv2CreateLoadBalancerRequest &request);
    ElasticLoadBalancingv2CreateRuleResponse * createRule(const ElasticLoadBalancingv2CreateRuleRequest &request);
    ElasticLoadBalancingv2CreateTargetGroupResponse * createTargetGroup(const ElasticLoadBalancingv2CreateTargetGroupRequest &request);
    ElasticLoadBalancingv2DeleteListenerResponse * deleteListener(const ElasticLoadBalancingv2DeleteListenerRequest &request);
    ElasticLoadBalancingv2DeleteLoadBalancerResponse * deleteLoadBalancer(const ElasticLoadBalancingv2DeleteLoadBalancerRequest &request);
    ElasticLoadBalancingv2DeleteRuleResponse * deleteRule(const ElasticLoadBalancingv2DeleteRuleRequest &request);
    ElasticLoadBalancingv2DeleteTargetGroupResponse * deleteTargetGroup(const ElasticLoadBalancingv2DeleteTargetGroupRequest &request);
    ElasticLoadBalancingv2DeregisterTargetsResponse * deregisterTargets(const ElasticLoadBalancingv2DeregisterTargetsRequest &request);
    ElasticLoadBalancingv2DescribeListenersResponse * describeListeners(const ElasticLoadBalancingv2DescribeListenersRequest &request);
    ElasticLoadBalancingv2DescribeLoadBalancerAttributesResponse * describeLoadBalancerAttributes(const ElasticLoadBalancingv2DescribeLoadBalancerAttributesRequest &request);
    ElasticLoadBalancingv2DescribeLoadBalancersResponse * describeLoadBalancers(const ElasticLoadBalancingv2DescribeLoadBalancersRequest &request);
    ElasticLoadBalancingv2DescribeRulesResponse * describeRules(const ElasticLoadBalancingv2DescribeRulesRequest &request);
    ElasticLoadBalancingv2DescribeSSLPoliciesResponse * describeSSLPolicies(const ElasticLoadBalancingv2DescribeSSLPoliciesRequest &request);
    ElasticLoadBalancingv2DescribeTagsResponse * describeTags(const ElasticLoadBalancingv2DescribeTagsRequest &request);
    ElasticLoadBalancingv2DescribeTargetGroupAttributesResponse * describeTargetGroupAttributes(const ElasticLoadBalancingv2DescribeTargetGroupAttributesRequest &request);
    ElasticLoadBalancingv2DescribeTargetGroupsResponse * describeTargetGroups(const ElasticLoadBalancingv2DescribeTargetGroupsRequest &request);
    ElasticLoadBalancingv2DescribeTargetHealthResponse * describeTargetHealth(const ElasticLoadBalancingv2DescribeTargetHealthRequest &request);
    ElasticLoadBalancingv2ModifyListenerResponse * modifyListener(const ElasticLoadBalancingv2ModifyListenerRequest &request);
    ElasticLoadBalancingv2ModifyLoadBalancerAttributesResponse * modifyLoadBalancerAttributes(const ElasticLoadBalancingv2ModifyLoadBalancerAttributesRequest &request);
    ElasticLoadBalancingv2ModifyRuleResponse * modifyRule(const ElasticLoadBalancingv2ModifyRuleRequest &request);
    ElasticLoadBalancingv2ModifyTargetGroupResponse * modifyTargetGroup(const ElasticLoadBalancingv2ModifyTargetGroupRequest &request);
    ElasticLoadBalancingv2ModifyTargetGroupAttributesResponse * modifyTargetGroupAttributes(const ElasticLoadBalancingv2ModifyTargetGroupAttributesRequest &request);
    ElasticLoadBalancingv2RegisterTargetsResponse * registerTargets(const ElasticLoadBalancingv2RegisterTargetsRequest &request);
    ElasticLoadBalancingv2RemoveTagsResponse * removeTags(const ElasticLoadBalancingv2RemoveTagsRequest &request);
    ElasticLoadBalancingv2SetRulePrioritiesResponse * setRulePriorities(const ElasticLoadBalancingv2SetRulePrioritiesRequest &request);
    ElasticLoadBalancingv2SetSecurityGroupsResponse * setSecurityGroups(const ElasticLoadBalancingv2SetSecurityGroupsRequest &request);
    ElasticLoadBalancingv2SetSubnetsResponse * setSubnets(const ElasticLoadBalancingv2SetSubnetsRequest &request);

private:
    Q_DECLARE_PRIVATE(ElasticLoadBalancingv2Client)
    Q_DISABLE_COPY(ElasticLoadBalancingv2Client)

};

QTAWS_END_NAMESPACE

#endif
