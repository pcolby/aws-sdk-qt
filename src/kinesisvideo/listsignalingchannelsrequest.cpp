// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsignalingchannelsrequest.h"
#include "listsignalingchannelsrequest_p.h"
#include "listsignalingchannelsresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::ListSignalingChannelsRequest
 * \brief The ListSignalingChannelsRequest class provides an interface for KinesisVideo ListSignalingChannels requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::listSignalingChannels
 */

/*!
 * Constructs a copy of \a other.
 */
ListSignalingChannelsRequest::ListSignalingChannelsRequest(const ListSignalingChannelsRequest &other)
    : KinesisVideoRequest(new ListSignalingChannelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSignalingChannelsRequest object.
 */
ListSignalingChannelsRequest::ListSignalingChannelsRequest()
    : KinesisVideoRequest(new ListSignalingChannelsRequestPrivate(KinesisVideoRequest::ListSignalingChannelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSignalingChannelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSignalingChannelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSignalingChannelsRequest::response(QNetworkReply * const reply) const
{
    return new ListSignalingChannelsResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::ListSignalingChannelsRequestPrivate
 * \brief The ListSignalingChannelsRequestPrivate class provides private implementation for ListSignalingChannelsRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a ListSignalingChannelsRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
ListSignalingChannelsRequestPrivate::ListSignalingChannelsRequestPrivate(
    const KinesisVideoRequest::Action action, ListSignalingChannelsRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSignalingChannelsRequest
 * class' copy constructor.
 */
ListSignalingChannelsRequestPrivate::ListSignalingChannelsRequestPrivate(
    const ListSignalingChannelsRequestPrivate &other, ListSignalingChannelsRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
