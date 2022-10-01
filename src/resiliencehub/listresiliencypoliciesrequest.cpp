// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresiliencypoliciesrequest.h"
#include "listresiliencypoliciesrequest_p.h"
#include "listresiliencypoliciesresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListResiliencyPoliciesRequest
 * \brief The ListResiliencyPoliciesRequest class provides an interface for ResilienceHub ListResiliencyPolicies requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listResiliencyPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListResiliencyPoliciesRequest::ListResiliencyPoliciesRequest(const ListResiliencyPoliciesRequest &other)
    : ResilienceHubRequest(new ListResiliencyPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResiliencyPoliciesRequest object.
 */
ListResiliencyPoliciesRequest::ListResiliencyPoliciesRequest()
    : ResilienceHubRequest(new ListResiliencyPoliciesRequestPrivate(ResilienceHubRequest::ListResiliencyPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListResiliencyPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResiliencyPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResiliencyPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListResiliencyPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListResiliencyPoliciesRequestPrivate
 * \brief The ListResiliencyPoliciesRequestPrivate class provides private implementation for ListResiliencyPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListResiliencyPoliciesRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListResiliencyPoliciesRequestPrivate::ListResiliencyPoliciesRequestPrivate(
    const ResilienceHubRequest::Action action, ListResiliencyPoliciesRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResiliencyPoliciesRequest
 * class' copy constructor.
 */
ListResiliencyPoliciesRequestPrivate::ListResiliencyPoliciesRequestPrivate(
    const ListResiliencyPoliciesRequestPrivate &other, ListResiliencyPoliciesRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
