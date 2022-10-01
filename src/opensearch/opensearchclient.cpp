// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "opensearchclient.h"
#include "opensearchclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptinboundconnectionrequest.h"
#include "acceptinboundconnectionresponse.h"
#include "addtagsrequest.h"
#include "addtagsresponse.h"
#include "associatepackagerequest.h"
#include "associatepackageresponse.h"
#include "cancelservicesoftwareupdaterequest.h"
#include "cancelservicesoftwareupdateresponse.h"
#include "createdomainrequest.h"
#include "createdomainresponse.h"
#include "createoutboundconnectionrequest.h"
#include "createoutboundconnectionresponse.h"
#include "createpackagerequest.h"
#include "createpackageresponse.h"
#include "deletedomainrequest.h"
#include "deletedomainresponse.h"
#include "deleteinboundconnectionrequest.h"
#include "deleteinboundconnectionresponse.h"
#include "deleteoutboundconnectionrequest.h"
#include "deleteoutboundconnectionresponse.h"
#include "deletepackagerequest.h"
#include "deletepackageresponse.h"
#include "describedomainrequest.h"
#include "describedomainresponse.h"
#include "describedomainautotunesrequest.h"
#include "describedomainautotunesresponse.h"
#include "describedomainchangeprogressrequest.h"
#include "describedomainchangeprogressresponse.h"
#include "describedomainconfigrequest.h"
#include "describedomainconfigresponse.h"
#include "describedomainsrequest.h"
#include "describedomainsresponse.h"
#include "describeinboundconnectionsrequest.h"
#include "describeinboundconnectionsresponse.h"
#include "describeinstancetypelimitsrequest.h"
#include "describeinstancetypelimitsresponse.h"
#include "describeoutboundconnectionsrequest.h"
#include "describeoutboundconnectionsresponse.h"
#include "describepackagesrequest.h"
#include "describepackagesresponse.h"
#include "describereservedinstanceofferingsrequest.h"
#include "describereservedinstanceofferingsresponse.h"
#include "describereservedinstancesrequest.h"
#include "describereservedinstancesresponse.h"
#include "dissociatepackagerequest.h"
#include "dissociatepackageresponse.h"
#include "getcompatibleversionsrequest.h"
#include "getcompatibleversionsresponse.h"
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
#include "listinstancetypedetailsrequest.h"
#include "listinstancetypedetailsresponse.h"
#include "listpackagesfordomainrequest.h"
#include "listpackagesfordomainresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "listversionsrequest.h"
#include "listversionsresponse.h"
#include "purchasereservedinstanceofferingrequest.h"
#include "purchasereservedinstanceofferingresponse.h"
#include "rejectinboundconnectionrequest.h"
#include "rejectinboundconnectionresponse.h"
#include "removetagsrequest.h"
#include "removetagsresponse.h"
#include "startservicesoftwareupdaterequest.h"
#include "startservicesoftwareupdateresponse.h"
#include "updatedomainconfigrequest.h"
#include "updatedomainconfigresponse.h"
#include "updatepackagerequest.h"
#include "updatepackageresponse.h"
#include "upgradedomainrequest.h"
#include "upgradedomainresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::OpenSearch
 * \brief Contains classess for accessing Amazon OpenSearch Service.
 *
 * \inmodule QtAwsOpenSearch
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::OpenSearchClient
 * \brief The OpenSearchClient class provides access to the Amazon OpenSearch Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsOpenSearch
 *
 *  <fullname>Amazon OpenSearch Configuration Service</fullname>
 * 
 *  Use the Amazon OpenSearch configuration API to create, configure, and manage Amazon OpenSearch Service
 * 
 *  domains>
 * 
 *  For sample code that uses the configuration API, see the <a
 *  href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/opensearch-configuration-samples.html">
 *  Amazon OpenSearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/request-signing.html"> sample code for
 *  sending signed HTTP requests to the OpenSearch APIs</a>.
 * 
 *  </p
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#service-regions" target="_blank">Regions and
 *  Endpoints</a>.
 */

/*!
 * \brief Constructs a OpenSearchClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
OpenSearchClient::OpenSearchClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new OpenSearchClientPrivate(this), parent)
{
    Q_D(OpenSearchClient);
    d->apiVersion = QStringLiteral("2021-01-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("es");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon OpenSearch Service");
    d->serviceName = QStringLiteral("es");
}

/*!
 * \overload OpenSearchClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
OpenSearchClient::OpenSearchClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new OpenSearchClientPrivate(this), parent)
{
    Q_D(OpenSearchClient);
    d->apiVersion = QStringLiteral("2021-01-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("es");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon OpenSearch Service");
    d->serviceName = QStringLiteral("es");
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * AcceptInboundConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows the remote domain owner to accept an inbound cross-cluster connection
 */
AcceptInboundConnectionResponse * OpenSearchClient::acceptInboundConnection(const AcceptInboundConnectionRequest &request)
{
    return qobject_cast<AcceptInboundConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * AddTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches tags to an existing domain. Tags are a set of case-sensitive key value pairs. An domain can have up to 10 tags.
 * See <a
 * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains.html#managedomains-awsresorcetagging"
 * target="_blank"> Tagging Amazon OpenSearch Service domains</a> for more information.
 */
AddTagsResponse * OpenSearchClient::addTags(const AddTagsRequest &request)
{
    return qobject_cast<AddTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * AssociatePackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a package with an Amazon OpenSearch Service
 */
AssociatePackageResponse * OpenSearchClient::associatePackage(const AssociatePackageRequest &request)
{
    return qobject_cast<AssociatePackageResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * CancelServiceSoftwareUpdateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a scheduled service software update for an Amazon OpenSearch Service domain. You can only perform this operation
 * before the <code>AutomatedUpdateDate</code> and when the <code>UpdateStatus</code> is in the <code>PENDING_UPDATE</code>
 * state.
 */
CancelServiceSoftwareUpdateResponse * OpenSearchClient::cancelServiceSoftwareUpdate(const CancelServiceSoftwareUpdateRequest &request)
{
    return qobject_cast<CancelServiceSoftwareUpdateResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * CreateDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon OpenSearch Service domain. For more information, see <a
 * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html"
 * target="_blank">Creating and managing Amazon OpenSearch Service domains </a> in the <i>Amazon OpenSearch Service
 * Developer Guide</i>.
 */
CreateDomainResponse * OpenSearchClient::createDomain(const CreateDomainRequest &request)
{
    return qobject_cast<CreateDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * CreateOutboundConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new cross-cluster connection from a local OpenSearch domain to a remote OpenSearch
 */
CreateOutboundConnectionResponse * OpenSearchClient::createOutboundConnection(const CreateOutboundConnectionRequest &request)
{
    return qobject_cast<CreateOutboundConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * CreatePackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a package for use with Amazon OpenSearch Service
 */
CreatePackageResponse * OpenSearchClient::createPackage(const CreatePackageRequest &request)
{
    return qobject_cast<CreatePackageResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DeleteDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently deletes the specified domain and all of its data. Once a domain is deleted, it cannot be recovered.
 */
DeleteDomainResponse * OpenSearchClient::deleteDomain(const DeleteDomainRequest &request)
{
    return qobject_cast<DeleteDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DeleteInboundConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows the remote domain owner to delete an existing inbound cross-cluster
 */
DeleteInboundConnectionResponse * OpenSearchClient::deleteInboundConnection(const DeleteInboundConnectionRequest &request)
{
    return qobject_cast<DeleteInboundConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DeleteOutboundConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows the local domain owner to delete an existing outbound cross-cluster
 */
DeleteOutboundConnectionResponse * OpenSearchClient::deleteOutboundConnection(const DeleteOutboundConnectionRequest &request)
{
    return qobject_cast<DeleteOutboundConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DeletePackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the
 */
DeletePackageResponse * OpenSearchClient::deletePackage(const DeletePackageRequest &request)
{
    return qobject_cast<DeletePackageResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DescribeDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns domain configuration information about the specified domain, including the domain ID, domain endpoint, and
 * domain ARN.
 */
DescribeDomainResponse * OpenSearchClient::describeDomain(const DescribeDomainRequest &request)
{
    return qobject_cast<DescribeDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DescribeDomainAutoTunesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides scheduled Auto-Tune action details for the domain, such as Auto-Tune action type, description, severity, and
 * scheduled date.
 */
DescribeDomainAutoTunesResponse * OpenSearchClient::describeDomainAutoTunes(const DescribeDomainAutoTunesRequest &request)
{
    return qobject_cast<DescribeDomainAutoTunesResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DescribeDomainChangeProgressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the current blue/green deployment happening on a domain, including a change ID, status, and
 * progress
 */
DescribeDomainChangeProgressResponse * OpenSearchClient::describeDomainChangeProgress(const DescribeDomainChangeProgressRequest &request)
{
    return qobject_cast<DescribeDomainChangeProgressResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DescribeDomainConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides cluster configuration information about the specified domain, such as the state, creation date, update version,
 * and update date for cluster options.
 */
DescribeDomainConfigResponse * OpenSearchClient::describeDomainConfig(const DescribeDomainConfigRequest &request)
{
    return qobject_cast<DescribeDomainConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DescribeDomainsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns domain configuration information about the specified domains, including the domain ID, domain endpoint, and
 * domain ARN.
 */
DescribeDomainsResponse * OpenSearchClient::describeDomains(const DescribeDomainsRequest &request)
{
    return qobject_cast<DescribeDomainsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DescribeInboundConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the inbound cross-cluster connections for a remote
 */
DescribeInboundConnectionsResponse * OpenSearchClient::describeInboundConnections(const DescribeInboundConnectionsRequest &request)
{
    return qobject_cast<DescribeInboundConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DescribeInstanceTypeLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe the limits for a given instance type and OpenSearch or Elasticsearch version. When modifying an existing
 * domain, specify the <code> <a>DomainName</a> </code> to see which limits you can modify.
 */
DescribeInstanceTypeLimitsResponse * OpenSearchClient::describeInstanceTypeLimits(const DescribeInstanceTypeLimitsRequest &request)
{
    return qobject_cast<DescribeInstanceTypeLimitsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DescribeOutboundConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the outbound cross-cluster connections for a local
 */
DescribeOutboundConnectionsResponse * OpenSearchClient::describeOutboundConnections(const DescribeOutboundConnectionsRequest &request)
{
    return qobject_cast<DescribeOutboundConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DescribePackagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes all packages available to Amazon OpenSearch Service domains. Includes options for filtering, limiting the
 * number of results, and pagination.
 */
DescribePackagesResponse * OpenSearchClient::describePackages(const DescribePackagesRequest &request)
{
    return qobject_cast<DescribePackagesResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DescribeReservedInstanceOfferingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists available reserved OpenSearch instance
 */
DescribeReservedInstanceOfferingsResponse * OpenSearchClient::describeReservedInstanceOfferings(const DescribeReservedInstanceOfferingsRequest &request)
{
    return qobject_cast<DescribeReservedInstanceOfferingsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DescribeReservedInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about reserved OpenSearch instances for this
 */
DescribeReservedInstancesResponse * OpenSearchClient::describeReservedInstances(const DescribeReservedInstancesRequest &request)
{
    return qobject_cast<DescribeReservedInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * DissociatePackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Dissociates a package from the Amazon OpenSearch Service
 */
DissociatePackageResponse * OpenSearchClient::dissociatePackage(const DissociatePackageRequest &request)
{
    return qobject_cast<DissociatePackageResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * GetCompatibleVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of upgrade-compatible versions of OpenSearch/Elasticsearch. You can optionally pass a <code>
 * <a>DomainName</a> </code> to get all upgrade-compatible versions of OpenSearch/Elasticsearch for that specific domain.
 */
GetCompatibleVersionsResponse * OpenSearchClient::getCompatibleVersions(const GetCompatibleVersionsRequest &request)
{
    return qobject_cast<GetCompatibleVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * GetPackageVersionHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of package versions, along with their creation time and commit
 */
GetPackageVersionHistoryResponse * OpenSearchClient::getPackageVersionHistory(const GetPackageVersionHistoryRequest &request)
{
    return qobject_cast<GetPackageVersionHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * GetUpgradeHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the complete history of the last 10 upgrades performed on the
 */
GetUpgradeHistoryResponse * OpenSearchClient::getUpgradeHistory(const GetUpgradeHistoryRequest &request)
{
    return qobject_cast<GetUpgradeHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * GetUpgradeStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the latest status of the last upgrade or upgrade eligibility check performed on the domain.
 */
GetUpgradeStatusResponse * OpenSearchClient::getUpgradeStatus(const GetUpgradeStatusRequest &request)
{
    return qobject_cast<GetUpgradeStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * ListDomainNamesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the names of all domains owned by the current user's
 */
ListDomainNamesResponse * OpenSearchClient::listDomainNames(const ListDomainNamesRequest &request)
{
    return qobject_cast<ListDomainNamesResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * ListDomainsForPackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Amazon OpenSearch Service domains associated with the
 */
ListDomainsForPackageResponse * OpenSearchClient::listDomainsForPackage(const ListDomainsForPackageRequest &request)
{
    return qobject_cast<ListDomainsForPackageResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * ListInstanceTypeDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListInstanceTypeDetailsResponse * OpenSearchClient::listInstanceTypeDetails(const ListInstanceTypeDetailsRequest &request)
{
    return qobject_cast<ListInstanceTypeDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * ListPackagesForDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all packages associated with the Amazon OpenSearch Service
 */
ListPackagesForDomainResponse * OpenSearchClient::listPackagesForDomain(const ListPackagesForDomainRequest &request)
{
    return qobject_cast<ListPackagesForDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * ListTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all tags for the given
 */
ListTagsResponse * OpenSearchClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * ListVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all supported versions of OpenSearch and
 */
ListVersionsResponse * OpenSearchClient::listVersions(const ListVersionsRequest &request)
{
    return qobject_cast<ListVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * PurchaseReservedInstanceOfferingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to purchase reserved OpenSearch
 */
PurchaseReservedInstanceOfferingResponse * OpenSearchClient::purchaseReservedInstanceOffering(const PurchaseReservedInstanceOfferingRequest &request)
{
    return qobject_cast<PurchaseReservedInstanceOfferingResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * RejectInboundConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows the remote domain owner to reject an inbound cross-cluster connection
 */
RejectInboundConnectionResponse * OpenSearchClient::rejectInboundConnection(const RejectInboundConnectionRequest &request)
{
    return qobject_cast<RejectInboundConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * RemoveTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified set of tags from the given
 */
RemoveTagsResponse * OpenSearchClient::removeTags(const RemoveTagsRequest &request)
{
    return qobject_cast<RemoveTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * StartServiceSoftwareUpdateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Schedules a service software update for an Amazon OpenSearch Service
 */
StartServiceSoftwareUpdateResponse * OpenSearchClient::startServiceSoftwareUpdate(const StartServiceSoftwareUpdateRequest &request)
{
    return qobject_cast<StartServiceSoftwareUpdateResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * UpdateDomainConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the cluster configuration of the specified domain, such as setting the instance type and the number of
 * instances.
 */
UpdateDomainConfigResponse * OpenSearchClient::updateDomainConfig(const UpdateDomainConfigRequest &request)
{
    return qobject_cast<UpdateDomainConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * UpdatePackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a package for use with Amazon OpenSearch Service
 */
UpdatePackageResponse * OpenSearchClient::updatePackage(const UpdatePackageRequest &request)
{
    return qobject_cast<UpdatePackageResponse *>(send(request));
}

/*!
 * Sends \a request to the OpenSearchClient service, and returns a pointer to an
 * UpgradeDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to either upgrade your domain or perform an upgrade eligibility check to a compatible version of OpenSearch
 * or Elasticsearch.
 */
UpgradeDomainResponse * OpenSearchClient::upgradeDomain(const UpgradeDomainRequest &request)
{
    return qobject_cast<UpgradeDomainResponse *>(send(request));
}

/*!
 * \class QtAws::OpenSearch::OpenSearchClientPrivate
 * \brief The OpenSearchClientPrivate class provides private implementation for OpenSearchClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a OpenSearchClientPrivate object with public implementation \a q.
 */
OpenSearchClientPrivate::OpenSearchClientPrivate(OpenSearchClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace OpenSearch
} // namespace QtAws
