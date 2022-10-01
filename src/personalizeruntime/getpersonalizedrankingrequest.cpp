// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
