// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemultiplexrequest.h"
#include "updatemultiplexrequest_p.h"
#include "updatemultiplexresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateMultiplexRequest
 * \brief The UpdateMultiplexRequest class provides an interface for MediaLive UpdateMultiplex requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateMultiplex
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMultiplexRequest::UpdateMultiplexRequest(const UpdateMultiplexRequest &other)
    : MediaLiveRequest(new UpdateMultiplexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMultiplexRequest object.
 */
UpdateMultiplexRequest::UpdateMultiplexRequest()
    : MediaLiveRequest(new UpdateMultiplexRequestPrivate(MediaLiveRequest::UpdateMultiplexAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMultiplexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMultiplexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMultiplexRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMultiplexResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::UpdateMultiplexRequestPrivate
 * \brief The UpdateMultiplexRequestPrivate class provides private implementation for UpdateMultiplexRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateMultiplexRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
UpdateMultiplexRequestPrivate::UpdateMultiplexRequestPrivate(
    const MediaLiveRequest::Action action, UpdateMultiplexRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMultiplexRequest
 * class' copy constructor.
 */
UpdateMultiplexRequestPrivate::UpdateMultiplexRequestPrivate(
    const UpdateMultiplexRequestPrivate &other, UpdateMultiplexRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
