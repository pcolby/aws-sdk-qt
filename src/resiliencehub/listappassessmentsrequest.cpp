// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappassessmentsrequest.h"
#include "listappassessmentsrequest_p.h"
#include "listappassessmentsresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAppAssessmentsRequest
 * \brief The ListAppAssessmentsRequest class provides an interface for ResilienceHub ListAppAssessments requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listAppAssessments
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppAssessmentsRequest::ListAppAssessmentsRequest(const ListAppAssessmentsRequest &other)
    : ResilienceHubRequest(new ListAppAssessmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppAssessmentsRequest object.
 */
ListAppAssessmentsRequest::ListAppAssessmentsRequest()
    : ResilienceHubRequest(new ListAppAssessmentsRequestPrivate(ResilienceHubRequest::ListAppAssessmentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppAssessmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppAssessmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppAssessmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListAppAssessmentsResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListAppAssessmentsRequestPrivate
 * \brief The ListAppAssessmentsRequestPrivate class provides private implementation for ListAppAssessmentsRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAppAssessmentsRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListAppAssessmentsRequestPrivate::ListAppAssessmentsRequestPrivate(
    const ResilienceHubRequest::Action action, ListAppAssessmentsRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppAssessmentsRequest
 * class' copy constructor.
 */
ListAppAssessmentsRequestPrivate::ListAppAssessmentsRequestPrivate(
    const ListAppAssessmentsRequestPrivate &other, ListAppAssessmentsRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
