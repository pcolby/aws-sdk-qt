// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RECOVERYREADINESSCLIENT_H
#define QTAWS_ROUTE53RECOVERYREADINESSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsroute53recoveryreadinessglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Route53RecoveryReadiness {

class Route53RecoveryReadinessClientPrivate;
class CreateCellRequest;
class CreateCellResponse;
class CreateCrossAccountAuthorizationRequest;
class CreateCrossAccountAuthorizationResponse;
class CreateReadinessCheckRequest;
class CreateReadinessCheckResponse;
class CreateRecoveryGroupRequest;
class CreateRecoveryGroupResponse;
class CreateResourceSetRequest;
class CreateResourceSetResponse;
class DeleteCellRequest;
class DeleteCellResponse;
class DeleteCrossAccountAuthorizationRequest;
class DeleteCrossAccountAuthorizationResponse;
class DeleteReadinessCheckRequest;
class DeleteReadinessCheckResponse;
class DeleteRecoveryGroupRequest;
class DeleteRecoveryGroupResponse;
class DeleteResourceSetRequest;
class DeleteResourceSetResponse;
class GetArchitectureRecommendationsRequest;
class GetArchitectureRecommendationsResponse;
class GetCellRequest;
class GetCellResponse;
class GetCellReadinessSummaryRequest;
class GetCellReadinessSummaryResponse;
class GetReadinessCheckRequest;
class GetReadinessCheckResponse;
class GetReadinessCheckResourceStatusRequest;
class GetReadinessCheckResourceStatusResponse;
class GetReadinessCheckStatusRequest;
class GetReadinessCheckStatusResponse;
class GetRecoveryGroupRequest;
class GetRecoveryGroupResponse;
class GetRecoveryGroupReadinessSummaryRequest;
class GetRecoveryGroupReadinessSummaryResponse;
class GetResourceSetRequest;
class GetResourceSetResponse;
class ListCellsRequest;
class ListCellsResponse;
class ListCrossAccountAuthorizationsRequest;
class ListCrossAccountAuthorizationsResponse;
class ListReadinessChecksRequest;
class ListReadinessChecksResponse;
class ListRecoveryGroupsRequest;
class ListRecoveryGroupsResponse;
class ListResourceSetsRequest;
class ListResourceSetsResponse;
class ListRulesRequest;
class ListRulesResponse;
class ListTagsForResourcesRequest;
class ListTagsForResourcesResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateCellRequest;
class UpdateCellResponse;
class UpdateReadinessCheckRequest;
class UpdateReadinessCheckResponse;
class UpdateRecoveryGroupRequest;
class UpdateRecoveryGroupResponse;
class UpdateResourceSetRequest;
class UpdateResourceSetResponse;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT Route53RecoveryReadinessClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    Route53RecoveryReadinessClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit Route53RecoveryReadinessClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateCellResponse * createCell(const CreateCellRequest &request);
    CreateCrossAccountAuthorizationResponse * createCrossAccountAuthorization(const CreateCrossAccountAuthorizationRequest &request);
    CreateReadinessCheckResponse * createReadinessCheck(const CreateReadinessCheckRequest &request);
    CreateRecoveryGroupResponse * createRecoveryGroup(const CreateRecoveryGroupRequest &request);
    CreateResourceSetResponse * createResourceSet(const CreateResourceSetRequest &request);
    DeleteCellResponse * deleteCell(const DeleteCellRequest &request);
    DeleteCrossAccountAuthorizationResponse * deleteCrossAccountAuthorization(const DeleteCrossAccountAuthorizationRequest &request);
    DeleteReadinessCheckResponse * deleteReadinessCheck(const DeleteReadinessCheckRequest &request);
    DeleteRecoveryGroupResponse * deleteRecoveryGroup(const DeleteRecoveryGroupRequest &request);
    DeleteResourceSetResponse * deleteResourceSet(const DeleteResourceSetRequest &request);
    GetArchitectureRecommendationsResponse * getArchitectureRecommendations(const GetArchitectureRecommendationsRequest &request);
    GetCellResponse * getCell(const GetCellRequest &request);
    GetCellReadinessSummaryResponse * getCellReadinessSummary(const GetCellReadinessSummaryRequest &request);
    GetReadinessCheckResponse * getReadinessCheck(const GetReadinessCheckRequest &request);
    GetReadinessCheckResourceStatusResponse * getReadinessCheckResourceStatus(const GetReadinessCheckResourceStatusRequest &request);
    GetReadinessCheckStatusResponse * getReadinessCheckStatus(const GetReadinessCheckStatusRequest &request);
    GetRecoveryGroupResponse * getRecoveryGroup(const GetRecoveryGroupRequest &request);
    GetRecoveryGroupReadinessSummaryResponse * getRecoveryGroupReadinessSummary(const GetRecoveryGroupReadinessSummaryRequest &request);
    GetResourceSetResponse * getResourceSet(const GetResourceSetRequest &request);
    ListCellsResponse * listCells(const ListCellsRequest &request);
    ListCrossAccountAuthorizationsResponse * listCrossAccountAuthorizations(const ListCrossAccountAuthorizationsRequest &request);
    ListReadinessChecksResponse * listReadinessChecks(const ListReadinessChecksRequest &request);
    ListRecoveryGroupsResponse * listRecoveryGroups(const ListRecoveryGroupsRequest &request);
    ListResourceSetsResponse * listResourceSets(const ListResourceSetsRequest &request);
    ListRulesResponse * listRules(const ListRulesRequest &request);
    ListTagsForResourcesResponse * listTagsForResources(const ListTagsForResourcesRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateCellResponse * updateCell(const UpdateCellRequest &request);
    UpdateReadinessCheckResponse * updateReadinessCheck(const UpdateReadinessCheckRequest &request);
    UpdateRecoveryGroupResponse * updateRecoveryGroup(const UpdateRecoveryGroupRequest &request);
    UpdateResourceSetResponse * updateResourceSet(const UpdateResourceSetRequest &request);

private:
    Q_DECLARE_PRIVATE(Route53RecoveryReadinessClient)
    Q_DISABLE_COPY(Route53RecoveryReadinessClient)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
