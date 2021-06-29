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

#ifndef QTAWS_LEXMODELSV2CLIENT_H
#define QTAWS_LEXMODELSV2CLIENT_H

#include "core/awsabstractclient.h"

#include "qtawslexmodelsv2global.h"

class QNetworkReply;

namespace QtAws {
namespace LexModelsV2 {

class LexModelsV2ClientPrivate;
class BuildBotLocaleRequest;
class BuildBotLocaleResponse;
class CreateBotRequest;
class CreateBotResponse;
class CreateBotAliasRequest;
class CreateBotAliasResponse;
class CreateBotLocaleRequest;
class CreateBotLocaleResponse;
class CreateBotVersionRequest;
class CreateBotVersionResponse;
class CreateExportRequest;
class CreateExportResponse;
class CreateIntentRequest;
class CreateIntentResponse;
class CreateResourcePolicyRequest;
class CreateResourcePolicyResponse;
class CreateResourcePolicyStatementRequest;
class CreateResourcePolicyStatementResponse;
class CreateSlotRequest;
class CreateSlotResponse;
class CreateSlotTypeRequest;
class CreateSlotTypeResponse;
class CreateUploadUrlRequest;
class CreateUploadUrlResponse;
class DeleteBotRequest;
class DeleteBotResponse;
class DeleteBotAliasRequest;
class DeleteBotAliasResponse;
class DeleteBotLocaleRequest;
class DeleteBotLocaleResponse;
class DeleteBotVersionRequest;
class DeleteBotVersionResponse;
class DeleteExportRequest;
class DeleteExportResponse;
class DeleteImportRequest;
class DeleteImportResponse;
class DeleteIntentRequest;
class DeleteIntentResponse;
class DeleteResourcePolicyRequest;
class DeleteResourcePolicyResponse;
class DeleteResourcePolicyStatementRequest;
class DeleteResourcePolicyStatementResponse;
class DeleteSlotRequest;
class DeleteSlotResponse;
class DeleteSlotTypeRequest;
class DeleteSlotTypeResponse;
class DescribeBotRequest;
class DescribeBotResponse;
class DescribeBotAliasRequest;
class DescribeBotAliasResponse;
class DescribeBotLocaleRequest;
class DescribeBotLocaleResponse;
class DescribeBotVersionRequest;
class DescribeBotVersionResponse;
class DescribeExportRequest;
class DescribeExportResponse;
class DescribeImportRequest;
class DescribeImportResponse;
class DescribeIntentRequest;
class DescribeIntentResponse;
class DescribeResourcePolicyRequest;
class DescribeResourcePolicyResponse;
class DescribeSlotRequest;
class DescribeSlotResponse;
class DescribeSlotTypeRequest;
class DescribeSlotTypeResponse;
class ListBotAliasesRequest;
class ListBotAliasesResponse;
class ListBotLocalesRequest;
class ListBotLocalesResponse;
class ListBotVersionsRequest;
class ListBotVersionsResponse;
class ListBotsRequest;
class ListBotsResponse;
class ListBuiltInIntentsRequest;
class ListBuiltInIntentsResponse;
class ListBuiltInSlotTypesRequest;
class ListBuiltInSlotTypesResponse;
class ListExportsRequest;
class ListExportsResponse;
class ListImportsRequest;
class ListImportsResponse;
class ListIntentsRequest;
class ListIntentsResponse;
class ListSlotTypesRequest;
class ListSlotTypesResponse;
class ListSlotsRequest;
class ListSlotsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartImportRequest;
class StartImportResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateBotRequest;
class UpdateBotResponse;
class UpdateBotAliasRequest;
class UpdateBotAliasResponse;
class UpdateBotLocaleRequest;
class UpdateBotLocaleResponse;
class UpdateExportRequest;
class UpdateExportResponse;
class UpdateIntentRequest;
class UpdateIntentResponse;
class UpdateResourcePolicyRequest;
class UpdateResourcePolicyResponse;
class UpdateSlotRequest;
class UpdateSlotResponse;
class UpdateSlotTypeRequest;
class UpdateSlotTypeResponse;

class QTAWSLEXMODELSV2_EXPORT LexModelsV2Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LexModelsV2Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    LexModelsV2Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BuildBotLocaleResponse * buildBotLocale(const BuildBotLocaleRequest &request);
    CreateBotResponse * createBot(const CreateBotRequest &request);
    CreateBotAliasResponse * createBotAlias(const CreateBotAliasRequest &request);
    CreateBotLocaleResponse * createBotLocale(const CreateBotLocaleRequest &request);
    CreateBotVersionResponse * createBotVersion(const CreateBotVersionRequest &request);
    CreateExportResponse * createExport(const CreateExportRequest &request);
    CreateIntentResponse * createIntent(const CreateIntentRequest &request);
    CreateResourcePolicyResponse * createResourcePolicy(const CreateResourcePolicyRequest &request);
    CreateResourcePolicyStatementResponse * createResourcePolicyStatement(const CreateResourcePolicyStatementRequest &request);
    CreateSlotResponse * createSlot(const CreateSlotRequest &request);
    CreateSlotTypeResponse * createSlotType(const CreateSlotTypeRequest &request);
    CreateUploadUrlResponse * createUploadUrl(const CreateUploadUrlRequest &request);
    DeleteBotResponse * deleteBot(const DeleteBotRequest &request);
    DeleteBotAliasResponse * deleteBotAlias(const DeleteBotAliasRequest &request);
    DeleteBotLocaleResponse * deleteBotLocale(const DeleteBotLocaleRequest &request);
    DeleteBotVersionResponse * deleteBotVersion(const DeleteBotVersionRequest &request);
    DeleteExportResponse * deleteExport(const DeleteExportRequest &request);
    DeleteImportResponse * deleteImport(const DeleteImportRequest &request);
    DeleteIntentResponse * deleteIntent(const DeleteIntentRequest &request);
    DeleteResourcePolicyResponse * deleteResourcePolicy(const DeleteResourcePolicyRequest &request);
    DeleteResourcePolicyStatementResponse * deleteResourcePolicyStatement(const DeleteResourcePolicyStatementRequest &request);
    DeleteSlotResponse * deleteSlot(const DeleteSlotRequest &request);
    DeleteSlotTypeResponse * deleteSlotType(const DeleteSlotTypeRequest &request);
    DescribeBotResponse * describeBot(const DescribeBotRequest &request);
    DescribeBotAliasResponse * describeBotAlias(const DescribeBotAliasRequest &request);
    DescribeBotLocaleResponse * describeBotLocale(const DescribeBotLocaleRequest &request);
    DescribeBotVersionResponse * describeBotVersion(const DescribeBotVersionRequest &request);
    DescribeExportResponse * describeExport(const DescribeExportRequest &request);
    DescribeImportResponse * describeImport(const DescribeImportRequest &request);
    DescribeIntentResponse * describeIntent(const DescribeIntentRequest &request);
    DescribeResourcePolicyResponse * describeResourcePolicy(const DescribeResourcePolicyRequest &request);
    DescribeSlotResponse * describeSlot(const DescribeSlotRequest &request);
    DescribeSlotTypeResponse * describeSlotType(const DescribeSlotTypeRequest &request);
    ListBotAliasesResponse * listBotAliases(const ListBotAliasesRequest &request);
    ListBotLocalesResponse * listBotLocales(const ListBotLocalesRequest &request);
    ListBotVersionsResponse * listBotVersions(const ListBotVersionsRequest &request);
    ListBotsResponse * listBots(const ListBotsRequest &request);
    ListBuiltInIntentsResponse * listBuiltInIntents(const ListBuiltInIntentsRequest &request);
    ListBuiltInSlotTypesResponse * listBuiltInSlotTypes(const ListBuiltInSlotTypesRequest &request);
    ListExportsResponse * listExports(const ListExportsRequest &request);
    ListImportsResponse * listImports(const ListImportsRequest &request);
    ListIntentsResponse * listIntents(const ListIntentsRequest &request);
    ListSlotTypesResponse * listSlotTypes(const ListSlotTypesRequest &request);
    ListSlotsResponse * listSlots(const ListSlotsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartImportResponse * startImport(const StartImportRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateBotResponse * updateBot(const UpdateBotRequest &request);
    UpdateBotAliasResponse * updateBotAlias(const UpdateBotAliasRequest &request);
    UpdateBotLocaleResponse * updateBotLocale(const UpdateBotLocaleRequest &request);
    UpdateExportResponse * updateExport(const UpdateExportRequest &request);
    UpdateIntentResponse * updateIntent(const UpdateIntentRequest &request);
    UpdateResourcePolicyResponse * updateResourcePolicy(const UpdateResourcePolicyRequest &request);
    UpdateSlotResponse * updateSlot(const UpdateSlotRequest &request);
    UpdateSlotTypeResponse * updateSlotType(const UpdateSlotTypeRequest &request);

protected:
    /// @cond internal
    LexModelsV2ClientPrivate * const d_ptr; ///< Internal d-pointer.
    LexModelsV2Client(LexModelsV2ClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(LexModelsV2Client)
    Q_DISABLE_COPY(LexModelsV2Client)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
