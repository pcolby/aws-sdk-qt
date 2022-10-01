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

#include "listalarmrecommendationsrequest.h"
#include "listalarmrecommendationsrequest_p.h"
#include "listalarmrecommendationsresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAlarmRecommendationsRequest
 * \brief The ListAlarmRecommendationsRequest class provides an interface for ResilienceHub ListAlarmRecommendations requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listAlarmRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
ListAlarmRecommendationsRequest::ListAlarmRecommendationsRequest(const ListAlarmRecommendationsRequest &other)
    : ResilienceHubRequest(new ListAlarmRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAlarmRecommendationsRequest object.
 */
ListAlarmRecommendationsRequest::ListAlarmRecommendationsRequest()
    : ResilienceHubRequest(new ListAlarmRecommendationsRequestPrivate(ResilienceHubRequest::ListAlarmRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAlarmRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAlarmRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAlarmRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new ListAlarmRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListAlarmRecommendationsRequestPrivate
 * \brief The ListAlarmRecommendationsRequestPrivate class provides private implementation for ListAlarmRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAlarmRecommendationsRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListAlarmRecommendationsRequestPrivate::ListAlarmRecommendationsRequestPrivate(
    const ResilienceHubRequest::Action action, ListAlarmRecommendationsRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAlarmRecommendationsRequest
 * class' copy constructor.
 */
ListAlarmRecommendationsRequestPrivate::ListAlarmRecommendationsRequestPrivate(
    const ListAlarmRecommendationsRequestPrivate &other, ListAlarmRecommendationsRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
