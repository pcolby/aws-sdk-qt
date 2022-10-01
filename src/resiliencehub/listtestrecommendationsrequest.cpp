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

#include "listtestrecommendationsrequest.h"
#include "listtestrecommendationsrequest_p.h"
#include "listtestrecommendationsresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListTestRecommendationsRequest
 * \brief The ListTestRecommendationsRequest class provides an interface for ResilienceHub ListTestRecommendations requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listTestRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
ListTestRecommendationsRequest::ListTestRecommendationsRequest(const ListTestRecommendationsRequest &other)
    : ResilienceHubRequest(new ListTestRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTestRecommendationsRequest object.
 */
ListTestRecommendationsRequest::ListTestRecommendationsRequest()
    : ResilienceHubRequest(new ListTestRecommendationsRequestPrivate(ResilienceHubRequest::ListTestRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTestRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTestRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTestRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new ListTestRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListTestRecommendationsRequestPrivate
 * \brief The ListTestRecommendationsRequestPrivate class provides private implementation for ListTestRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListTestRecommendationsRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListTestRecommendationsRequestPrivate::ListTestRecommendationsRequestPrivate(
    const ResilienceHubRequest::Action action, ListTestRecommendationsRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTestRecommendationsRequest
 * class' copy constructor.
 */
ListTestRecommendationsRequestPrivate::ListTestRecommendationsRequestPrivate(
    const ListTestRecommendationsRequestPrivate &other, ListTestRecommendationsRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
