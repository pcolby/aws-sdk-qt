// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createoutboundconnectionrequest.h"
#include "createoutboundconnectionrequest_p.h"
#include "createoutboundconnectionresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::CreateOutboundConnectionRequest
 * \brief The CreateOutboundConnectionRequest class provides an interface for OpenSearch CreateOutboundConnection requests.
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
 * \sa OpenSearchClient::createOutboundConnection
 */

/*!
 * Constructs a copy of \a other.
 */
CreateOutboundConnectionRequest::CreateOutboundConnectionRequest(const CreateOutboundConnectionRequest &other)
    : OpenSearchRequest(new CreateOutboundConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateOutboundConnectionRequest object.
 */
CreateOutboundConnectionRequest::CreateOutboundConnectionRequest()
    : OpenSearchRequest(new CreateOutboundConnectionRequestPrivate(OpenSearchRequest::CreateOutboundConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateOutboundConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateOutboundConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateOutboundConnectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateOutboundConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::CreateOutboundConnectionRequestPrivate
 * \brief The CreateOutboundConnectionRequestPrivate class provides private implementation for CreateOutboundConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a CreateOutboundConnectionRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
CreateOutboundConnectionRequestPrivate::CreateOutboundConnectionRequestPrivate(
    const OpenSearchRequest::Action action, CreateOutboundConnectionRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateOutboundConnectionRequest
 * class' copy constructor.
 */
CreateOutboundConnectionRequestPrivate::CreateOutboundConnectionRequestPrivate(
    const CreateOutboundConnectionRequestPrivate &other, CreateOutboundConnectionRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
