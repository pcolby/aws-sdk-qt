// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemultiplexrequest.h"
#include "deletemultiplexrequest_p.h"
#include "deletemultiplexresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteMultiplexRequest
 * \brief The DeleteMultiplexRequest class provides an interface for MediaLive DeleteMultiplex requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteMultiplex
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMultiplexRequest::DeleteMultiplexRequest(const DeleteMultiplexRequest &other)
    : MediaLiveRequest(new DeleteMultiplexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMultiplexRequest object.
 */
DeleteMultiplexRequest::DeleteMultiplexRequest()
    : MediaLiveRequest(new DeleteMultiplexRequestPrivate(MediaLiveRequest::DeleteMultiplexAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMultiplexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMultiplexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMultiplexRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMultiplexResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DeleteMultiplexRequestPrivate
 * \brief The DeleteMultiplexRequestPrivate class provides private implementation for DeleteMultiplexRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteMultiplexRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DeleteMultiplexRequestPrivate::DeleteMultiplexRequestPrivate(
    const MediaLiveRequest::Action action, DeleteMultiplexRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMultiplexRequest
 * class' copy constructor.
 */
DeleteMultiplexRequestPrivate::DeleteMultiplexRequestPrivate(
    const DeleteMultiplexRequestPrivate &other, DeleteMultiplexRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
