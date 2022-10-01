// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpackagesfordomainrequest.h"
#include "listpackagesfordomainrequest_p.h"
#include "listpackagesfordomainresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::ListPackagesForDomainRequest
 * \brief The ListPackagesForDomainRequest class provides an interface for OpenSearch ListPackagesForDomain requests.
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
 * \sa OpenSearchClient::listPackagesForDomain
 */

/*!
 * Constructs a copy of \a other.
 */
ListPackagesForDomainRequest::ListPackagesForDomainRequest(const ListPackagesForDomainRequest &other)
    : OpenSearchRequest(new ListPackagesForDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPackagesForDomainRequest object.
 */
ListPackagesForDomainRequest::ListPackagesForDomainRequest()
    : OpenSearchRequest(new ListPackagesForDomainRequestPrivate(OpenSearchRequest::ListPackagesForDomainAction, this))
{

}

/*!
 * \reimp
 */
bool ListPackagesForDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPackagesForDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPackagesForDomainRequest::response(QNetworkReply * const reply) const
{
    return new ListPackagesForDomainResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::ListPackagesForDomainRequestPrivate
 * \brief The ListPackagesForDomainRequestPrivate class provides private implementation for ListPackagesForDomainRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a ListPackagesForDomainRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
ListPackagesForDomainRequestPrivate::ListPackagesForDomainRequestPrivate(
    const OpenSearchRequest::Action action, ListPackagesForDomainRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPackagesForDomainRequest
 * class' copy constructor.
 */
ListPackagesForDomainRequestPrivate::ListPackagesForDomainRequestPrivate(
    const ListPackagesForDomainRequestPrivate &other, ListPackagesForDomainRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
