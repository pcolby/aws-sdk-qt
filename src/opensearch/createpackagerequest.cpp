/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createpackagerequest.h"
#include "createpackagerequest_p.h"
#include "createpackageresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::CreatePackageRequest
 * \brief The CreatePackageRequest class provides an interface for OpenSearch CreatePackage requests.
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
 * \sa OpenSearchClient::createPackage
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePackageRequest::CreatePackageRequest(const CreatePackageRequest &other)
    : OpenSearchRequest(new CreatePackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePackageRequest object.
 */
CreatePackageRequest::CreatePackageRequest()
    : OpenSearchRequest(new CreatePackageRequestPrivate(OpenSearchRequest::CreatePackageAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePackageRequest::response(QNetworkReply * const reply) const
{
    return new CreatePackageResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::CreatePackageRequestPrivate
 * \brief The CreatePackageRequestPrivate class provides private implementation for CreatePackageRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a CreatePackageRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
CreatePackageRequestPrivate::CreatePackageRequestPrivate(
    const OpenSearchRequest::Action action, CreatePackageRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePackageRequest
 * class' copy constructor.
 */
CreatePackageRequestPrivate::CreatePackageRequestPrivate(
    const CreatePackageRequestPrivate &other, CreatePackageRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
