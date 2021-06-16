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

#ifndef QTAWS_WORKLINKCLIENT_H
#define QTAWS_WORKLINKCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace WorkLink {

class WorkLinkClientPrivate;
class AssociateDomainRequest;
class AssociateDomainResponse;
class AssociateWebsiteAuthorizationProviderRequest;
class AssociateWebsiteAuthorizationProviderResponse;
class AssociateWebsiteCertificateAuthorityRequest;
class AssociateWebsiteCertificateAuthorityResponse;
class CreateFleetRequest;
class CreateFleetResponse;
class DeleteFleetRequest;
class DeleteFleetResponse;
class DescribeAuditStreamConfigurationRequest;
class DescribeAuditStreamConfigurationResponse;
class DescribeCompanyNetworkConfigurationRequest;
class DescribeCompanyNetworkConfigurationResponse;
class DescribeDeviceRequest;
class DescribeDeviceResponse;
class DescribeDevicePolicyConfigurationRequest;
class DescribeDevicePolicyConfigurationResponse;
class DescribeDomainRequest;
class DescribeDomainResponse;
class DescribeFleetMetadataRequest;
class DescribeFleetMetadataResponse;
class DescribeIdentityProviderConfigurationRequest;
class DescribeIdentityProviderConfigurationResponse;
class DescribeWebsiteCertificateAuthorityRequest;
class DescribeWebsiteCertificateAuthorityResponse;
class DisassociateDomainRequest;
class DisassociateDomainResponse;
class DisassociateWebsiteAuthorizationProviderRequest;
class DisassociateWebsiteAuthorizationProviderResponse;
class DisassociateWebsiteCertificateAuthorityRequest;
class DisassociateWebsiteCertificateAuthorityResponse;
class ListDevicesRequest;
class ListDevicesResponse;
class ListDomainsRequest;
class ListDomainsResponse;
class ListFleetsRequest;
class ListFleetsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListWebsiteAuthorizationProvidersRequest;
class ListWebsiteAuthorizationProvidersResponse;
class ListWebsiteCertificateAuthoritiesRequest;
class ListWebsiteCertificateAuthoritiesResponse;
class RestoreDomainAccessRequest;
class RestoreDomainAccessResponse;
class RevokeDomainAccessRequest;
class RevokeDomainAccessResponse;
class SignOutUserRequest;
class SignOutUserResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAuditStreamConfigurationRequest;
class UpdateAuditStreamConfigurationResponse;
class UpdateCompanyNetworkConfigurationRequest;
class UpdateCompanyNetworkConfigurationResponse;
class UpdateDevicePolicyConfigurationRequest;
class UpdateDevicePolicyConfigurationResponse;
class UpdateDomainMetadataRequest;
class UpdateDomainMetadataResponse;
class UpdateFleetMetadataRequest;
class UpdateFleetMetadataResponse;
class UpdateIdentityProviderConfigurationRequest;
class UpdateIdentityProviderConfigurationResponse;

class QTAWS_EXPORT WorkLinkClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    WorkLinkClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    WorkLinkClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateDomainResponse * associateDomain(const AssociateDomainRequest &request);
    AssociateWebsiteAuthorizationProviderResponse * associateWebsiteAuthorizationProvider(const AssociateWebsiteAuthorizationProviderRequest &request);
    AssociateWebsiteCertificateAuthorityResponse * associateWebsiteCertificateAuthority(const AssociateWebsiteCertificateAuthorityRequest &request);
    CreateFleetResponse * createFleet(const CreateFleetRequest &request);
    DeleteFleetResponse * deleteFleet(const DeleteFleetRequest &request);
    DescribeAuditStreamConfigurationResponse * describeAuditStreamConfiguration(const DescribeAuditStreamConfigurationRequest &request);
    DescribeCompanyNetworkConfigurationResponse * describeCompanyNetworkConfiguration(const DescribeCompanyNetworkConfigurationRequest &request);
    DescribeDeviceResponse * describeDevice(const DescribeDeviceRequest &request);
    DescribeDevicePolicyConfigurationResponse * describeDevicePolicyConfiguration(const DescribeDevicePolicyConfigurationRequest &request);
    DescribeDomainResponse * describeDomain(const DescribeDomainRequest &request);
    DescribeFleetMetadataResponse * describeFleetMetadata(const DescribeFleetMetadataRequest &request);
    DescribeIdentityProviderConfigurationResponse * describeIdentityProviderConfiguration(const DescribeIdentityProviderConfigurationRequest &request);
    DescribeWebsiteCertificateAuthorityResponse * describeWebsiteCertificateAuthority(const DescribeWebsiteCertificateAuthorityRequest &request);
    DisassociateDomainResponse * disassociateDomain(const DisassociateDomainRequest &request);
    DisassociateWebsiteAuthorizationProviderResponse * disassociateWebsiteAuthorizationProvider(const DisassociateWebsiteAuthorizationProviderRequest &request);
    DisassociateWebsiteCertificateAuthorityResponse * disassociateWebsiteCertificateAuthority(const DisassociateWebsiteCertificateAuthorityRequest &request);
    ListDevicesResponse * listDevices(const ListDevicesRequest &request);
    ListDomainsResponse * listDomains(const ListDomainsRequest &request);
    ListFleetsResponse * listFleets(const ListFleetsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWebsiteAuthorizationProvidersResponse * listWebsiteAuthorizationProviders(const ListWebsiteAuthorizationProvidersRequest &request);
    ListWebsiteCertificateAuthoritiesResponse * listWebsiteCertificateAuthorities(const ListWebsiteCertificateAuthoritiesRequest &request);
    RestoreDomainAccessResponse * restoreDomainAccess(const RestoreDomainAccessRequest &request);
    RevokeDomainAccessResponse * revokeDomainAccess(const RevokeDomainAccessRequest &request);
    SignOutUserResponse * signOutUser(const SignOutUserRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAuditStreamConfigurationResponse * updateAuditStreamConfiguration(const UpdateAuditStreamConfigurationRequest &request);
    UpdateCompanyNetworkConfigurationResponse * updateCompanyNetworkConfiguration(const UpdateCompanyNetworkConfigurationRequest &request);
    UpdateDevicePolicyConfigurationResponse * updateDevicePolicyConfiguration(const UpdateDevicePolicyConfigurationRequest &request);
    UpdateDomainMetadataResponse * updateDomainMetadata(const UpdateDomainMetadataRequest &request);
    UpdateFleetMetadataResponse * updateFleetMetadata(const UpdateFleetMetadataRequest &request);
    UpdateIdentityProviderConfigurationResponse * updateIdentityProviderConfiguration(const UpdateIdentityProviderConfigurationRequest &request);

private:
    Q_DECLARE_PRIVATE(WorkLinkClient)
    Q_DISABLE_COPY(WorkLinkClient)

};

} // namespace WorkLink
} // namespace QtAws

#endif
