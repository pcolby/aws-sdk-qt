// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappcomponentcompliancesrequest.h"
#include "listappcomponentcompliancesrequest_p.h"
#include "listappcomponentcompliancesresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAppComponentCompliancesRequest
 * \brief The ListAppComponentCompliancesRequest class provides an interface for ResilienceHub ListAppComponentCompliances requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listAppComponentCompliances
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppComponentCompliancesRequest::ListAppComponentCompliancesRequest(const ListAppComponentCompliancesRequest &other)
    : ResilienceHubRequest(new ListAppComponentCompliancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppComponentCompliancesRequest object.
 */
ListAppComponentCompliancesRequest::ListAppComponentCompliancesRequest()
    : ResilienceHubRequest(new ListAppComponentCompliancesRequestPrivate(ResilienceHubRequest::ListAppComponentCompliancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppComponentCompliancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppComponentCompliancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppComponentCompliancesRequest::response(QNetworkReply * const reply) const
{
    return new ListAppComponentCompliancesResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListAppComponentCompliancesRequestPrivate
 * \brief The ListAppComponentCompliancesRequestPrivate class provides private implementation for ListAppComponentCompliancesRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAppComponentCompliancesRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListAppComponentCompliancesRequestPrivate::ListAppComponentCompliancesRequestPrivate(
    const ResilienceHubRequest::Action action, ListAppComponentCompliancesRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppComponentCompliancesRequest
 * class' copy constructor.
 */
ListAppComponentCompliancesRequestPrivate::ListAppComponentCompliancesRequestPrivate(
    const ListAppComponentCompliancesRequestPrivate &other, ListAppComponentCompliancesRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
