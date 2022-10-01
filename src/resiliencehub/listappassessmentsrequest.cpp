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
