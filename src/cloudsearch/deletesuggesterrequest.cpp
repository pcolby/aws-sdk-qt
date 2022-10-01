// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesuggesterrequest.h"
#include "deletesuggesterrequest_p.h"
#include "deletesuggesterresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DeleteSuggesterRequest
 * \brief The DeleteSuggesterRequest class provides an interface for CloudSearch DeleteSuggester requests.
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
 * \sa CloudSearchClient::deleteSuggester
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSuggesterRequest::DeleteSuggesterRequest(const DeleteSuggesterRequest &other)
    : CloudSearchRequest(new DeleteSuggesterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSuggesterRequest object.
 */
DeleteSuggesterRequest::DeleteSuggesterRequest()
    : CloudSearchRequest(new DeleteSuggesterRequestPrivate(CloudSearchRequest::DeleteSuggesterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSuggesterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSuggesterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSuggesterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSuggesterResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::DeleteSuggesterRequestPrivate
 * \brief The DeleteSuggesterRequestPrivate class provides private implementation for DeleteSuggesterRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DeleteSuggesterRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
DeleteSuggesterRequestPrivate::DeleteSuggesterRequestPrivate(
    const CloudSearchRequest::Action action, DeleteSuggesterRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSuggesterRequest
 * class' copy constructor.
 */
DeleteSuggesterRequestPrivate::DeleteSuggesterRequestPrivate(
    const DeleteSuggesterRequestPrivate &other, DeleteSuggesterRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
