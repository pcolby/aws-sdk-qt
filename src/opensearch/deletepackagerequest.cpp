// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepackagerequest.h"
#include "deletepackagerequest_p.h"
#include "deletepackageresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DeletePackageRequest
 * \brief The DeletePackageRequest class provides an interface for OpenSearch DeletePackage requests.
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
 * \sa OpenSearchClient::deletePackage
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePackageRequest::DeletePackageRequest(const DeletePackageRequest &other)
    : OpenSearchRequest(new DeletePackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePackageRequest object.
 */
DeletePackageRequest::DeletePackageRequest()
    : OpenSearchRequest(new DeletePackageRequestPrivate(OpenSearchRequest::DeletePackageAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePackageRequest::response(QNetworkReply * const reply) const
{
    return new DeletePackageResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::DeletePackageRequestPrivate
 * \brief The DeletePackageRequestPrivate class provides private implementation for DeletePackageRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DeletePackageRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
DeletePackageRequestPrivate::DeletePackageRequestPrivate(
    const OpenSearchRequest::Action action, DeletePackageRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePackageRequest
 * class' copy constructor.
 */
DeletePackageRequestPrivate::DeletePackageRequestPrivate(
    const DeletePackageRequestPrivate &other, DeletePackageRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
