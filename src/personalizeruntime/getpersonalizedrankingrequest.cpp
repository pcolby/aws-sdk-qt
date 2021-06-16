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

#include "getpersonalizedrankingrequest.h"
#include "getpersonalizedrankingrequest_p.h"
#include "getpersonalizedrankingresponse.h"
#include "personalizeruntimerequest_p.h"

namespace QtAws {
namespace PersonalizeRuntime {

/*!
 * \class QtAws::PersonalizeRuntime::GetPersonalizedRankingRequest
 * \brief The GetPersonalizedRankingRequest class provides an interface for PersonalizeRuntime GetPersonalizedRanking requests.
 *
 * \inmodule QtAwsPersonalizeRuntime
 *
 *
 * \sa PersonalizeRuntimeClient::getPersonalizedRanking
 */

/*!
 * Constructs a copy of \a other.
 */
GetPersonalizedRankingRequest::GetPersonalizedRankingRequest(const GetPersonalizedRankingRequest &other)
    : PersonalizeRuntimeRequest(new GetPersonalizedRankingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPersonalizedRankingRequest object.
 */
GetPersonalizedRankingRequest::GetPersonalizedRankingRequest()
    : PersonalizeRuntimeRequest(new GetPersonalizedRankingRequestPrivate(PersonalizeRuntimeRequest::GetPersonalizedRankingAction, this))
{

}

/*!
 * \reimp
 */
bool GetPersonalizedRankingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPersonalizedRankingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPersonalizedRankingRequest::response(QNetworkReply * const reply) const
{
    return new GetPersonalizedRankingResponse(*this, reply);
}

/*!
 * \class QtAws::PersonalizeRuntime::GetPersonalizedRankingRequestPrivate
 * \brief The GetPersonalizedRankingRequestPrivate class provides private implementation for GetPersonalizedRankingRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalizeRuntime
 */

/*!
 * Constructs a GetPersonalizedRankingRequestPrivate object for PersonalizeRuntime \a action,
 * with public implementation \a q.
 */
GetPersonalizedRankingRequestPrivate::GetPersonalizedRankingRequestPrivate(
    const PersonalizeRuntimeRequest::Action action, GetPersonalizedRankingRequest * const q)
    : PersonalizeRuntimeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPersonalizedRankingRequest
 * class' copy constructor.
 */
GetPersonalizedRankingRequestPrivate::GetPersonalizedRankingRequestPrivate(
    const GetPersonalizedRankingRequestPrivate &other, GetPersonalizedRankingRequest * const q)
    : PersonalizeRuntimeRequestPrivate(other, q)
{

}

} // namespace PersonalizeRuntime
} // namespace QtAws
