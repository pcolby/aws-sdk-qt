// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudsearchdomainclient.h"
#include "cloudsearchdomainclient_p.h"

#include "core/awssignaturev4.h"
#include "searchrequest.h"
#include "searchresponse.h"
#include "suggestrequest.h"
#include "suggestresponse.h"
#include "uploaddocumentsrequest.h"
#include "uploaddocumentsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudSearchDomain
 * \brief Contains classess for accessing Amazon CloudSearch Domain.
 *
 * \inmodule QtAwsCloudSearchDomain
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudSearchDomain {

/*!
 * \class QtAws::CloudSearchDomain::CloudSearchDomainClient
 * \brief The CloudSearchDomainClient class provides access to the Amazon CloudSearch Domain service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudSearchDomain
 *
 *  You use the AmazonCloudSearch2013 API to upload documents to a search domain and search those documents.
 * 
 *  </p
 * 
 *  The endpoints for submitting <code>UploadDocuments</code>, <code>Search</code>, and <code>Suggest</code> requests are
 *  domain-specific. To get the endpoints for your domain, use the Amazon CloudSearch configuration service
 *  <code>DescribeDomains</code> action. The domain endpoints are also displayed on the domain dashboard in the Amazon
 *  CloudSearch console. You submit suggest requests to the search endpoint.
 * 
 *  </p
 * 
 *  For more information, see the <a href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide">Amazon CloudSearch
 *  Developer
 */

/*!
 * \brief Constructs a CloudSearchDomainClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudSearchDomainClient::CloudSearchDomainClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudSearchDomainClientPrivate(this), parent)
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

/*!
 * \overload CloudSearchDomainClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CloudSearchDomainClient::CloudSearchDomainClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudSearchDomainClientPrivate(this), parent)
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

/*!
 * Sends \a request to the CloudSearchDomainClient service, and returns a pointer to an
 * SearchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
SearchResponse * CloudSearchDomainClient::search(const SearchRequest &request)
{
    return qobject_cast<SearchResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudSearchDomainClient service, and returns a pointer to an
 * SuggestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
SuggestResponse * CloudSearchDomainClient::suggest(const SuggestRequest &request)
{
    return qobject_cast<SuggestResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudSearchDomainClient service, and returns a pointer to an
 * UploadDocumentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
UploadDocumentsResponse * CloudSearchDomainClient::uploadDocuments(const UploadDocumentsRequest &request)
{
    return qobject_cast<UploadDocumentsResponse *>(send(request));
}

/*!
 * \class QtAws::CloudSearchDomain::CloudSearchDomainClientPrivate
 * \brief The CloudSearchDomainClientPrivate class provides private implementation for CloudSearchDomainClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudSearchDomain
 */

/*!
 * Constructs a CloudSearchDomainClientPrivate object with public implementation \a q.
 */
CloudSearchDomainClientPrivate::CloudSearchDomainClientPrivate(CloudSearchDomainClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudSearchDomain
} // namespace QtAws
