// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXMODELBUILDINGCLIENT_H
#define QTAWS_LEXMODELBUILDINGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawslexmodelbuildingglobal.h"

class QNetworkReply;

namespace QtAws {
namespace LexModelBuilding {

class LexModelBuildingClientPrivate;
class CreateBotVersionRequest;
class CreateBotVersionResponse;
class CreateIntentVersionRequest;
class CreateIntentVersionResponse;
class CreateSlotTypeVersionRequest;
class CreateSlotTypeVersionResponse;
class DeleteBotRequest;
class DeleteBotResponse;
class DeleteBotAliasRequest;
class DeleteBotAliasResponse;
class DeleteBotChannelAssociationRequest;
class DeleteBotChannelAssociationResponse;
class DeleteBotVersionRequest;
class DeleteBotVersionResponse;
class DeleteIntentRequest;
class DeleteIntentResponse;
class DeleteIntentVersionRequest;
class DeleteIntentVersionResponse;
class DeleteSlotTypeRequest;
class DeleteSlotTypeResponse;
class DeleteSlotTypeVersionRequest;
class DeleteSlotTypeVersionResponse;
class DeleteUtterancesRequest;
class DeleteUtterancesResponse;
class GetBotRequest;
class GetBotResponse;
class GetBotAliasRequest;
class GetBotAliasResponse;
class GetBotAliasesRequest;
class GetBotAliasesResponse;
class GetBotChannelAssociationRequest;
class GetBotChannelAssociationResponse;
class GetBotChannelAssociationsRequest;
class GetBotChannelAssociationsResponse;
class GetBotVersionsRequest;
class GetBotVersionsResponse;
class GetBotsRequest;
class GetBotsResponse;
class GetBuiltinIntentRequest;
class GetBuiltinIntentResponse;
class GetBuiltinIntentsRequest;
class GetBuiltinIntentsResponse;
class GetBuiltinSlotTypesRequest;
class GetBuiltinSlotTypesResponse;
class GetExportRequest;
class GetExportResponse;
class GetImportRequest;
class GetImportResponse;
class GetIntentRequest;
class GetIntentResponse;
class GetIntentVersionsRequest;
class GetIntentVersionsResponse;
class GetIntentsRequest;
class GetIntentsResponse;
class GetMigrationRequest;
class GetMigrationResponse;
class GetMigrationsRequest;
class GetMigrationsResponse;
class GetSlotTypeRequest;
class GetSlotTypeResponse;
class GetSlotTypeVersionsRequest;
class GetSlotTypeVersionsResponse;
class GetSlotTypesRequest;
class GetSlotTypesResponse;
class GetUtterancesViewRequest;
class GetUtterancesViewResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutBotRequest;
class PutBotResponse;
class PutBotAliasRequest;
class PutBotAliasResponse;
class PutIntentRequest;
class PutIntentResponse;
class PutSlotTypeRequest;
class PutSlotTypeResponse;
class StartImportRequest;
class StartImportResponse;
class StartMigrationRequest;
class StartMigrationResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSLEXMODELBUILDING_EXPORT LexModelBuildingClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LexModelBuildingClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit LexModelBuildingClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateBotVersionResponse * createBotVersion(const CreateBotVersionRequest &request);
    CreateIntentVersionResponse * createIntentVersion(const CreateIntentVersionRequest &request);
    CreateSlotTypeVersionResponse * createSlotTypeVersion(const CreateSlotTypeVersionRequest &request);
    DeleteBotResponse * deleteBot(const DeleteBotRequest &request);
    DeleteBotAliasResponse * deleteBotAlias(const DeleteBotAliasRequest &request);
    DeleteBotChannelAssociationResponse * deleteBotChannelAssociation(const DeleteBotChannelAssociationRequest &request);
    DeleteBotVersionResponse * deleteBotVersion(const DeleteBotVersionRequest &request);
    DeleteIntentResponse * deleteIntent(const DeleteIntentRequest &request);
    DeleteIntentVersionResponse * deleteIntentVersion(const DeleteIntentVersionRequest &request);
    DeleteSlotTypeResponse * deleteSlotType(const DeleteSlotTypeRequest &request);
    DeleteSlotTypeVersionResponse * deleteSlotTypeVersion(const DeleteSlotTypeVersionRequest &request);
    DeleteUtterancesResponse * deleteUtterances(const DeleteUtterancesRequest &request);
    GetBotResponse * getBot(const GetBotRequest &request);
    GetBotAliasResponse * getBotAlias(const GetBotAliasRequest &request);
    GetBotAliasesResponse * getBotAliases(const GetBotAliasesRequest &request);
    GetBotChannelAssociationResponse * getBotChannelAssociation(const GetBotChannelAssociationRequest &request);
    GetBotChannelAssociationsResponse * getBotChannelAssociations(const GetBotChannelAssociationsRequest &request);
    GetBotVersionsResponse * getBotVersions(const GetBotVersionsRequest &request);
    GetBotsResponse * getBots(const GetBotsRequest &request);
    GetBuiltinIntentResponse * getBuiltinIntent(const GetBuiltinIntentRequest &request);
    GetBuiltinIntentsResponse * getBuiltinIntents(const GetBuiltinIntentsRequest &request);
    GetBuiltinSlotTypesResponse * getBuiltinSlotTypes(const GetBuiltinSlotTypesRequest &request);
    GetExportResponse * getExport(const GetExportRequest &request);
    GetImportResponse * getImport(const GetImportRequest &request);
    GetIntentResponse * getIntent(const GetIntentRequest &request);
    GetIntentVersionsResponse * getIntentVersions(const GetIntentVersionsRequest &request);
    GetIntentsResponse * getIntents(const GetIntentsRequest &request);
    GetMigrationResponse * getMigration(const GetMigrationRequest &request);
    GetMigrationsResponse * getMigrations(const GetMigrationsRequest &request);
    GetSlotTypeResponse * getSlotType(const GetSlotTypeRequest &request);
    GetSlotTypeVersionsResponse * getSlotTypeVersions(const GetSlotTypeVersionsRequest &request);
    GetSlotTypesResponse * getSlotTypes(const GetSlotTypesRequest &request);
    GetUtterancesViewResponse * getUtterancesView(const GetUtterancesViewRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutBotResponse * putBot(const PutBotRequest &request);
    PutBotAliasResponse * putBotAlias(const PutBotAliasRequest &request);
    PutIntentResponse * putIntent(const PutIntentRequest &request);
    PutSlotTypeResponse * putSlotType(const PutSlotTypeRequest &request);
    StartImportResponse * startImport(const StartImportRequest &request);
    StartMigrationResponse * startMigration(const StartMigrationRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(LexModelBuildingClient)
    Q_DISABLE_COPY(LexModelBuildingClient)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
