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

#ifndef QTAWS_OPENSEARCHCLIENT_H
#define QTAWS_OPENSEARCHCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsopensearchglobal.h"

class QNetworkReply;

namespace QtAws {
namespace OpenSearch {

class OpenSearchClientPrivate;
class AcceptInboundConnectionRequest;
class AcceptInboundConnectionResponse;
class AddTagsRequest;
class AddTagsResponse;
class AssociatePackageRequest;
class AssociatePackageResponse;
class CancelServiceSoftwareUpdateRequest;
class CancelServiceSoftwareUpdateResponse;
class CreateDomainRequest;
class CreateDomainResponse;
class CreateOutboundConnectionRequest;
class CreateOutboundConnectionResponse;
class CreatePackageRequest;
class CreatePackageResponse;
class DeleteDomainRequest;
class DeleteDomainResponse;
class DeleteInboundConnectionRequest;
class DeleteInboundConnectionResponse;
class DeleteOutboundConnectionRequest;
class DeleteOutboundConnectionResponse;
class DeletePackageRequest;
class DeletePackageResponse;
class DescribeDomainRequest;
class DescribeDomainResponse;
class DescribeDomainAutoTunesRequest;
class DescribeDomainAutoTunesResponse;
class DescribeDomainChangeProgressRequest;
class DescribeDomainChangeProgressResponse;
class DescribeDomainConfigRequest;
class DescribeDomainConfigResponse;
class DescribeDomainsRequest;
class DescribeDomainsResponse;
class DescribeInboundConnectionsRequest;
class DescribeInboundConnectionsResponse;
class DescribeInstanceTypeLimitsRequest;
class DescribeInstanceTypeLimitsResponse;
class DescribeOutboundConnectionsRequest;
class DescribeOutboundConnectionsResponse;
class DescribePackagesRequest;
class DescribePackagesResponse;
class DescribeReservedInstanceOfferingsRequest;
class DescribeReservedInstanceOfferingsResponse;
class DescribeReservedInstancesRequest;
class DescribeReservedInstancesResponse;
class DissociatePackageRequest;
class DissociatePackageResponse;
class GetCompatibleVersionsRequest;
class GetCompatibleVersionsResponse;
class GetPackageVersionHistoryRequest;
class GetPackageVersionHistoryResponse;
class GetUpgradeHistoryRequest;
class GetUpgradeHistoryResponse;
class GetUpgradeStatusRequest;
class GetUpgradeStatusResponse;
class ListDomainNamesRequest;
class ListDomainNamesResponse;
class ListDomainsForPackageRequest;
class ListDomainsForPackageResponse;
class ListInstanceTypeDetailsRequest;
class ListInstanceTypeDetailsResponse;
class ListPackagesForDomainRequest;
class ListPackagesForDomainResponse;
class ListTagsRequest;
class ListTagsResponse;
class ListVersionsRequest;
class ListVersionsResponse;
class PurchaseReservedInstanceOfferingRequest;
class PurchaseReservedInstanceOfferingResponse;
class RejectInboundConnectionRequest;
class RejectInboundConnectionResponse;
class RemoveTagsRequest;
class RemoveTagsResponse;
class StartServiceSoftwareUpdateRequest;
class StartServiceSoftwareUpdateResponse;
class UpdateDomainConfigRequest;
class UpdateDomainConfigResponse;
class UpdatePackageRequest;
class UpdatePackageResponse;
class UpgradeDomainRequest;
class UpgradeDomainResponse;

class QTAWSOPENSEARCH_EXPORT OpenSearchClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    OpenSearchClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit OpenSearchClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptInboundConnectionResponse * acceptInboundConnection(const AcceptInboundConnectionRequest &request);
    AddTagsResponse * addTags(const AddTagsRequest &request);
    AssociatePackageResponse * associatePackage(const AssociatePackageRequest &request);
    CancelServiceSoftwareUpdateResponse * cancelServiceSoftwareUpdate(const CancelServiceSoftwareUpdateRequest &request);
    CreateDomainResponse * createDomain(const CreateDomainRequest &request);
    CreateOutboundConnectionResponse * createOutboundConnection(const CreateOutboundConnectionRequest &request);
    CreatePackageResponse * createPackage(const CreatePackageRequest &request);
    DeleteDomainResponse * deleteDomain(const DeleteDomainRequest &request);
    DeleteInboundConnectionResponse * deleteInboundConnection(const DeleteInboundConnectionRequest &request);
    DeleteOutboundConnectionResponse * deleteOutboundConnection(const DeleteOutboundConnectionRequest &request);
    DeletePackageResponse * deletePackage(const DeletePackageRequest &request);
    DescribeDomainResponse * describeDomain(const DescribeDomainRequest &request);
    DescribeDomainAutoTunesResponse * describeDomainAutoTunes(const DescribeDomainAutoTunesRequest &request);
    DescribeDomainChangeProgressResponse * describeDomainChangeProgress(const DescribeDomainChangeProgressRequest &request);
    DescribeDomainConfigResponse * describeDomainConfig(const DescribeDomainConfigRequest &request);
    DescribeDomainsResponse * describeDomains(const DescribeDomainsRequest &request);
    DescribeInboundConnectionsResponse * describeInboundConnections(const DescribeInboundConnectionsRequest &request);
    DescribeInstanceTypeLimitsResponse * describeInstanceTypeLimits(const DescribeInstanceTypeLimitsRequest &request);
    DescribeOutboundConnectionsResponse * describeOutboundConnections(const DescribeOutboundConnectionsRequest &request);
    DescribePackagesResponse * describePackages(const DescribePackagesRequest &request);
    DescribeReservedInstanceOfferingsResponse * describeReservedInstanceOfferings(const DescribeReservedInstanceOfferingsRequest &request);
    DescribeReservedInstancesResponse * describeReservedInstances(const DescribeReservedInstancesRequest &request);
    DissociatePackageResponse * dissociatePackage(const DissociatePackageRequest &request);
    GetCompatibleVersionsResponse * getCompatibleVersions(const GetCompatibleVersionsRequest &request);
    GetPackageVersionHistoryResponse * getPackageVersionHistory(const GetPackageVersionHistoryRequest &request);
    GetUpgradeHistoryResponse * getUpgradeHistory(const GetUpgradeHistoryRequest &request);
    GetUpgradeStatusResponse * getUpgradeStatus(const GetUpgradeStatusRequest &request);
    ListDomainNamesResponse * listDomainNames(const ListDomainNamesRequest &request);
    ListDomainsForPackageResponse * listDomainsForPackage(const ListDomainsForPackageRequest &request);
    ListInstanceTypeDetailsResponse * listInstanceTypeDetails(const ListInstanceTypeDetailsRequest &request);
    ListPackagesForDomainResponse * listPackagesForDomain(const ListPackagesForDomainRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    ListVersionsResponse * listVersions(const ListVersionsRequest &request);
    PurchaseReservedInstanceOfferingResponse * purchaseReservedInstanceOffering(const PurchaseReservedInstanceOfferingRequest &request);
    RejectInboundConnectionResponse * rejectInboundConnection(const RejectInboundConnectionRequest &request);
    RemoveTagsResponse * removeTags(const RemoveTagsRequest &request);
    StartServiceSoftwareUpdateResponse * startServiceSoftwareUpdate(const StartServiceSoftwareUpdateRequest &request);
    UpdateDomainConfigResponse * updateDomainConfig(const UpdateDomainConfigRequest &request);
    UpdatePackageResponse * updatePackage(const UpdatePackageRequest &request);
    UpgradeDomainResponse * upgradeDomain(const UpgradeDomainRequest &request);

private:
    Q_DECLARE_PRIVATE(OpenSearchClient)
    Q_DISABLE_COPY(OpenSearchClient)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
