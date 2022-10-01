// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepackagerequest.h"
#include "updatepackagerequest_p.h"
#include "updatepackageresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::UpdatePackageRequest
 * \brief The UpdatePackageRequest class provides an interface for OpenSearch UpdatePackage requests.
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
 * \sa OpenSearchClient::updatePackage
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePackageRequest::UpdatePackageRequest(const UpdatePackageRequest &other)
    : OpenSearchRequest(new UpdatePackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePackageRequest object.
 */
UpdatePackageRequest::UpdatePackageRequest()
    : OpenSearchRequest(new UpdatePackageRequestPrivate(OpenSearchRequest::UpdatePackageAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePackageRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePackageResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::UpdatePackageRequestPrivate
 * \brief The UpdatePackageRequestPrivate class provides private implementation for UpdatePackageRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a UpdatePackageRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
UpdatePackageRequestPrivate::UpdatePackageRequestPrivate(
    const OpenSearchRequest::Action action, UpdatePackageRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePackageRequest
 * class' copy constructor.
 */
UpdatePackageRequestPrivate::UpdatePackageRequestPrivate(
    const UpdatePackageRequestPrivate &other, UpdatePackageRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
