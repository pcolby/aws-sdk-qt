// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startservicesoftwareupdaterequest.h"
#include "startservicesoftwareupdaterequest_p.h"
#include "startservicesoftwareupdateresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::StartServiceSoftwareUpdateRequest
 * \brief The StartServiceSoftwareUpdateRequest class provides an interface for OpenSearch StartServiceSoftwareUpdate requests.
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
 * \sa OpenSearchClient::startServiceSoftwareUpdate
 */

/*!
 * Constructs a copy of \a other.
 */
StartServiceSoftwareUpdateRequest::StartServiceSoftwareUpdateRequest(const StartServiceSoftwareUpdateRequest &other)
    : OpenSearchRequest(new StartServiceSoftwareUpdateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartServiceSoftwareUpdateRequest object.
 */
StartServiceSoftwareUpdateRequest::StartServiceSoftwareUpdateRequest()
    : OpenSearchRequest(new StartServiceSoftwareUpdateRequestPrivate(OpenSearchRequest::StartServiceSoftwareUpdateAction, this))
{

}

/*!
 * \reimp
 */
bool StartServiceSoftwareUpdateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartServiceSoftwareUpdateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartServiceSoftwareUpdateRequest::response(QNetworkReply * const reply) const
{
    return new StartServiceSoftwareUpdateResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::StartServiceSoftwareUpdateRequestPrivate
 * \brief The StartServiceSoftwareUpdateRequestPrivate class provides private implementation for StartServiceSoftwareUpdateRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a StartServiceSoftwareUpdateRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
StartServiceSoftwareUpdateRequestPrivate::StartServiceSoftwareUpdateRequestPrivate(
    const OpenSearchRequest::Action action, StartServiceSoftwareUpdateRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartServiceSoftwareUpdateRequest
 * class' copy constructor.
 */
StartServiceSoftwareUpdateRequestPrivate::StartServiceSoftwareUpdateRequestPrivate(
    const StartServiceSoftwareUpdateRequestPrivate &other, StartServiceSoftwareUpdateRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
