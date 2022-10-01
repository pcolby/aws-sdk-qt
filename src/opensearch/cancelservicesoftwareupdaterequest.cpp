// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelservicesoftwareupdaterequest.h"
#include "cancelservicesoftwareupdaterequest_p.h"
#include "cancelservicesoftwareupdateresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::CancelServiceSoftwareUpdateRequest
 * \brief The CancelServiceSoftwareUpdateRequest class provides an interface for OpenSearch CancelServiceSoftwareUpdate requests.
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
 * \sa OpenSearchClient::cancelServiceSoftwareUpdate
 */

/*!
 * Constructs a copy of \a other.
 */
CancelServiceSoftwareUpdateRequest::CancelServiceSoftwareUpdateRequest(const CancelServiceSoftwareUpdateRequest &other)
    : OpenSearchRequest(new CancelServiceSoftwareUpdateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelServiceSoftwareUpdateRequest object.
 */
CancelServiceSoftwareUpdateRequest::CancelServiceSoftwareUpdateRequest()
    : OpenSearchRequest(new CancelServiceSoftwareUpdateRequestPrivate(OpenSearchRequest::CancelServiceSoftwareUpdateAction, this))
{

}

/*!
 * \reimp
 */
bool CancelServiceSoftwareUpdateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelServiceSoftwareUpdateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelServiceSoftwareUpdateRequest::response(QNetworkReply * const reply) const
{
    return new CancelServiceSoftwareUpdateResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::CancelServiceSoftwareUpdateRequestPrivate
 * \brief The CancelServiceSoftwareUpdateRequestPrivate class provides private implementation for CancelServiceSoftwareUpdateRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a CancelServiceSoftwareUpdateRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
CancelServiceSoftwareUpdateRequestPrivate::CancelServiceSoftwareUpdateRequestPrivate(
    const OpenSearchRequest::Action action, CancelServiceSoftwareUpdateRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelServiceSoftwareUpdateRequest
 * class' copy constructor.
 */
CancelServiceSoftwareUpdateRequestPrivate::CancelServiceSoftwareUpdateRequestPrivate(
    const CancelServiceSoftwareUpdateRequestPrivate &other, CancelServiceSoftwareUpdateRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
