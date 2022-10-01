// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemultiplexprogramrequest.h"
#include "updatemultiplexprogramrequest_p.h"
#include "updatemultiplexprogramresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateMultiplexProgramRequest
 * \brief The UpdateMultiplexProgramRequest class provides an interface for MediaLive UpdateMultiplexProgram requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateMultiplexProgram
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMultiplexProgramRequest::UpdateMultiplexProgramRequest(const UpdateMultiplexProgramRequest &other)
    : MediaLiveRequest(new UpdateMultiplexProgramRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMultiplexProgramRequest object.
 */
UpdateMultiplexProgramRequest::UpdateMultiplexProgramRequest()
    : MediaLiveRequest(new UpdateMultiplexProgramRequestPrivate(MediaLiveRequest::UpdateMultiplexProgramAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMultiplexProgramRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMultiplexProgramResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMultiplexProgramRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMultiplexProgramResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::UpdateMultiplexProgramRequestPrivate
 * \brief The UpdateMultiplexProgramRequestPrivate class provides private implementation for UpdateMultiplexProgramRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateMultiplexProgramRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
UpdateMultiplexProgramRequestPrivate::UpdateMultiplexProgramRequestPrivate(
    const MediaLiveRequest::Action action, UpdateMultiplexProgramRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMultiplexProgramRequest
 * class' copy constructor.
 */
UpdateMultiplexProgramRequestPrivate::UpdateMultiplexProgramRequestPrivate(
    const UpdateMultiplexProgramRequestPrivate &other, UpdateMultiplexProgramRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
