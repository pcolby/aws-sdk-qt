// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteindexfieldrequest.h"
#include "deleteindexfieldrequest_p.h"
#include "deleteindexfieldresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DeleteIndexFieldRequest
 * \brief The DeleteIndexFieldRequest class provides an interface for CloudSearch DeleteIndexField requests.
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
 * \sa CloudSearchClient::deleteIndexField
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIndexFieldRequest::DeleteIndexFieldRequest(const DeleteIndexFieldRequest &other)
    : CloudSearchRequest(new DeleteIndexFieldRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIndexFieldRequest object.
 */
DeleteIndexFieldRequest::DeleteIndexFieldRequest()
    : CloudSearchRequest(new DeleteIndexFieldRequestPrivate(CloudSearchRequest::DeleteIndexFieldAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIndexFieldRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIndexFieldResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIndexFieldRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIndexFieldResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::DeleteIndexFieldRequestPrivate
 * \brief The DeleteIndexFieldRequestPrivate class provides private implementation for DeleteIndexFieldRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DeleteIndexFieldRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
DeleteIndexFieldRequestPrivate::DeleteIndexFieldRequestPrivate(
    const CloudSearchRequest::Action action, DeleteIndexFieldRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIndexFieldRequest
 * class' copy constructor.
 */
DeleteIndexFieldRequestPrivate::DeleteIndexFieldRequestPrivate(
    const DeleteIndexFieldRequestPrivate &other, DeleteIndexFieldRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
