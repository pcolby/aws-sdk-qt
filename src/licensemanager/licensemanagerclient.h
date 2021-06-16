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

#ifndef QTAWS_LICENSEMANAGERCLIENT_H
#define QTAWS_LICENSEMANAGERCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace LicenseManager {

class LicenseManagerClientPrivate;
class CreateLicenseConfigurationRequest;
class CreateLicenseConfigurationResponse;
class DeleteLicenseConfigurationRequest;
class DeleteLicenseConfigurationResponse;
class GetLicenseConfigurationRequest;
class GetLicenseConfigurationResponse;
class GetServiceSettingsRequest;
class GetServiceSettingsResponse;
class ListAssociationsForLicenseConfigurationRequest;
class ListAssociationsForLicenseConfigurationResponse;
class ListLicenseConfigurationsRequest;
class ListLicenseConfigurationsResponse;
class ListLicenseSpecificationsForResourceRequest;
class ListLicenseSpecificationsForResourceResponse;
class ListResourceInventoryRequest;
class ListResourceInventoryResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListUsageForLicenseConfigurationRequest;
class ListUsageForLicenseConfigurationResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateLicenseConfigurationRequest;
class UpdateLicenseConfigurationResponse;
class UpdateLicenseSpecificationsForResourceRequest;
class UpdateLicenseSpecificationsForResourceResponse;
class UpdateServiceSettingsRequest;
class UpdateServiceSettingsResponse;

class QTAWS_EXPORT LicenseManagerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LicenseManagerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    LicenseManagerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateLicenseConfigurationResponse * createLicenseConfiguration(const CreateLicenseConfigurationRequest &request);
    DeleteLicenseConfigurationResponse * deleteLicenseConfiguration(const DeleteLicenseConfigurationRequest &request);
    GetLicenseConfigurationResponse * getLicenseConfiguration(const GetLicenseConfigurationRequest &request);
    GetServiceSettingsResponse * getServiceSettings(const GetServiceSettingsRequest &request);
    ListAssociationsForLicenseConfigurationResponse * listAssociationsForLicenseConfiguration(const ListAssociationsForLicenseConfigurationRequest &request);
    ListLicenseConfigurationsResponse * listLicenseConfigurations(const ListLicenseConfigurationsRequest &request);
    ListLicenseSpecificationsForResourceResponse * listLicenseSpecificationsForResource(const ListLicenseSpecificationsForResourceRequest &request);
    ListResourceInventoryResponse * listResourceInventory(const ListResourceInventoryRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListUsageForLicenseConfigurationResponse * listUsageForLicenseConfiguration(const ListUsageForLicenseConfigurationRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateLicenseConfigurationResponse * updateLicenseConfiguration(const UpdateLicenseConfigurationRequest &request);
    UpdateLicenseSpecificationsForResourceResponse * updateLicenseSpecificationsForResource(const UpdateLicenseSpecificationsForResourceRequest &request);
    UpdateServiceSettingsResponse * updateServiceSettings(const UpdateServiceSettingsRequest &request);

private:
    Q_DECLARE_PRIVATE(LicenseManagerClient)
    Q_DISABLE_COPY(LicenseManagerClient)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
