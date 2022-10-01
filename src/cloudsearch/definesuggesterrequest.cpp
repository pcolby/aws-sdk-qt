// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "definesuggesterrequest.h"
#include "definesuggesterrequest_p.h"
#include "definesuggesterresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DefineSuggesterRequest
 * \brief The DefineSuggesterRequest class provides an interface for CloudSearch DefineSuggester requests.
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
 * \sa CloudSearchClient::defineSuggester
 */

/*!
 * Constructs a copy of \a other.
 */
DefineSuggesterRequest::DefineSuggesterRequest(const DefineSuggesterRequest &other)
    : CloudSearchRequest(new DefineSuggesterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DefineSuggesterRequest object.
 */
DefineSuggesterRequest::DefineSuggesterRequest()
    : CloudSearchRequest(new DefineSuggesterRequestPrivate(CloudSearchRequest::DefineSuggesterAction, this))
{

}

/*!
 * \reimp
 */
bool DefineSuggesterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DefineSuggesterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DefineSuggesterRequest::response(QNetworkReply * const reply) const
{
    return new DefineSuggesterResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::DefineSuggesterRequestPrivate
 * \brief The DefineSuggesterRequestPrivate class provides private implementation for DefineSuggesterRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DefineSuggesterRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
DefineSuggesterRequestPrivate::DefineSuggesterRequestPrivate(
    const CloudSearchRequest::Action action, DefineSuggesterRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DefineSuggesterRequest
 * class' copy constructor.
 */
DefineSuggesterRequestPrivate::DefineSuggesterRequestPrivate(
    const DefineSuggesterRequestPrivate &other, DefineSuggesterRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
