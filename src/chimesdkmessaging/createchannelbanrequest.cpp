// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createchannelbanrequest.h"
#include "createchannelbanrequest_p.h"
#include "createchannelbanresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::CreateChannelBanRequest
 * \brief The CreateChannelBanRequest class provides an interface for ChimeSdkMessaging CreateChannelBan requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::createChannelBan
 */

/*!
 * Constructs a copy of \a other.
 */
CreateChannelBanRequest::CreateChannelBanRequest(const CreateChannelBanRequest &other)
    : ChimeSdkMessagingRequest(new CreateChannelBanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateChannelBanRequest object.
 */
CreateChannelBanRequest::CreateChannelBanRequest()
    : ChimeSdkMessagingRequest(new CreateChannelBanRequestPrivate(ChimeSdkMessagingRequest::CreateChannelBanAction, this))
{

}

/*!
 * \reimp
 */
bool CreateChannelBanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateChannelBanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateChannelBanRequest::response(QNetworkReply * const reply) const
{
    return new CreateChannelBanResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::CreateChannelBanRequestPrivate
 * \brief The CreateChannelBanRequestPrivate class provides private implementation for CreateChannelBanRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a CreateChannelBanRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
CreateChannelBanRequestPrivate::CreateChannelBanRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, CreateChannelBanRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateChannelBanRequest
 * class' copy constructor.
 */
CreateChannelBanRequestPrivate::CreateChannelBanRequestPrivate(
    const CreateChannelBanRequestPrivate &other, CreateChannelBanRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
