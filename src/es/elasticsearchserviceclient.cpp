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

#include "elasticsearchserviceclient.h"
#include "elasticsearchserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "addtagsrequest.h"
#include "addtagsresponse.h"
#include "createelasticsearchdomainrequest.h"
#include "createelasticsearchdomainresponse.h"
#include "deleteelasticsearchdomainrequest.h"
#include "deleteelasticsearchdomainresponse.h"
#include "deleteelasticsearchserviceroleresponse.h"
#include "describeelasticsearchdomainrequest.h"
#include "describeelasticsearchdomainresponse.h"
#include "describeelasticsearchdomainconfigrequest.h"
#include "describeelasticsearchdomainconfigresponse.h"
#include "describeelasticsearchdomainsrequest.h"
#include "describeelasticsearchdomainsresponse.h"
#include "describeelasticsearchinstancetypelimitsrequest.h"
#include "describeelasticsearchinstancetypelimitsresponse.h"
#include "listdomainnamesresponse.h"
#include "listelasticsearchinstancetypesrequest.h"
#include "listelasticsearchinstancetypesresponse.h"
#include "listelasticsearchversionsrequest.h"
#include "listelasticsearchversionsresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "removetagsrequest.h"
#include "removetagsresponse.h"
#include "updateelasticsearchdomainconfigrequest.h"
#include "updateelasticsearchdomainconfigresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ElasticsearchService
 * \brief The QtAws::ElasticsearchService contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ElasticsearchService {

/*!
 * \class QtAws::ElasticsearchService::ElasticsearchServiceClient
 *
 * \brief The ElasticsearchServiceClient class provides access to the Amazon Elasticsearch Service service.
 *
 * \ingroup ElasticsearchService
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 */

/*!
 * \brief Constructs a ElasticsearchServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ElasticsearchServiceClient::ElasticsearchServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ElasticsearchServiceClientPrivate(this), parent)
{
    Q_D(ElasticsearchServiceClient);
    d->apiVersion = QStringLiteral("2015-01-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("es");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Elasticsearch Service");
    d->serviceName = QStringLiteral("es");
}

/*!
 * \overload ElasticsearchServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
ElasticsearchServiceClient::ElasticsearchServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ElasticsearchServiceClientPrivate(this), parent)
{
    Q_D(ElasticsearchServiceClient);
    d->apiVersion = QStringLiteral("2015-01-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("es");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Elasticsearch Service");
    d->serviceName = QStringLiteral("es");
}

/*!
 * Attaches tags to an existing Elasticsearch domain. Tags are a set of case-sensitive key value pairs. An Elasticsearch
 * domain may have up to 10 tags. See <a
 * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-awsresorcetagging"
 * target="_blank"> Tagging Amazon Elasticsearch Service Domains for more
 *
 * @param  request Request to send to Amazon Elasticsearch Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddTagsResponse * ElasticsearchServiceClient::addTags(const AddTagsRequest &request)
{
    return qobject_cast<AddTagsResponse *>(send(request));
}

/*!
 * Creates a new Elasticsearch domain. For more information, see <a
 * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
 * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon Elasticsearch Service Developer
 *
 * @param  request Request to send to Amazon Elasticsearch Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateElasticsearchDomainResponse * ElasticsearchServiceClient::createElasticsearchDomain(const CreateElasticsearchDomainRequest &request)
{
    return qobject_cast<CreateElasticsearchDomainResponse *>(send(request));
}

/*!
 * Permanently deletes the specified Elasticsearch domain and all of its data. Once a domain is deleted, it cannot be
 *
 * @param  request Request to send to Amazon Elasticsearch Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteElasticsearchDomainResponse * ElasticsearchServiceClient::deleteElasticsearchDomain(const DeleteElasticsearchDomainRequest &request)
{
    return qobject_cast<DeleteElasticsearchDomainResponse *>(send(request));
}

/*!
 * Deletes the service-linked role that Elasticsearch Service uses to manage and maintain VPC domains. Role deletion will
 * fail if any existing VPC domains use the role. You must delete any such Elasticsearch domains before deleting the role.
 * See <a href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html#es-enabling-slr"
 * target="_blank">Deleting Elasticsearch Service Role</a> in <i>VPC Endpoints for Amazon Elasticsearch Service
 *
 * @param  request Request to send to Amazon Elasticsearch Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteElasticsearchServiceRoleResponse * ElasticsearchServiceClient::deleteElasticsearchServiceRole()
{
    return qobject_cast<DeleteElasticsearchServiceRoleResponse *>(send(request));
}

/*!
 * Returns domain configuration information about the specified Elasticsearch domain, including the domain ID, domain
 * endpoint, and domain
 *
 * @param  request Request to send to Amazon Elasticsearch Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeElasticsearchDomainResponse * ElasticsearchServiceClient::describeElasticsearchDomain(const DescribeElasticsearchDomainRequest &request)
{
    return qobject_cast<DescribeElasticsearchDomainResponse *>(send(request));
}

/*!
 * Provides cluster configuration information about the specified Elasticsearch domain, such as the state, creation date,
 * update version, and update date for cluster
 *
 * @param  request Request to send to Amazon Elasticsearch Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeElasticsearchDomainConfigResponse * ElasticsearchServiceClient::describeElasticsearchDomainConfig(const DescribeElasticsearchDomainConfigRequest &request)
{
    return qobject_cast<DescribeElasticsearchDomainConfigResponse *>(send(request));
}

/*!
 * Returns domain configuration information about the specified Elasticsearch domains, including the domain ID, domain
 * endpoint, and domain
 *
 * @param  request Request to send to Amazon Elasticsearch Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeElasticsearchDomainsResponse * ElasticsearchServiceClient::describeElasticsearchDomains(const DescribeElasticsearchDomainsRequest &request)
{
    return qobject_cast<DescribeElasticsearchDomainsResponse *>(send(request));
}

/*!
 * Describe Elasticsearch Limits for a given InstanceType and ElasticsearchVersion. When modifying existing Domain, specify
 * the <code> <a>DomainName</a> </code> to know what Limits are supported for modifying.
 *
 * @param  request Request to send to Amazon Elasticsearch Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeElasticsearchInstanceTypeLimitsResponse * ElasticsearchServiceClient::describeElasticsearchInstanceTypeLimits(const DescribeElasticsearchInstanceTypeLimitsRequest &request)
{
    return qobject_cast<DescribeElasticsearchInstanceTypeLimitsResponse *>(send(request));
}

/*!
 * Returns the name of all Elasticsearch domains owned by the current user's account.
 *
 * @param  request Request to send to Amazon Elasticsearch Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDomainNamesResponse * ElasticsearchServiceClient::listDomainNames()
{
    return qobject_cast<ListDomainNamesResponse *>(send(request));
}

/*!
 * List all Elasticsearch instance types that are supported for given
 *
 * @param  request Request to send to Amazon Elasticsearch Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListElasticsearchInstanceTypesResponse * ElasticsearchServiceClient::listElasticsearchInstanceTypes(const ListElasticsearchInstanceTypesRequest &request)
{
    return qobject_cast<ListElasticsearchInstanceTypesResponse *>(send(request));
}

/*!
 * List all supported Elasticsearch
 *
 * @param  request Request to send to Amazon Elasticsearch Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListElasticsearchVersionsResponse * ElasticsearchServiceClient::listElasticsearchVersions(const ListElasticsearchVersionsRequest &request)
{
    return qobject_cast<ListElasticsearchVersionsResponse *>(send(request));
}

/*!
 * Returns all tags for the given Elasticsearch
 *
 * @param  request Request to send to Amazon Elasticsearch Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsResponse * ElasticsearchServiceClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Removes the specified set of tags from the specified Elasticsearch
 *
 * @param  request Request to send to Amazon Elasticsearch Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveTagsResponse * ElasticsearchServiceClient::removeTags(const RemoveTagsRequest &request)
{
    return qobject_cast<RemoveTagsResponse *>(send(request));
}

/*!
 * Modifies the cluster configuration of the specified Elasticsearch domain, setting as setting the instance type and the
 * number of instances.
 *
 * @param  request Request to send to Amazon Elasticsearch Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateElasticsearchDomainConfigResponse * ElasticsearchServiceClient::updateElasticsearchDomainConfig(const UpdateElasticsearchDomainConfigRequest &request)
{
    return qobject_cast<UpdateElasticsearchDomainConfigResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  ElasticsearchServiceClientPrivate
 *
 * @brief  Private implementation for ElasticsearchServiceClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ElasticsearchServiceClientPrivate object.
 *
 * @param  q  Pointer to this object's public ElasticsearchServiceClient instance.
 */
ElasticsearchServiceClientPrivate::ElasticsearchServiceClientPrivate(ElasticsearchServiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ElasticsearchService
} // namespace QtAws
