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

#include "listsoprecommendationsrequest.h"
#include "listsoprecommendationsrequest_p.h"
#include "listsoprecommendationsresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListSopRecommendationsRequest
 * \brief The ListSopRecommendationsRequest class provides an interface for ResilienceHub ListSopRecommendations requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listSopRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
ListSopRecommendationsRequest::ListSopRecommendationsRequest(const ListSopRecommendationsRequest &other)
    : ResilienceHubRequest(new ListSopRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSopRecommendationsRequest object.
 */
ListSopRecommendationsRequest::ListSopRecommendationsRequest()
    : ResilienceHubRequest(new ListSopRecommendationsRequestPrivate(ResilienceHubRequest::ListSopRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSopRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSopRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSopRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new ListSopRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListSopRecommendationsRequestPrivate
 * \brief The ListSopRecommendationsRequestPrivate class provides private implementation for ListSopRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListSopRecommendationsRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListSopRecommendationsRequestPrivate::ListSopRecommendationsRequestPrivate(
    const ResilienceHubRequest::Action action, ListSopRecommendationsRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSopRecommendationsRequest
 * class' copy constructor.
 */
ListSopRecommendationsRequestPrivate::ListSopRecommendationsRequestPrivate(
    const ListSopRecommendationsRequestPrivate &other, ListSopRecommendationsRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
