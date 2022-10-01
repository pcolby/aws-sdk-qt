// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatepackagerequest.h"
#include "associatepackagerequest_p.h"
#include "associatepackageresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::AssociatePackageRequest
 * \brief The AssociatePackageRequest class provides an interface for OpenSearch AssociatePackage requests.
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
 * \sa OpenSearchClient::associatePackage
 */

/*!
 * Constructs a copy of \a other.
 */
AssociatePackageRequest::AssociatePackageRequest(const AssociatePackageRequest &other)
    : OpenSearchRequest(new AssociatePackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociatePackageRequest object.
 */
AssociatePackageRequest::AssociatePackageRequest()
    : OpenSearchRequest(new AssociatePackageRequestPrivate(OpenSearchRequest::AssociatePackageAction, this))
{

}

/*!
 * \reimp
 */
bool AssociatePackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociatePackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociatePackageRequest::response(QNetworkReply * const reply) const
{
    return new AssociatePackageResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::AssociatePackageRequestPrivate
 * \brief The AssociatePackageRequestPrivate class provides private implementation for AssociatePackageRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a AssociatePackageRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
AssociatePackageRequestPrivate::AssociatePackageRequestPrivate(
    const OpenSearchRequest::Action action, AssociatePackageRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociatePackageRequest
 * class' copy constructor.
 */
AssociatePackageRequestPrivate::AssociatePackageRequestPrivate(
    const AssociatePackageRequestPrivate &other, AssociatePackageRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
