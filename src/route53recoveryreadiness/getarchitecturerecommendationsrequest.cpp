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

#include "getarchitecturerecommendationsrequest.h"
#include "getarchitecturerecommendationsrequest_p.h"
#include "getarchitecturerecommendationsresponse.h"
#include "route53recoveryreadinessrequest_p.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetArchitectureRecommendationsRequest
 * \brief The GetArchitectureRecommendationsRequest class provides an interface for Route53RecoveryReadiness GetArchitectureRecommendations requests.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getArchitectureRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
GetArchitectureRecommendationsRequest::GetArchitectureRecommendationsRequest(const GetArchitectureRecommendationsRequest &other)
    : Route53RecoveryReadinessRequest(new GetArchitectureRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetArchitectureRecommendationsRequest object.
 */
GetArchitectureRecommendationsRequest::GetArchitectureRecommendationsRequest()
    : Route53RecoveryReadinessRequest(new GetArchitectureRecommendationsRequestPrivate(Route53RecoveryReadinessRequest::GetArchitectureRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetArchitectureRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetArchitectureRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetArchitectureRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new GetArchitectureRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetArchitectureRecommendationsRequestPrivate
 * \brief The GetArchitectureRecommendationsRequestPrivate class provides private implementation for GetArchitectureRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetArchitectureRecommendationsRequestPrivate object for Route53RecoveryReadiness \a action,
 * with public implementation \a q.
 */
GetArchitectureRecommendationsRequestPrivate::GetArchitectureRecommendationsRequestPrivate(
    const Route53RecoveryReadinessRequest::Action action, GetArchitectureRecommendationsRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetArchitectureRecommendationsRequest
 * class' copy constructor.
 */
GetArchitectureRecommendationsRequestPrivate::GetArchitectureRecommendationsRequestPrivate(
    const GetArchitectureRecommendationsRequestPrivate &other, GetArchitectureRecommendationsRequest * const q)
    : Route53RecoveryReadinessRequestPrivate(other, q)
{

}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
