// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LICENSEMANAGERCLIENT_H
#define QTAWS_LICENSEMANAGERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawslicensemanagerglobal.h"

class QNetworkReply;

namespace QtAws {
namespace LicenseManager {

class LicenseManagerClientPrivate;
class AcceptGrantRequest;
class AcceptGrantResponse;
class CheckInLicenseRequest;
class CheckInLicenseResponse;
class CheckoutBorrowLicenseRequest;
class CheckoutBorrowLicenseResponse;
class CheckoutLicenseRequest;
class CheckoutLicenseResponse;
class CreateGrantRequest;
class CreateGrantResponse;
class CreateGrantVersionRequest;
class CreateGrantVersionResponse;
class CreateLicenseRequest;
class CreateLicenseResponse;
class CreateLicenseConfigurationRequest;
class CreateLicenseConfigurationResponse;
class CreateLicenseConversionTaskForResourceRequest;
class CreateLicenseConversionTaskForResourceResponse;
class CreateLicenseManagerReportGeneratorRequest;
class CreateLicenseManagerReportGeneratorResponse;
class CreateLicenseVersionRequest;
class CreateLicenseVersionResponse;
class CreateTokenRequest;
class CreateTokenResponse;
class DeleteGrantRequest;
class DeleteGrantResponse;
class DeleteLicenseRequest;
class DeleteLicenseResponse;
class DeleteLicenseConfigurationRequest;
class DeleteLicenseConfigurationResponse;
class DeleteLicenseManagerReportGeneratorRequest;
class DeleteLicenseManagerReportGeneratorResponse;
class DeleteTokenRequest;
class DeleteTokenResponse;
class ExtendLicenseConsumptionRequest;
class ExtendLicenseConsumptionResponse;
class GetAccessTokenRequest;
class GetAccessTokenResponse;
class GetGrantRequest;
class GetGrantResponse;
class GetLicenseRequest;
class GetLicenseResponse;
class GetLicenseConfigurationRequest;
class GetLicenseConfigurationResponse;
class GetLicenseConversionTaskRequest;
class GetLicenseConversionTaskResponse;
class GetLicenseManagerReportGeneratorRequest;
class GetLicenseManagerReportGeneratorResponse;
class GetLicenseUsageRequest;
class GetLicenseUsageResponse;
class GetServiceSettingsRequest;
class GetServiceSettingsResponse;
class ListAssociationsForLicenseConfigurationRequest;
class ListAssociationsForLicenseConfigurationResponse;
class ListDistributedGrantsRequest;
class ListDistributedGrantsResponse;
class ListFailuresForLicenseConfigurationOperationsRequest;
class ListFailuresForLicenseConfigurationOperationsResponse;
class ListLicenseConfigurationsRequest;
class ListLicenseConfigurationsResponse;
class ListLicenseConversionTasksRequest;
class ListLicenseConversionTasksResponse;
class ListLicenseManagerReportGeneratorsRequest;
class ListLicenseManagerReportGeneratorsResponse;
class ListLicenseSpecificationsForResourceRequest;
class ListLicenseSpecificationsForResourceResponse;
class ListLicenseVersionsRequest;
class ListLicenseVersionsResponse;
class ListLicensesRequest;
class ListLicensesResponse;
class ListReceivedGrantsRequest;
class ListReceivedGrantsResponse;
class ListReceivedLicensesRequest;
class ListReceivedLicensesResponse;
class ListResourceInventoryRequest;
class ListResourceInventoryResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTokensRequest;
class ListTokensResponse;
class ListUsageForLicenseConfigurationRequest;
class ListUsageForLicenseConfigurationResponse;
class RejectGrantRequest;
class RejectGrantResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateLicenseConfigurationRequest;
class UpdateLicenseConfigurationResponse;
class UpdateLicenseManagerReportGeneratorRequest;
class UpdateLicenseManagerReportGeneratorResponse;
class UpdateLicenseSpecificationsForResourceRequest;
class UpdateLicenseSpecificationsForResourceResponse;
class UpdateServiceSettingsRequest;
class UpdateServiceSettingsResponse;

class QTAWSLICENSEMANAGER_EXPORT LicenseManagerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LicenseManagerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit LicenseManagerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptGrantResponse * acceptGrant(const AcceptGrantRequest &request);
    CheckInLicenseResponse * checkInLicense(const CheckInLicenseRequest &request);
    CheckoutBorrowLicenseResponse * checkoutBorrowLicense(const CheckoutBorrowLicenseRequest &request);
    CheckoutLicenseResponse * checkoutLicense(const CheckoutLicenseRequest &request);
    CreateGrantResponse * createGrant(const CreateGrantRequest &request);
    CreateGrantVersionResponse * createGrantVersion(const CreateGrantVersionRequest &request);
    CreateLicenseResponse * createLicense(const CreateLicenseRequest &request);
    CreateLicenseConfigurationResponse * createLicenseConfiguration(const CreateLicenseConfigurationRequest &request);
    CreateLicenseConversionTaskForResourceResponse * createLicenseConversionTaskForResource(const CreateLicenseConversionTaskForResourceRequest &request);
    CreateLicenseManagerReportGeneratorResponse * createLicenseManagerReportGenerator(const CreateLicenseManagerReportGeneratorRequest &request);
    CreateLicenseVersionResponse * createLicenseVersion(const CreateLicenseVersionRequest &request);
    CreateTokenResponse * createToken(const CreateTokenRequest &request);
    DeleteGrantResponse * deleteGrant(const DeleteGrantRequest &request);
    DeleteLicenseResponse * deleteLicense(const DeleteLicenseRequest &request);
    DeleteLicenseConfigurationResponse * deleteLicenseConfiguration(const DeleteLicenseConfigurationRequest &request);
    DeleteLicenseManagerReportGeneratorResponse * deleteLicenseManagerReportGenerator(const DeleteLicenseManagerReportGeneratorRequest &request);
    DeleteTokenResponse * deleteToken(const DeleteTokenRequest &request);
    ExtendLicenseConsumptionResponse * extendLicenseConsumption(const ExtendLicenseConsumptionRequest &request);
    GetAccessTokenResponse * getAccessToken(const GetAccessTokenRequest &request);
    GetGrantResponse * getGrant(const GetGrantRequest &request);
    GetLicenseResponse * getLicense(const GetLicenseRequest &request);
    GetLicenseConfigurationResponse * getLicenseConfiguration(const GetLicenseConfigurationRequest &request);
    GetLicenseConversionTaskResponse * getLicenseConversionTask(const GetLicenseConversionTaskRequest &request);
    GetLicenseManagerReportGeneratorResponse * getLicenseManagerReportGenerator(const GetLicenseManagerReportGeneratorRequest &request);
    GetLicenseUsageResponse * getLicenseUsage(const GetLicenseUsageRequest &request);
    GetServiceSettingsResponse * getServiceSettings(const GetServiceSettingsRequest &request);
    ListAssociationsForLicenseConfigurationResponse * listAssociationsForLicenseConfiguration(const ListAssociationsForLicenseConfigurationRequest &request);
    ListDistributedGrantsResponse * listDistributedGrants(const ListDistributedGrantsRequest &request);
    ListFailuresForLicenseConfigurationOperationsResponse * listFailuresForLicenseConfigurationOperations(const ListFailuresForLicenseConfigurationOperationsRequest &request);
    ListLicenseConfigurationsResponse * listLicenseConfigurations(const ListLicenseConfigurationsRequest &request);
    ListLicenseConversionTasksResponse * listLicenseConversionTasks(const ListLicenseConversionTasksRequest &request);
    ListLicenseManagerReportGeneratorsResponse * listLicenseManagerReportGenerators(const ListLicenseManagerReportGeneratorsRequest &request);
    ListLicenseSpecificationsForResourceResponse * listLicenseSpecificationsForResource(const ListLicenseSpecificationsForResourceRequest &request);
    ListLicenseVersionsResponse * listLicenseVersions(const ListLicenseVersionsRequest &request);
    ListLicensesResponse * listLicenses(const ListLicensesRequest &request);
    ListReceivedGrantsResponse * listReceivedGrants(const ListReceivedGrantsRequest &request);
    ListReceivedLicensesResponse * listReceivedLicenses(const ListReceivedLicensesRequest &request);
    ListResourceInventoryResponse * listResourceInventory(const ListResourceInventoryRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTokensResponse * listTokens(const ListTokensRequest &request);
    ListUsageForLicenseConfigurationResponse * listUsageForLicenseConfiguration(const ListUsageForLicenseConfigurationRequest &request);
    RejectGrantResponse * rejectGrant(const RejectGrantRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateLicenseConfigurationResponse * updateLicenseConfiguration(const UpdateLicenseConfigurationRequest &request);
    UpdateLicenseManagerReportGeneratorResponse * updateLicenseManagerReportGenerator(const UpdateLicenseManagerReportGeneratorRequest &request);
    UpdateLicenseSpecificationsForResourceResponse * updateLicenseSpecificationsForResource(const UpdateLicenseSpecificationsForResourceRequest &request);
    UpdateServiceSettingsResponse * updateServiceSettings(const UpdateServiceSettingsRequest &request);

private:
    Q_DECLARE_PRIVATE(LicenseManagerClient)
    Q_DISABLE_COPY(LicenseManagerClient)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
