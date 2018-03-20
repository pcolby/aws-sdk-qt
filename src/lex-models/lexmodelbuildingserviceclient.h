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

#ifndef QTAWS_LEXMODELBUILDINGSERVICECLIENT_H
#define QTAWS_LEXMODELBUILDINGSERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace LexModelBuildingService {

class LexModelBuildingServiceClientPrivate;
class CreateBotVersionResponse;
class CreateIntentVersionResponse;
class CreateSlotTypeVersionResponse;
class DeleteBotResponse;
class DeleteBotAliasResponse;
class DeleteBotChannelAssociationResponse;
class DeleteBotVersionResponse;
class DeleteIntentResponse;
class DeleteIntentVersionResponse;
class DeleteSlotTypeResponse;
class DeleteSlotTypeVersionResponse;
class DeleteUtterancesResponse;
class GetBotResponse;
class GetBotAliasResponse;
class GetBotAliasesResponse;
class GetBotChannelAssociationResponse;
class GetBotChannelAssociationsResponse;
class GetBotVersionsResponse;
class GetBotsResponse;
class GetBuiltinIntentResponse;
class GetBuiltinIntentsResponse;
class GetBuiltinSlotTypesResponse;
class GetExportResponse;
class GetImportResponse;
class GetIntentResponse;
class GetIntentVersionsResponse;
class GetIntentsResponse;
class GetSlotTypeResponse;
class GetSlotTypeVersionsResponse;
class GetSlotTypesResponse;
class GetUtterancesViewResponse;
class PutBotResponse;
class PutBotAliasResponse;
class PutIntentResponse;
class PutSlotTypeResponse;
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
} // namespace AWS

#endif
