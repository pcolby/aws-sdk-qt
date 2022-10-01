// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgeneratedcodejobrequest.h"
#include "getgeneratedcodejobrequest_p.h"
#include "getgeneratedcodejobresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetGeneratedCodeJobRequest
 * \brief The GetGeneratedCodeJobRequest class provides an interface for GameSparks GetGeneratedCodeJob requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getGeneratedCodeJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetGeneratedCodeJobRequest::GetGeneratedCodeJobRequest(const GetGeneratedCodeJobRequest &other)
    : GameSparksRequest(new GetGeneratedCodeJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGeneratedCodeJobRequest object.
 */
GetGeneratedCodeJobRequest::GetGeneratedCodeJobRequest()
    : GameSparksRequest(new GetGeneratedCodeJobRequestPrivate(GameSparksRequest::GetGeneratedCodeJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetGeneratedCodeJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGeneratedCodeJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGeneratedCodeJobRequest::response(QNetworkReply * const reply) const
{
    return new GetGeneratedCodeJobResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::GetGeneratedCodeJobRequestPrivate
 * \brief The GetGeneratedCodeJobRequestPrivate class provides private implementation for GetGeneratedCodeJobRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetGeneratedCodeJobRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
GetGeneratedCodeJobRequestPrivate::GetGeneratedCodeJobRequestPrivate(
    const GameSparksRequest::Action action, GetGeneratedCodeJobRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGeneratedCodeJobRequest
 * class' copy constructor.
 */
GetGeneratedCodeJobRequestPrivate::GetGeneratedCodeJobRequestPrivate(
    const GetGeneratedCodeJobRequestPrivate &other, GetGeneratedCodeJobRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
