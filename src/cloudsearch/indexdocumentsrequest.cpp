// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
