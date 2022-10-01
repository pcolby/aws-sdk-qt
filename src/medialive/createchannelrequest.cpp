// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createchannelrequest.h"
#include "createchannelrequest_p.h"
#include "createchannelresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateChannelRequest
 * \brief The CreateChannelRequest class provides an interface for MediaLive CreateChannel requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createChannel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateChannelRequest::CreateChannelRequest(const CreateChannelRequest &other)
    : MediaLiveRequest(new CreateChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateChannelRequest object.
 */
CreateChannelRequest::CreateChannelRequest()
    : MediaLiveRequest(new CreateChannelRequestPrivate(MediaLiveRequest::CreateChannelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateChannelRequest::response(QNetworkReply * const reply) const
{
    return new CreateChannelResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::CreateChannelRequestPrivate
 * \brief The CreateChannelRequestPrivate class provides private implementation for CreateChannelRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreateChannelRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
CreateChannelRequestPrivate::CreateChannelRequestPrivate(
    const MediaLiveRequest::Action action, CreateChannelRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateChannelRequest
 * class' copy constructor.
 */
CreateChannelRequestPrivate::CreateChannelRequestPrivate(
    const CreateChannelRequestPrivate &other, CreateChannelRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
