// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
