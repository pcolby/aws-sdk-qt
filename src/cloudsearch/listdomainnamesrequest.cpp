// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomainnamesrequest.h"
#include "listdomainnamesrequest_p.h"
#include "listdomainnamesresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::ListDomainNamesRequest
 * \brief The ListDomainNamesRequest class provides an interface for CloudSearch ListDomainNames requests.
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
 * \sa CloudSearchClient::listDomainNames
 */

/*!
 * Constructs a copy of \a other.
 */
ListDomainNamesRequest::ListDomainNamesRequest(const ListDomainNamesRequest &other)
    : CloudSearchRequest(new ListDomainNamesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDomainNamesRequest object.
 */
ListDomainNamesRequest::ListDomainNamesRequest()
    : CloudSearchRequest(new ListDomainNamesRequestPrivate(CloudSearchRequest::ListDomainNamesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDomainNamesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDomainNamesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDomainNamesRequest::response(QNetworkReply * const reply) const
{
    return new ListDomainNamesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::ListDomainNamesRequestPrivate
 * \brief The ListDomainNamesRequestPrivate class provides private implementation for ListDomainNamesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a ListDomainNamesRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
ListDomainNamesRequestPrivate::ListDomainNamesRequestPrivate(
    const CloudSearchRequest::Action action, ListDomainNamesRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDomainNamesRequest
 * class' copy constructor.
 */
ListDomainNamesRequestPrivate::ListDomainNamesRequestPrivate(
    const ListDomainNamesRequestPrivate &other, ListDomainNamesRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
