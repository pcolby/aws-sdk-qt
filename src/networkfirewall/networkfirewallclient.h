/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_NETWORKFIREWALLCLIENT_H
#define QTAWS_NETWORKFIREWALLCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace NetworkFirewall {

class NetworkFirewallClientPrivate;
class AssociateFirewallPolicyRequest;
class AssociateFirewallPolicyResponse;
class AssociateSubnetsRequest;
class AssociateSubnetsResponse;
class CreateFirewallRequest;
class CreateFirewallResponse;
class CreateFirewallPolicyRequest;
class CreateFirewallPolicyResponse;
class CreateRuleGroupRequest;
class CreateRuleGroupResponse;
class DeleteFirewallRequest;
class DeleteFirewallResponse;
class DeleteFirewallPolicyRequest;
class DeleteFirewallPolicyResponse;
class DeleteResourcePolicyRequest;
class DeleteResourcePolicyResponse;
class DeleteRuleGroupRequest;
class DeleteRuleGroupResponse;
class DescribeFirewallRequest;
class DescribeFirewallResponse;
class DescribeFirewallPolicyRequest;
class DescribeFirewallPolicyResponse;
class DescribeLoggingConfigurationRequest;
class DescribeLoggingConfigurationResponse;
class DescribeResourcePolicyRequest;
class DescribeResourcePolicyResponse;
class DescribeRuleGroupRequest;
class DescribeRuleGroupResponse;
class DisassociateSubnetsRequest;
class DisassociateSubnetsResponse;
class ListFirewallPoliciesRequest;
class ListFirewallPoliciesResponse;
class ListFirewallsRequest;
class ListFirewallsResponse;
class ListRuleGroupsRequest;
class ListRuleGroupsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutResourcePolicyRequest;
class PutResourcePolicyResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateFirewallDeleteProtectionRequest;
class UpdateFirewallDeleteProtectionResponse;
class UpdateFirewallDescriptionRequest;
class UpdateFirewallDescriptionResponse;
class UpdateFirewallPolicyRequest;
class UpdateFirewallPolicyResponse;
class UpdateFirewallPolicyChangeProtectionRequest;
class UpdateFirewallPolicyChangeProtectionResponse;
class UpdateLoggingConfigurationRequest;
class UpdateLoggingConfigurationResponse;
class UpdateRuleGroupRequest;
class UpdateRuleGroupResponse;
class UpdateSubnetChangeProtectionRequest;
class UpdateSubnetChangeProtectionResponse;

class QTAWS_EXPORT NetworkFirewallClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    NetworkFirewallClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    NetworkFirewallClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateFirewallPolicyResponse * associateFirewallPolicy(const AssociateFirewallPolicyRequest &request);
    AssociateSubnetsResponse * associateSubnets(const AssociateSubnetsRequest &request);
    CreateFirewallResponse * createFirewall(const CreateFirewallRequest &request);
    CreateFirewallPolicyResponse * createFirewallPolicy(const CreateFirewallPolicyRequest &request);
    CreateRuleGroupResponse * createRuleGroup(const CreateRuleGroupRequest &request);
    DeleteFirewallResponse * deleteFirewall(const DeleteFirewallRequest &request);
    DeleteFirewallPolicyResponse * deleteFirewallPolicy(const DeleteFirewallPolicyRequest &request);
    DeleteResourcePolicyResponse * deleteResourcePolicy(const DeleteResourcePolicyRequest &request);
    DeleteRuleGroupResponse * deleteRuleGroup(const DeleteRuleGroupRequest &request);
    DescribeFirewallResponse * describeFirewall(const DescribeFirewallRequest &request);
    DescribeFirewallPolicyResponse * describeFirewallPolicy(const DescribeFirewallPolicyRequest &request);
    DescribeLoggingConfigurationResponse * describeLoggingConfiguration(const DescribeLoggingConfigurationRequest &request);
    DescribeResourcePolicyResponse * describeResourcePolicy(const DescribeResourcePolicyRequest &request);
    DescribeRuleGroupResponse * describeRuleGroup(const DescribeRuleGroupRequest &request);
    DisassociateSubnetsResponse * disassociateSubnets(const DisassociateSubnetsRequest &request);
    ListFirewallPoliciesResponse * listFirewallPolicies(const ListFirewallPoliciesRequest &request);
    ListFirewallsResponse * listFirewalls(const ListFirewallsRequest &request);
    ListRuleGroupsResponse * listRuleGroups(const ListRuleGroupsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutResourcePolicyResponse * putResourcePolicy(const PutResourcePolicyRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateFirewallDeleteProtectionResponse * updateFirewallDeleteProtection(const UpdateFirewallDeleteProtectionRequest &request);
    UpdateFirewallDescriptionResponse * updateFirewallDescription(const UpdateFirewallDescriptionRequest &request);
    UpdateFirewallPolicyResponse * updateFirewallPolicy(const UpdateFirewallPolicyRequest &request);
    UpdateFirewallPolicyChangeProtectionResponse * updateFirewallPolicyChangeProtection(const UpdateFirewallPolicyChangeProtectionRequest &request);
    UpdateLoggingConfigurationResponse * updateLoggingConfiguration(const UpdateLoggingConfigurationRequest &request);
    UpdateRuleGroupResponse * updateRuleGroup(const UpdateRuleGroupRequest &request);
    UpdateSubnetChangeProtectionResponse * updateSubnetChangeProtection(const UpdateSubnetChangeProtectionRequest &request);

private:
    Q_DECLARE_PRIVATE(NetworkFirewallClient)
    Q_DISABLE_COPY(NetworkFirewallClient)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
