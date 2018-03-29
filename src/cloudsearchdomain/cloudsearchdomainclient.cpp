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

#include "cloudsearchdomainclient.h"
#include "cloudsearchdomainclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CloudSearchDomain {

/**
 * @class  CloudSearchDomainClient
 *
 * @brief  Client for Amazon CloudSearch Domain
 *
 * You use the AmazonCloudSearch2013 API to upload documents to a search domain and search those documents.
 *
 * </p
 *
 * The endpoints for submitting <code>UploadDocuments</code>, <code>Search</code>, and <code>Suggest</code> requests are
 * domain-specific. To get the endpoints for your domain, use the Amazon CloudSearch configuration service
 * <code>DescribeDomains</code> action. The domain endpoints are also displayed on the domain dashboard in the Amazon
 * CloudSearch console. You submit suggest requests to the search endpoint.
 *
 * </p
 *
 * For more information, see the <a href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide">Amazon CloudSearch
 * Developer
 */

/**
 * @brief  Constructs a new CloudSearchDomainClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CloudSearchDomainClient::CloudSearchDomainClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudSearchDomainClientPrivate(this), parent)
{
    Q_D(CloudSearchDomainClient);
    d->apiVersion = QStringLiteral("2013-01-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cloudsearchdomain");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon CloudSearch Domain");
    d->serviceName = QStringLiteral("cloudsearch");
}

/**
 * @brief  Constructs a new CloudSearchDomainClient object.
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
CloudSearchDomainClient::CloudSearchDomainClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudSearchDomainClientPrivate(this), parent)
{
    Q_D(CloudSearchDomainClient);
    d->apiVersion = QStringLiteral("2013-01-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cloudsearchdomain");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon CloudSearch Domain");
    d->serviceName = QStringLiteral("cloudsearch");
}

/**
 * Retrieves a list of documents that match the specified search criteria. How you specify the search criteria depends on
 * which query parser you use. Amazon CloudSearch supports four query
 *
 * parsers> <ul> <li><code>simple</code>: search all <code>text</code> and <code>text-array</code> fields for the specified
 * string. Search for phrases, individual terms, and prefixes. </li> <li><code>structured</code>: search specific fields,
 * construct compound queries using Boolean operators, and use advanced features such as term boosting and proximity
 * searching.</li> <li><code>lucene</code>: specify search criteria using the Apache Lucene query parser syntax.</li>
 * <li><code>dismax</code>: specify search criteria using the simplified subset of the Apache Lucene query parser syntax
 * defined by the DisMax query parser.</li> </ul>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/searching.html">Searching Your Data</a> in the
 * <i>Amazon CloudSearch Developer
 *
 * Guide</i>>
 *
 * The endpoint for submitting <code>Search</code> requests is domain-specific. You submit search requests to a domain's
 * search endpoint. To get the search endpoint for your domain, use the Amazon CloudSearch configuration service
 * <code>DescribeDomains</code> action. A domain's endpoints are also displayed on the domain dashboard in the Amazon
 * CloudSearch console.
 *
 * @param  request Request to send to Amazon CloudSearch Domain.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchResponse * CloudSearchDomainClient::search(const SearchRequest &request)
{
    return qobject_cast<SearchResponse *>(send(request));
}

/**
 * Retrieves autocomplete suggestions for a partial query string. You can use suggestions enable you to display likely
 * matches before users finish typing. In Amazon CloudSearch, suggestions are based on the contents of a particular text
 * field. When you request suggestions, Amazon CloudSearch finds all of the documents whose values in the suggester field
 * start with the specified query string. The beginning of the field must match the query string to be considered a match.
 *
 * </p
 *
 * For more information about configuring suggesters and retrieving suggestions, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html">Getting Suggestions</a> in
 * the <i>Amazon CloudSearch Developer Guide</i>.
 *
 * </p
 *
 * The endpoint for submitting <code>Suggest</code> requests is domain-specific. You submit suggest requests to a domain's
 * search endpoint. To get the search endpoint for your domain, use the Amazon CloudSearch configuration service
 * <code>DescribeDomains</code> action. A domain's endpoints are also displayed on the domain dashboard in the Amazon
 * CloudSearch console.
 *
 * @param  request Request to send to Amazon CloudSearch Domain.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SuggestResponse * CloudSearchDomainClient::suggest(const SuggestRequest &request)
{
    return qobject_cast<SuggestResponse *>(send(request));
}

/**
 * Posts a batch of documents to a search domain for indexing. A document batch is a collection of add and delete
 * operations that represent the documents you want to add, update, or delete from your domain. Batches can be described in
 * either JSON or XML. Each item that you want Amazon CloudSearch to return as a search result (such as a product) is
 * represented as a document. Every document has a unique ID and one or more fields that contain the data that you want to
 * search and return in results. Individual documents cannot contain more than 1 MB of data. The entire batch cannot exceed
 * 5 MB. To get the best possible upload performance, group add and delete operations in batches that are close the 5 MB
 * limit. Submitting a large volume of single-document batches can overload a domain's document service.
 *
 * </p
 *
 * The endpoint for submitting <code>UploadDocuments</code> requests is domain-specific. To get the document endpoint for
 * your domain, use the Amazon CloudSearch configuration service <code>DescribeDomains</code> action. A domain's endpoints
 * are also displayed on the domain dashboard in the Amazon CloudSearch console.
 *
 * </p
 *
 * For more information about formatting your data for Amazon CloudSearch, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/preparing-data.html">Preparing Your Data</a> in the
 * <i>Amazon CloudSearch Developer Guide</i>. For more information about uploading data for indexing, see <a
 * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/uploading-data.html">Uploading Data</a> in the
 * <i>Amazon CloudSearch Developer Guide</i>.
 *
 * @param  request Request to send to Amazon CloudSearch Domain.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UploadDocumentsResponse * CloudSearchDomainClient::uploadDocuments(const UploadDocumentsRequest &request)
{
    return qobject_cast<UploadDocumentsResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  CloudSearchDomainClientPrivate
 *
 * @brief  Private implementation for CloudSearchDomainClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudSearchDomainClientPrivate object.
 *
 * @param  q  Pointer to this object's public CloudSearchDomainClient instance.
 */
CloudSearchDomainClientPrivate::CloudSearchDomainClientPrivate(CloudSearchDomainClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CloudSearchDomain
} // namespace AWS
