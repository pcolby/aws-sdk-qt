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

#ifndef QTAWS_ROUTE53RECOVERYCONTROLCONFIGCLIENT_H
#define QTAWS_ROUTE53RECOVERYCONTROLCONFIGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsroute53recoverycontrolconfigglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Route53RecoveryControlConfig {

class Route53RecoveryControlConfigClientPrivate;
class CreateClusterRequest;
class CreateClusterResponse;
class CreateControlPanelRequest;
class CreateControlPanelResponse;
class CreateRoutingControlRequest;
class CreateRoutingControlResponse;
class CreateSafetyRuleRequest;
class CreateSafetyRuleResponse;
class DeleteClusterRequest;
class DeleteClusterResponse;
class DeleteControlPanelRequest;
class DeleteControlPanelResponse;
class DeleteRoutingControlRequest;
class DeleteRoutingControlResponse;
class DeleteSafetyRuleRequest;
class DeleteSafetyRuleResponse;
class DescribeClusterRequest;
class DescribeClusterResponse;
class DescribeControlPanelRequest;
class DescribeControlPanelResponse;
class DescribeRoutingControlRequest;
class DescribeRoutingControlResponse;
class DescribeSafetyRuleRequest;
class DescribeSafetyRuleResponse;
class ListAssociatedRoute53HealthChecksRequest;
class ListAssociatedRoute53HealthChecksResponse;
class ListClustersRequest;
class ListClustersResponse;
class ListControlPanelsRequest;
class ListControlPanelsResponse;
class ListRoutingControlsRequest;
class ListRoutingControlsResponse;
class ListSafetyRulesRequest;
class ListSafetyRulesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateControlPanelRequest;
class UpdateControlPanelResponse;
class UpdateRoutingControlRequest;
class UpdateRoutingControlResponse;
class UpdateSafetyRuleRequest;
class UpdateSafetyRuleResponse;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT Route53RecoveryControlConfigClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    Route53RecoveryControlConfigClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit Route53RecoveryControlConfigClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateClusterResponse * createCluster(const CreateClusterRequest &request);
    CreateControlPanelResponse * createControlPanel(const CreateControlPanelRequest &request);
    CreateRoutingControlResponse * createRoutingControl(const CreateRoutingControlRequest &request);
    CreateSafetyRuleResponse * createSafetyRule(const CreateSafetyRuleRequest &request);
    DeleteClusterResponse * deleteCluster(const DeleteClusterRequest &request);
    DeleteControlPanelResponse * deleteControlPanel(const DeleteControlPanelRequest &request);
    DeleteRoutingControlResponse * deleteRoutingControl(const DeleteRoutingControlRequest &request);
    DeleteSafetyRuleResponse * deleteSafetyRule(const DeleteSafetyRuleRequest &request);
    DescribeClusterResponse * describeCluster(const DescribeClusterRequest &request);
    DescribeControlPanelResponse * describeControlPanel(const DescribeControlPanelRequest &request);
    DescribeRoutingControlResponse * describeRoutingControl(const DescribeRoutingControlRequest &request);
    DescribeSafetyRuleResponse * describeSafetyRule(const DescribeSafetyRuleRequest &request);
    ListAssociatedRoute53HealthChecksResponse * listAssociatedRoute53HealthChecks(const ListAssociatedRoute53HealthChecksRequest &request);
    ListClustersResponse * listClusters(const ListClustersRequest &request);
    ListControlPanelsResponse * listControlPanels(const ListControlPanelsRequest &request);
    ListRoutingControlsResponse * listRoutingControls(const ListRoutingControlsRequest &request);
    ListSafetyRulesResponse * listSafetyRules(const ListSafetyRulesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateControlPanelResponse * updateControlPanel(const UpdateControlPanelRequest &request);
    UpdateRoutingControlResponse * updateRoutingControl(const UpdateRoutingControlRequest &request);
    UpdateSafetyRuleResponse * updateSafetyRule(const UpdateSafetyRuleRequest &request);

private:
    Q_DECLARE_PRIVATE(Route53RecoveryControlConfigClient)
    Q_DISABLE_COPY(Route53RecoveryControlConfigClient)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
