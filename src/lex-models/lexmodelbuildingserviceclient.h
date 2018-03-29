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

#ifndef QTAWS_LEXMODELBUILDINGSERVICECLIENT_H
#define QTAWS_LEXMODELBUILDINGSERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace QtAws {
namespace LexModelBuildingService {

class LexModelBuildingServiceClientPrivate;
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
class GetSlotTypeRequest;
class GetSlotTypeResponse;
class GetSlotTypeVersionsRequest;
class GetSlotTypeVersionsResponse;
class GetSlotTypesRequest;
class GetSlotTypesResponse;
class GetUtterancesViewRequest;
class GetUtterancesViewResponse;
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

class QTAWS_EXPORT LexModelBuildingServiceClient : public AwsAbstractClient {
    Q_OBJECT

public:
    LexModelBuildingServiceClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    LexModelBuildingServiceClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
    GetSlotTypeResponse * getSlotType(const GetSlotTypeRequest &request);
    GetSlotTypeVersionsResponse * getSlotTypeVersions(const GetSlotTypeVersionsRequest &request);
    GetSlotTypesResponse * getSlotTypes(const GetSlotTypesRequest &request);
    GetUtterancesViewResponse * getUtterancesView(const GetUtterancesViewRequest &request);
    PutBotResponse * putBot(const PutBotRequest &request);
    PutBotAliasResponse * putBotAlias(const PutBotAliasRequest &request);
    PutIntentResponse * putIntent(const PutIntentRequest &request);
    PutSlotTypeResponse * putSlotType(const PutSlotTypeRequest &request);
    StartImportResponse * startImport(const StartImportRequest &request);

private:
    Q_DECLARE_PRIVATE(LexModelBuildingServiceClient)
    Q_DISABLE_COPY(LexModelBuildingServiceClient)

};

} // namespace LexModelBuildingService
} // namespace QtAws

#endif
