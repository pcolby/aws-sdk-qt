// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createchannelrequest.h"
#include "createchannelrequest_p.h"
#include "createchannelresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::CreateChannelRequest
 * \brief The CreateChannelRequest class provides an interface for ChimeSdkMessaging CreateChannel requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::createChannel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateChannelRequest::CreateChannelRequest(const CreateChannelRequest &other)
    : ChimeSdkMessagingRequest(new CreateChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateChannelRequest object.
 */
CreateChannelRequest::CreateChannelRequest()
    : ChimeSdkMessagingRequest(new CreateChannelRequestPrivate(ChimeSdkMessagingRequest::CreateChannelAction, this))
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
 * \class QtAws::ChimeSdkMessaging::CreateChannelRequestPrivate
 * \brief The CreateChannelRequestPrivate class provides private implementation for CreateChannelRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a CreateChannelRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
CreateChannelRequestPrivate::CreateChannelRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, CreateChannelRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
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
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
