/*
    Copyright 2013-2019 Paul Colby

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

#include "indexdocumentsrequest.h"
#include "indexdocumentsrequest_p.h"
#include "indexdocumentsresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::IndexDocumentsRequest
 * \brief The IndexDocumentsRequest class provides an interface for CloudSearch IndexDocuments requests.
 *
 * \inmodule QtAwsCloudSearch
 *
 *  <fullname>Amazon CloudSearch Configuration Service</fullname>
 * 
 *  You use the Amazon CloudSearch configuration service to create, configure, and manage search domains. Configuration
 *  service requests are submitted using the AWS Query protocol. AWS Query requests are HTTP or HTTPS requests submitted via
 *  HTTP GET or POST with a query parameter named
 * 
 *  Action>
 * 
 *  The endpoint for configuration service requests is region-specific: cloudsearch.<i>region</i>.amazonaws.com. For
 *  example, cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region" target="_blank">Regions and
 *
 * \sa CloudSearchClient::indexDocuments
 */

/*!
 * Constructs a copy of \a other.
 */
IndexDocumentsRequest::IndexDocumentsRequest(const IndexDocumentsRequest &other)
    : CloudSearchRequest(new IndexDocumentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a IndexDocumentsRequest object.
 */
IndexDocumentsRequest::IndexDocumentsRequest()
    : CloudSearchRequest(new IndexDocumentsRequestPrivate(CloudSearchRequest::IndexDocumentsAction, this))
{

}

/*!
 * \reimp
 */
bool IndexDocumentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a IndexDocumentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * IndexDocumentsRequest::response(QNetworkReply * const reply) const
{
    return new IndexDocumentsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::IndexDocumentsRequestPrivate
 * \brief The IndexDocumentsRequestPrivate class provides private implementation for IndexDocumentsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a IndexDocumentsRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
IndexDocumentsRequestPrivate::IndexDocumentsRequestPrivate(
    const CloudSearchRequest::Action action, IndexDocumentsRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the IndexDocumentsRequest
 * class' copy constructor.
 */
IndexDocumentsRequestPrivate::IndexDocumentsRequestPrivate(
    const IndexDocumentsRequestPrivate &other, IndexDocumentsRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
