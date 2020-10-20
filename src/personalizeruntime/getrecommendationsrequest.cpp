/*
    Copyright 2013-2020 Paul Colby

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

#include "getrecommendationsrequest.h"
#include "getrecommendationsrequest_p.h"
#include "getrecommendationsresponse.h"
#include "personalizeruntimerequest_p.h"

namespace QtAws {
namespace PersonalizeRuntime {

/*!
 * \class QtAws::PersonalizeRuntime::GetRecommendationsRequest
 * \brief The GetRecommendationsRequest class provides an interface for PersonalizeRuntime GetRecommendations requests.
 *
 * \inmodule QtAwsPersonalizeRuntime
 *
 *
 * \sa PersonalizeRuntimeClient::getRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
GetRecommendationsRequest::GetRecommendationsRequest(const GetRecommendationsRequest &other)
    : PersonalizeRuntimeRequest(new GetRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRecommendationsRequest object.
 */
GetRecommendationsRequest::GetRecommendationsRequest()
    : PersonalizeRuntimeRequest(new GetRecommendationsRequestPrivate(PersonalizeRuntimeRequest::GetRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new GetRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::PersonalizeRuntime::GetRecommendationsRequestPrivate
 * \brief The GetRecommendationsRequestPrivate class provides private implementation for GetRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalizeRuntime
 */

/*!
 * Constructs a GetRecommendationsRequestPrivate object for PersonalizeRuntime \a action,
 * with public implementation \a q.
 */
GetRecommendationsRequestPrivate::GetRecommendationsRequestPrivate(
    const PersonalizeRuntimeRequest::Action action, GetRecommendationsRequest * const q)
    : PersonalizeRuntimeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRecommendationsRequest
 * class' copy constructor.
 */
GetRecommendationsRequestPrivate::GetRecommendationsRequestPrivate(
    const GetRecommendationsRequestPrivate &other, GetRecommendationsRequest * const q)
    : PersonalizeRuntimeRequestPrivate(other, q)
{

}

} // namespace PersonalizeRuntime
} // namespace QtAws
