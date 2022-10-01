// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinstancetypedetailsrequest.h"
#include "listinstancetypedetailsrequest_p.h"
#include "listinstancetypedetailsresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::ListInstanceTypeDetailsRequest
 * \brief The ListInstanceTypeDetailsRequest class provides an interface for OpenSearch ListInstanceTypeDetails requests.
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
 * \sa OpenSearchClient::listInstanceTypeDetails
 */

/*!
 * Constructs a copy of \a other.
 */
ListInstanceTypeDetailsRequest::ListInstanceTypeDetailsRequest(const ListInstanceTypeDetailsRequest &other)
    : OpenSearchRequest(new ListInstanceTypeDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInstanceTypeDetailsRequest object.
 */
ListInstanceTypeDetailsRequest::ListInstanceTypeDetailsRequest()
    : OpenSearchRequest(new ListInstanceTypeDetailsRequestPrivate(OpenSearchRequest::ListInstanceTypeDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstanceTypeDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInstanceTypeDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstanceTypeDetailsRequest::response(QNetworkReply * const reply) const
{
    return new ListInstanceTypeDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::ListInstanceTypeDetailsRequestPrivate
 * \brief The ListInstanceTypeDetailsRequestPrivate class provides private implementation for ListInstanceTypeDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a ListInstanceTypeDetailsRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
ListInstanceTypeDetailsRequestPrivate::ListInstanceTypeDetailsRequestPrivate(
    const OpenSearchRequest::Action action, ListInstanceTypeDetailsRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInstanceTypeDetailsRequest
 * class' copy constructor.
 */
ListInstanceTypeDetailsRequestPrivate::ListInstanceTypeDetailsRequestPrivate(
    const ListInstanceTypeDetailsRequestPrivate &other, ListInstanceTypeDetailsRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
