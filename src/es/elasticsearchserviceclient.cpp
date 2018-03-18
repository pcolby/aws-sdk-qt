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

#include "elasticsearchserviceclient.h"
#include "elasticsearchserviceclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ElasticsearchService {

/**
 * @class  ElasticsearchServiceClient
 *
 * @brief  Client for Amazon Elasticsearch Service
 *
 * <fullname>Amazon Elasticsearch Configuration Service</fullname>
 *
 * Use the Amazon Elasticsearch configuration API to create, configure, and manage Elasticsearch
 *
 * domains>
 *
 * The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 * es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 */

/**
 * @brief  Constructs a new ElasticsearchServiceClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ElasticsearchServiceClient::ElasticsearchServiceClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElasticsearchServiceClientPrivate(this), parent)
{
    Q_D(ElasticsearchServiceClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new ElasticsearchServiceClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
ElasticsearchServiceClient::ElasticsearchServiceClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElasticsearchServiceClientPrivate(this), parent)
{
    Q_D(ElasticsearchServiceClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Attaches tags to an existing Elasticsearch domain. Tags are a set of case-sensitive key value pairs. An Elasticsearch
 * domain may have up to 10 tags. See <a
 * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-awsresorcetagging"
 * target="_blank"> Tagging Amazon Elasticsearch Service Domains for more
 */
AddTagsResponse * ElasticsearchServiceClient::addTags(const AddTagsRequest &request)
{

}

/**
 * Creates a new Elasticsearch domain. For more information, see <a
 * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
 * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon Elasticsearch Service Developer
 */
CreateElasticsearchDomainResponse * ElasticsearchServiceClient::createElasticsearchDomain(const CreateElasticsearchDomainRequest &request)
{

}

/**
 * Permanently deletes the specified Elasticsearch domain and all of its data. Once a domain is deleted, it cannot be
 */
DeleteElasticsearchDomainResponse * ElasticsearchServiceClient::deleteElasticsearchDomain(const DeleteElasticsearchDomainRequest &request)
{

}

/**
 * Deletes the service-linked role that Elasticsearch Service uses to manage and maintain VPC domains. Role deletion will
 * fail if any existing VPC domains use the role. You must delete any such Elasticsearch domains before deleting the role.
 * See <a href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html#es-enabling-slr"
 * target="_blank">Deleting Elasticsearch Service Role</a> in <i>VPC Endpoints for Amazon Elasticsearch Service
 */
DeleteElasticsearchServiceRoleResponse * ElasticsearchServiceClient::deleteElasticsearchServiceRole()
{

}

/**
 * Returns domain configuration information about the specified Elasticsearch domain, including the domain ID, domain
 * endpoint, and domain
 */
DescribeElasticsearchDomainResponse * ElasticsearchServiceClient::describeElasticsearchDomain(const DescribeElasticsearchDomainRequest &request)
{

}

/**
 * Provides cluster configuration information about the specified Elasticsearch domain, such as the state, creation date,
 * update version, and update date for cluster
 */
DescribeElasticsearchDomainConfigResponse * ElasticsearchServiceClient::describeElasticsearchDomainConfig(const DescribeElasticsearchDomainConfigRequest &request)
{

}

/**
 * Returns domain configuration information about the specified Elasticsearch domains, including the domain ID, domain
 * endpoint, and domain
 */
DescribeElasticsearchDomainsResponse * ElasticsearchServiceClient::describeElasticsearchDomains(const DescribeElasticsearchDomainsRequest &request)
{

}

/**
 * Describe Elasticsearch Limits for a given InstanceType and ElasticsearchVersion. When modifying existing Domain, specify
 * the <code> <a>DomainName</a> </code> to know what Limits are supported for modifying.
 */
DescribeElasticsearchInstanceTypeLimitsResponse * ElasticsearchServiceClient::describeElasticsearchInstanceTypeLimits(const DescribeElasticsearchInstanceTypeLimitsRequest &request)
{

}

/**
 * Returns the name of all Elasticsearch domains owned by the current user's account.
 */
ListDomainNamesResponse * ElasticsearchServiceClient::listDomainNames()
{

}

/**
 * List all Elasticsearch instance types that are supported for given
 */
ListElasticsearchInstanceTypesResponse * ElasticsearchServiceClient::listElasticsearchInstanceTypes(const ListElasticsearchInstanceTypesRequest &request)
{

}

/**
 * List all supported Elasticsearch
 */
ListElasticsearchVersionsResponse * ElasticsearchServiceClient::listElasticsearchVersions(const ListElasticsearchVersionsRequest &request)
{

}

/**
 * Returns all tags for the given Elasticsearch
 */
ListTagsResponse * ElasticsearchServiceClient::listTags(const ListTagsRequest &request)
{

}

/**
 * Removes the specified set of tags from the specified Elasticsearch
 */
RemoveTagsResponse * ElasticsearchServiceClient::removeTags(const RemoveTagsRequest &request)
{

}

/**
 * Modifies the cluster configuration of the specified Elasticsearch domain, setting as setting the instance type and the
 * number of instances.
 */
UpdateElasticsearchDomainConfigResponse * ElasticsearchServiceClient::updateElasticsearchDomainConfig(const UpdateElasticsearchDomainConfigRequest &request)
{

}

/**
 * @internal
 *
 * @class  ElasticsearchServiceClientPrivate
 *
 * @brief  Private implementation for ElasticsearchServiceClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElasticsearchServiceClientPrivate object.
 *
 * @param  q  Pointer to this object's public ElasticsearchServiceClient instance.
 */
ElasticsearchServiceClientPrivate::ElasticsearchServiceClientPrivate(ElasticsearchServiceClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ElasticsearchService
} // namespace AWS
