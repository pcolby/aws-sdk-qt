// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removetagsrequest.h"
#include "removetagsrequest_p.h"
#include "removetagsresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::RemoveTagsRequest
 * \brief The RemoveTagsRequest class provides an interface for OpenSearch RemoveTags requests.
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
 * \sa OpenSearchClient::removeTags
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveTagsRequest::RemoveTagsRequest(const RemoveTagsRequest &other)
    : OpenSearchRequest(new RemoveTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveTagsRequest object.
 */
RemoveTagsRequest::RemoveTagsRequest()
    : OpenSearchRequest(new RemoveTagsRequestPrivate(OpenSearchRequest::RemoveTagsAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveTagsRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTagsResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::RemoveTagsRequestPrivate
 * \brief The RemoveTagsRequestPrivate class provides private implementation for RemoveTagsRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a RemoveTagsRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
RemoveTagsRequestPrivate::RemoveTagsRequestPrivate(
    const OpenSearchRequest::Action action, RemoveTagsRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveTagsRequest
 * class' copy constructor.
 */
RemoveTagsRequestPrivate::RemoveTagsRequestPrivate(
    const RemoveTagsRequestPrivate &other, RemoveTagsRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
