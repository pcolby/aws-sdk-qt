// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemultiplexprogramrequest.h"
#include "deletemultiplexprogramrequest_p.h"
#include "deletemultiplexprogramresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteMultiplexProgramRequest
 * \brief The DeleteMultiplexProgramRequest class provides an interface for MediaLive DeleteMultiplexProgram requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteMultiplexProgram
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMultiplexProgramRequest::DeleteMultiplexProgramRequest(const DeleteMultiplexProgramRequest &other)
    : MediaLiveRequest(new DeleteMultiplexProgramRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMultiplexProgramRequest object.
 */
DeleteMultiplexProgramRequest::DeleteMultiplexProgramRequest()
    : MediaLiveRequest(new DeleteMultiplexProgramRequestPrivate(MediaLiveRequest::DeleteMultiplexProgramAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMultiplexProgramRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMultiplexProgramResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMultiplexProgramRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMultiplexProgramResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DeleteMultiplexProgramRequestPrivate
 * \brief The DeleteMultiplexProgramRequestPrivate class provides private implementation for DeleteMultiplexProgramRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteMultiplexProgramRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DeleteMultiplexProgramRequestPrivate::DeleteMultiplexProgramRequestPrivate(
    const MediaLiveRequest::Action action, DeleteMultiplexProgramRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMultiplexProgramRequest
 * class' copy constructor.
 */
DeleteMultiplexProgramRequestPrivate::DeleteMultiplexProgramRequestPrivate(
    const DeleteMultiplexProgramRequestPrivate &other, DeleteMultiplexProgramRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
