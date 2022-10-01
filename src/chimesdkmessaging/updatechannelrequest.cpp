// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatechannelrequest.h"
#include "updatechannelrequest_p.h"
#include "updatechannelresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::UpdateChannelRequest
 * \brief The UpdateChannelRequest class provides an interface for ChimeSdkMessaging UpdateChannel requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::updateChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateChannelRequest::UpdateChannelRequest(const UpdateChannelRequest &other)
    : ChimeSdkMessagingRequest(new UpdateChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateChannelRequest object.
 */
UpdateChannelRequest::UpdateChannelRequest()
    : ChimeSdkMessagingRequest(new UpdateChannelRequestPrivate(ChimeSdkMessagingRequest::UpdateChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateChannelResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::UpdateChannelRequestPrivate
 * \brief The UpdateChannelRequestPrivate class provides private implementation for UpdateChannelRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a UpdateChannelRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
UpdateChannelRequestPrivate::UpdateChannelRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, UpdateChannelRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateChannelRequest
 * class' copy constructor.
 */
UpdateChannelRequestPrivate::UpdateChannelRequestPrivate(
    const UpdateChannelRequestPrivate &other, UpdateChannelRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
