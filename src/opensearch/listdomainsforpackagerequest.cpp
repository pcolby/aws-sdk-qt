// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomainsforpackagerequest.h"
#include "listdomainsforpackagerequest_p.h"
#include "listdomainsforpackageresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::ListDomainsForPackageRequest
 * \brief The ListDomainsForPackageRequest class provides an interface for OpenSearch ListDomainsForPackage requests.
 *
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
 *
 * \sa OpenSearchClient::listDomainsForPackage
 */

/*!
 * Constructs a copy of \a other.
 */
ListDomainsForPackageRequest::ListDomainsForPackageRequest(const ListDomainsForPackageRequest &other)
    : OpenSearchRequest(new ListDomainsForPackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDomainsForPackageRequest object.
 */
ListDomainsForPackageRequest::ListDomainsForPackageRequest()
    : OpenSearchRequest(new ListDomainsForPackageRequestPrivate(OpenSearchRequest::ListDomainsForPackageAction, this))
{

}

/*!
 * \reimp
 */
bool ListDomainsForPackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDomainsForPackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDomainsForPackageRequest::response(QNetworkReply * const reply) const
{
    return new ListDomainsForPackageResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::ListDomainsForPackageRequestPrivate
 * \brief The ListDomainsForPackageRequestPrivate class provides private implementation for ListDomainsForPackageRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a ListDomainsForPackageRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
ListDomainsForPackageRequestPrivate::ListDomainsForPackageRequestPrivate(
    const OpenSearchRequest::Action action, ListDomainsForPackageRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDomainsForPackageRequest
 * class' copy constructor.
 */
ListDomainsForPackageRequestPrivate::ListDomainsForPackageRequestPrivate(
    const ListDomainsForPackageRequestPrivate &other, ListDomainsForPackageRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
