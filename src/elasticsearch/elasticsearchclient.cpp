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

#include "elasticsearchclient.h"
#include "elasticsearchclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptinboundcrossclustersearchconnectionrequest.h"
#include "acceptinboundcrossclustersearchconnectionresponse.h"
#include "addtagsrequest.h"
#include "addtagsresponse.h"
#include "associatepackagerequest.h"
#include "associatepackageresponse.h"
#include "cancelelasticsearchservicesoftwareupdaterequest.h"
#include "cancelelasticsearchservicesoftwareupdateresponse.h"
#include "createelasticsearchdomainrequest.h"
#include "createelasticsearchdomainresponse.h"
#include "createoutboundcrossclustersearchconnectionrequest.h"
#include "createoutboundcrossclustersearchconnectionresponse.h"
#include "createpackagerequest.h"
#include "createpackageresponse.h"
#include "deleteelasticsearchdomainrequest.h"
#include "deleteelasticsearchdomainresponse.h"
#include "deleteelasticsearchservicerolerequest.h"
#include "deleteelasticsearchserviceroleresponse.h"
#include "deleteinboundcrossclustersearchconnectionrequest.h"
#include "deleteinboundcrossclustersearchconnectionresponse.h"
#include "deleteoutboundcrossclustersearchconnectionrequest.h"
#include "deleteoutboundcrossclustersearchconnectionresponse.h"
#include "deletepackagerequest.h"
#include "deletepackageresponse.h"
#include "describedomainautotunesrequest.h"
#include "describedomainautotunesresponse.h"
#include "describedomainchangeprogressrequest.h"
#include "describedomainchangeprogressresponse.h"
#include "describeelasticsearchdomainrequest.h"
#include "describeelasticsearchdomainresponse.h"
#include "describeelasticsearchdomainconfigrequest.h"
#include "describeelasticsearchdomainconfigresponse.h"
#include "describeelasticsearchdomainsrequest.h"
#include "describeelasticsearchdomainsresponse.h"
#include "describeelasticsearchinstancetypelimitsrequest.h"
#include "describeelasticsearchinstancetypelimitsresponse.h"
#include "describeinboundcrossclustersearchconnectionsrequest.h"
#include "describeinboundcrossclustersearchconnectionsresponse.h"
#include "describeoutboundcrossclustersearchconnectionsrequest.h"
#include "describeoutboundcrossclustersearchconnectionsresponse.h"
#include "describepackagesrequest.h"
#include "describepackagesresponse.h"
#include "describereservedelasticsearchinstanceofferingsrequest.h"
#include "describereservedelasticsearchinstanceofferingsresponse.h"
#include "describereservedelasticsearchinstancesrequest.h"
#include "describereservedelasticsearchinstancesresponse.h"
#include "dissociatepackagerequest.h"
#include "dissociatepackageresponse.h"
#include "getcompatibleelasticsearchversionsrequest.h"
#include "getcompatibleelasticsearchversionsresponse.h"
#include "getpackageversionhistoryrequest.h"
#include "getpackageversionhistoryresponse.h"
#include "getupgradehistoryrequest.h"
#include "getupgradehistoryresponse.h"
#include "getupgradestatusrequest.h"
#include "getupgradestatusresponse.h"
#include "listdomainnamesrequest.h"
#include "listdomainnamesresponse.h"
#include "listdomainsforpackagerequest.h"
#include "listdomainsforpackageresponse.h"
#include "listelasticsearchinstancetypesrequest.h"
#include "listelasticsearchinstancetypesresponse.h"
#include "listelasticsearchversionsrequest.h"
#include "listelasticsearchversionsresponse.h"
#include "listpackagesfordomainrequest.h"
#include "listpackagesfordomainresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "purchasereservedelasticsearchinstanceofferingrequest.h"
#include "purchasereservedelasticsearchinstanceofferingresponse.h"
#include "rejectinboundcrossclustersearchconnectionrequest.h"
#include "rejectinboundcrossclustersearchconnectionresponse.h"
#include "removetagsrequest.h"
#include "removetagsresponse.h"
#include "startelasticsearchservicesoftwareupdaterequest.h"
#include "startelasticsearchservicesoftwareupdateresponse.h"
#include "updateelasticsearchdomainconfigrequest.h"
#include "updateelasticsearchdomainconfigresponse.h"
#include "updatepackagerequest.h"
#include "updatepackageresponse.h"
#include "upgradeelasticsearchdomainrequest.h"
#include "upgradeelasticsearchdomainresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Elasticsearch
 * \brief Contains classess for accessing Amazon Elasticsearch Service.
 *
 * \inmodule QtAwsElasticsearch
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::ElasticsearchClient
 * \brief The ElasticsearchClient class provides access to the Amazon Elasticsearch Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsElasticsearch
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch Configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  For sample code that uses the Configuration API, see the <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-configuration-samples.html">Amazon
 *  Elasticsearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-request-signing.html">sample code for
 *  sending signed HTTP requests to the Elasticsearch
 * 
 *  APIs</a>>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 */

/*!
 * \brief Constructs a ElasticsearchClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ElasticsearchClient::ElasticsearchClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ElasticsearchClientPrivate(this), parent)
{
    Q_D(ElasticsearchClient);
    d->apiVersion = QStringLiteral("2015-01-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("es");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Elasticsearch Service");
    d->serviceName = QStringLiteral("es");
}

/*!
 * \overload ElasticsearchClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ElasticsearchClient::ElasticsearchClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ElasticsearchClientPrivate(this), parent)
{
    Q_D(ElasticsearchClient);
    d->apiVersion = QStringLiteral("2015-01-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("es");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Elasticsearch Service");
    d->serviceName = QStringLiteral("es");
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * AcceptInboundCrossClusterSearchConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows the destination domain owner to accept an inbound cross-cluster search connection
 */
AcceptInboundCrossClusterSearchConnectionResponse * ElasticsearchClient::acceptInboundCrossClusterSearchConnection(const AcceptInboundCrossClusterSearchConnectionRequest &request)
{
    return qobject_cast<AcceptInboundCrossClusterSearchConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * AddTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches tags to an existing Elasticsearch domain. Tags are a set of case-sensitive key value pairs. An Elasticsearch
 * domain may have up to 10 tags. See <a
 * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-awsresorcetagging"
 * target="_blank"> Tagging Amazon Elasticsearch Service Domains for more
 */
AddTagsResponse * ElasticsearchClient::addTags(const AddTagsRequest &request)
{
    return qobject_cast<AddTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * AssociatePackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a package with an Amazon ES
 */
AssociatePackageResponse * ElasticsearchClient::associatePackage(const AssociatePackageRequest &request)
{
    return qobject_cast<AssociatePackageResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * CancelElasticsearchServiceSoftwareUpdateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a scheduled service software update for an Amazon ES domain. You can only perform this operation before the
 * <code>AutomatedUpdateDate</code> and when the <code>UpdateStatus</code> is in the <code>PENDING_UPDATE</code>
 */
CancelElasticsearchServiceSoftwareUpdateResponse * ElasticsearchClient::cancelElasticsearchServiceSoftwareUpdate(const CancelElasticsearchServiceSoftwareUpdateRequest &request)
{
    return qobject_cast<CancelElasticsearchServiceSoftwareUpdateResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * CreateElasticsearchDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Elasticsearch domain. For more information, see <a
 * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
 * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon Elasticsearch Service Developer
 */
CreateElasticsearchDomainResponse * ElasticsearchClient::createElasticsearchDomain(const CreateElasticsearchDomainRequest &request)
{
    return qobject_cast<CreateElasticsearchDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * CreateOutboundCrossClusterSearchConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new cross-cluster search connection from a source domain to a destination
 */
CreateOutboundCrossClusterSearchConnectionResponse * ElasticsearchClient::createOutboundCrossClusterSearchConnection(const CreateOutboundCrossClusterSearchConnectionRequest &request)
{
    return qobject_cast<CreateOutboundCrossClusterSearchConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * CreatePackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a package for use with Amazon ES
 */
CreatePackageResponse * ElasticsearchClient::createPackage(const CreatePackageRequest &request)
{
    return qobject_cast<CreatePackageResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DeleteElasticsearchDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently deletes the specified Elasticsearch domain and all of its data. Once a domain is deleted, it cannot be
 */
DeleteElasticsearchDomainResponse * ElasticsearchClient::deleteElasticsearchDomain(const DeleteElasticsearchDomainRequest &request)
{
    return qobject_cast<DeleteElasticsearchDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DeleteElasticsearchServiceRoleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the service-linked role that Elasticsearch Service uses to manage and maintain VPC domains. Role deletion will
 * fail if any existing VPC domains use the role. You must delete any such Elasticsearch domains before deleting the role.
 * See <a href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html#es-enabling-slr"
 * target="_blank">Deleting Elasticsearch Service Role</a> in <i>VPC Endpoints for Amazon Elasticsearch Service
 */
DeleteElasticsearchServiceRoleResponse * ElasticsearchClient::deleteElasticsearchServiceRole(const DeleteElasticsearchServiceRoleRequest &request)
{
    return qobject_cast<DeleteElasticsearchServiceRoleResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DeleteInboundCrossClusterSearchConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows the destination domain owner to delete an existing inbound cross-cluster search
 */
DeleteInboundCrossClusterSearchConnectionResponse * ElasticsearchClient::deleteInboundCrossClusterSearchConnection(const DeleteInboundCrossClusterSearchConnectionRequest &request)
{
    return qobject_cast<DeleteInboundCrossClusterSearchConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DeleteOutboundCrossClusterSearchConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows the source domain owner to delete an existing outbound cross-cluster search
 */
DeleteOutboundCrossClusterSearchConnectionResponse * ElasticsearchClient::deleteOutboundCrossClusterSearchConnection(const DeleteOutboundCrossClusterSearchConnectionRequest &request)
{
    return qobject_cast<DeleteOutboundCrossClusterSearchConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DeletePackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete the
 */
DeletePackageResponse * ElasticsearchClient::deletePackage(const DeletePackageRequest &request)
{
    return qobject_cast<DeletePackageResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DescribeDomainAutoTunesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides scheduled Auto-Tune action details for the Elasticsearch domain, such as Auto-Tune action type, description,
 * severity, and scheduled
 */
DescribeDomainAutoTunesResponse * ElasticsearchClient::describeDomainAutoTunes(const DescribeDomainAutoTunesRequest &request)
{
    return qobject_cast<DescribeDomainAutoTunesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DescribeDomainChangeProgressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the current blue/green deployment happening on a domain, including a change ID, status, and
 * progress
 */
DescribeDomainChangeProgressResponse * ElasticsearchClient::describeDomainChangeProgress(const DescribeDomainChangeProgressRequest &request)
{
    return qobject_cast<DescribeDomainChangeProgressResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DescribeElasticsearchDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns domain configuration information about the specified Elasticsearch domain, including the domain ID, domain
 * endpoint, and domain
 */
DescribeElasticsearchDomainResponse * ElasticsearchClient::describeElasticsearchDomain(const DescribeElasticsearchDomainRequest &request)
{
    return qobject_cast<DescribeElasticsearchDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DescribeElasticsearchDomainConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides cluster configuration information about the specified Elasticsearch domain, such as the state, creation date,
 * update version, and update date for cluster
 */
DescribeElasticsearchDomainConfigResponse * ElasticsearchClient::describeElasticsearchDomainConfig(const DescribeElasticsearchDomainConfigRequest &request)
{
    return qobject_cast<DescribeElasticsearchDomainConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DescribeElasticsearchDomainsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns domain configuration information about the specified Elasticsearch domains, including the domain ID, domain
 * endpoint, and domain
 */
DescribeElasticsearchDomainsResponse * ElasticsearchClient::describeElasticsearchDomains(const DescribeElasticsearchDomainsRequest &request)
{
    return qobject_cast<DescribeElasticsearchDomainsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DescribeElasticsearchInstanceTypeLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe Elasticsearch Limits for a given InstanceType and ElasticsearchVersion. When modifying existing Domain, specify
 * the <code> <a>DomainName</a> </code> to know what Limits are supported for modifying.
 */
DescribeElasticsearchInstanceTypeLimitsResponse * ElasticsearchClient::describeElasticsearchInstanceTypeLimits(const DescribeElasticsearchInstanceTypeLimitsRequest &request)
{
    return qobject_cast<DescribeElasticsearchInstanceTypeLimitsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DescribeInboundCrossClusterSearchConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the inbound cross-cluster search connections for a destination
 */
DescribeInboundCrossClusterSearchConnectionsResponse * ElasticsearchClient::describeInboundCrossClusterSearchConnections(const DescribeInboundCrossClusterSearchConnectionsRequest &request)
{
    return qobject_cast<DescribeInboundCrossClusterSearchConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DescribeOutboundCrossClusterSearchConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the outbound cross-cluster search connections for a source
 */
DescribeOutboundCrossClusterSearchConnectionsResponse * ElasticsearchClient::describeOutboundCrossClusterSearchConnections(const DescribeOutboundCrossClusterSearchConnectionsRequest &request)
{
    return qobject_cast<DescribeOutboundCrossClusterSearchConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DescribePackagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes all packages available to Amazon ES. Includes options for filtering, limiting the number of results, and
 */
DescribePackagesResponse * ElasticsearchClient::describePackages(const DescribePackagesRequest &request)
{
    return qobject_cast<DescribePackagesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DescribeReservedElasticsearchInstanceOfferingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists available reserved Elasticsearch instance
 */
DescribeReservedElasticsearchInstanceOfferingsResponse * ElasticsearchClient::describeReservedElasticsearchInstanceOfferings(const DescribeReservedElasticsearchInstanceOfferingsRequest &request)
{
    return qobject_cast<DescribeReservedElasticsearchInstanceOfferingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DescribeReservedElasticsearchInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about reserved Elasticsearch instances for this
 */
DescribeReservedElasticsearchInstancesResponse * ElasticsearchClient::describeReservedElasticsearchInstances(const DescribeReservedElasticsearchInstancesRequest &request)
{
    return qobject_cast<DescribeReservedElasticsearchInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * DissociatePackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Dissociates a package from the Amazon ES
 */
DissociatePackageResponse * ElasticsearchClient::dissociatePackage(const DissociatePackageRequest &request)
{
    return qobject_cast<DissociatePackageResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * GetCompatibleElasticsearchVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of upgrade compatible Elastisearch versions. You can optionally pass a <code> <a>DomainName</a> </code>
 * to get all upgrade compatible Elasticsearch versions for that specific domain.
 */
GetCompatibleElasticsearchVersionsResponse * ElasticsearchClient::getCompatibleElasticsearchVersions(const GetCompatibleElasticsearchVersionsRequest &request)
{
    return qobject_cast<GetCompatibleElasticsearchVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * GetPackageVersionHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of versions of the package, along with their creation time and commit
 */
GetPackageVersionHistoryResponse * ElasticsearchClient::getPackageVersionHistory(const GetPackageVersionHistoryRequest &request)
{
    return qobject_cast<GetPackageVersionHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * GetUpgradeHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the complete history of the last 10 upgrades that were performed on the
 */
GetUpgradeHistoryResponse * ElasticsearchClient::getUpgradeHistory(const GetUpgradeHistoryRequest &request)
{
    return qobject_cast<GetUpgradeHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * GetUpgradeStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the latest status of the last upgrade or upgrade eligibility check that was performed on the
 */
GetUpgradeStatusResponse * ElasticsearchClient::getUpgradeStatus(const GetUpgradeStatusRequest &request)
{
    return qobject_cast<GetUpgradeStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * ListDomainNamesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the name of all Elasticsearch domains owned by the current user's account.
 */
ListDomainNamesResponse * ElasticsearchClient::listDomainNames(const ListDomainNamesRequest &request)
{
    return qobject_cast<ListDomainNamesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * ListDomainsForPackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Amazon ES domains associated with the
 */
ListDomainsForPackageResponse * ElasticsearchClient::listDomainsForPackage(const ListDomainsForPackageRequest &request)
{
    return qobject_cast<ListDomainsForPackageResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * ListElasticsearchInstanceTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all Elasticsearch instance types that are supported for given
 */
ListElasticsearchInstanceTypesResponse * ElasticsearchClient::listElasticsearchInstanceTypes(const ListElasticsearchInstanceTypesRequest &request)
{
    return qobject_cast<ListElasticsearchInstanceTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * ListElasticsearchVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all supported Elasticsearch
 */
ListElasticsearchVersionsResponse * ElasticsearchClient::listElasticsearchVersions(const ListElasticsearchVersionsRequest &request)
{
    return qobject_cast<ListElasticsearchVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * ListPackagesForDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all packages associated with the Amazon ES
 */
ListPackagesForDomainResponse * ElasticsearchClient::listPackagesForDomain(const ListPackagesForDomainRequest &request)
{
    return qobject_cast<ListPackagesForDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * ListTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all tags for the given Elasticsearch
 */
ListTagsResponse * ElasticsearchClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * PurchaseReservedElasticsearchInstanceOfferingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to purchase reserved Elasticsearch
 */
PurchaseReservedElasticsearchInstanceOfferingResponse * ElasticsearchClient::purchaseReservedElasticsearchInstanceOffering(const PurchaseReservedElasticsearchInstanceOfferingRequest &request)
{
    return qobject_cast<PurchaseReservedElasticsearchInstanceOfferingResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * RejectInboundCrossClusterSearchConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows the destination domain owner to reject an inbound cross-cluster search connection
 */
RejectInboundCrossClusterSearchConnectionResponse * ElasticsearchClient::rejectInboundCrossClusterSearchConnection(const RejectInboundCrossClusterSearchConnectionRequest &request)
{
    return qobject_cast<RejectInboundCrossClusterSearchConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * RemoveTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified set of tags from the specified Elasticsearch
 */
RemoveTagsResponse * ElasticsearchClient::removeTags(const RemoveTagsRequest &request)
{
    return qobject_cast<RemoveTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * StartElasticsearchServiceSoftwareUpdateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Schedules a service software update for an Amazon ES
 */
StartElasticsearchServiceSoftwareUpdateResponse * ElasticsearchClient::startElasticsearchServiceSoftwareUpdate(const StartElasticsearchServiceSoftwareUpdateRequest &request)
{
    return qobject_cast<StartElasticsearchServiceSoftwareUpdateResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * UpdateElasticsearchDomainConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the cluster configuration of the specified Elasticsearch domain, setting as setting the instance type and the
 * number of instances.
 */
UpdateElasticsearchDomainConfigResponse * ElasticsearchClient::updateElasticsearchDomainConfig(const UpdateElasticsearchDomainConfigRequest &request)
{
    return qobject_cast<UpdateElasticsearchDomainConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * UpdatePackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a package for use with Amazon ES
 */
UpdatePackageResponse * ElasticsearchClient::updatePackage(const UpdatePackageRequest &request)
{
    return qobject_cast<UpdatePackageResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticsearchClient service, and returns a pointer to an
 * UpgradeElasticsearchDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to either upgrade your domain or perform an Upgrade eligibility check to a compatible Elasticsearch
 */
UpgradeElasticsearchDomainResponse * ElasticsearchClient::upgradeElasticsearchDomain(const UpgradeElasticsearchDomainRequest &request)
{
    return qobject_cast<UpgradeElasticsearchDomainResponse *>(send(request));
}

/*!
 * \class QtAws::Elasticsearch::ElasticsearchClientPrivate
 * \brief The ElasticsearchClientPrivate class provides private implementation for ElasticsearchClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a ElasticsearchClientPrivate object with public implementation \a q.
 */
ElasticsearchClientPrivate::ElasticsearchClientPrivate(ElasticsearchClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Elasticsearch
} // namespace QtAws
