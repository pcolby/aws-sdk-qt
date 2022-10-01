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

#include "listsuggestedresiliencypoliciesrequest.h"
#include "listsuggestedresiliencypoliciesrequest_p.h"
#include "listsuggestedresiliencypoliciesresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListSuggestedResiliencyPoliciesRequest
 * \brief The ListSuggestedResiliencyPoliciesRequest class provides an interface for ResilienceHub ListSuggestedResiliencyPolicies requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listSuggestedResiliencyPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListSuggestedResiliencyPoliciesRequest::ListSuggestedResiliencyPoliciesRequest(const ListSuggestedResiliencyPoliciesRequest &other)
    : ResilienceHubRequest(new ListSuggestedResiliencyPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSuggestedResiliencyPoliciesRequest object.
 */
ListSuggestedResiliencyPoliciesRequest::ListSuggestedResiliencyPoliciesRequest()
    : ResilienceHubRequest(new ListSuggestedResiliencyPoliciesRequestPrivate(ResilienceHubRequest::ListSuggestedResiliencyPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSuggestedResiliencyPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSuggestedResiliencyPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSuggestedResiliencyPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListSuggestedResiliencyPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListSuggestedResiliencyPoliciesRequestPrivate
 * \brief The ListSuggestedResiliencyPoliciesRequestPrivate class provides private implementation for ListSuggestedResiliencyPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListSuggestedResiliencyPoliciesRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListSuggestedResiliencyPoliciesRequestPrivate::ListSuggestedResiliencyPoliciesRequestPrivate(
    const ResilienceHubRequest::Action action, ListSuggestedResiliencyPoliciesRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSuggestedResiliencyPoliciesRequest
 * class' copy constructor.
 */
ListSuggestedResiliencyPoliciesRequestPrivate::ListSuggestedResiliencyPoliciesRequestPrivate(
    const ListSuggestedResiliencyPoliciesRequestPrivate &other, ListSuggestedResiliencyPoliciesRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
