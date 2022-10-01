// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createchannelmoderatorrequest.h"
#include "createchannelmoderatorrequest_p.h"
#include "createchannelmoderatorresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::CreateChannelModeratorRequest
 * \brief The CreateChannelModeratorRequest class provides an interface for ChimeSdkMessaging CreateChannelModerator requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::createChannelModerator
 */

/*!
 * Constructs a copy of \a other.
 */
CreateChannelModeratorRequest::CreateChannelModeratorRequest(const CreateChannelModeratorRequest &other)
    : ChimeSdkMessagingRequest(new CreateChannelModeratorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateChannelModeratorRequest object.
 */
CreateChannelModeratorRequest::CreateChannelModeratorRequest()
    : ChimeSdkMessagingRequest(new CreateChannelModeratorRequestPrivate(ChimeSdkMessagingRequest::CreateChannelModeratorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateChannelModeratorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateChannelModeratorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateChannelModeratorRequest::response(QNetworkReply * const reply) const
{
    return new CreateChannelModeratorResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::CreateChannelModeratorRequestPrivate
 * \brief The CreateChannelModeratorRequestPrivate class provides private implementation for CreateChannelModeratorRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a CreateChannelModeratorRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
CreateChannelModeratorRequestPrivate::CreateChannelModeratorRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, CreateChannelModeratorRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateChannelModeratorRequest
 * class' copy constructor.
 */
CreateChannelModeratorRequestPrivate::CreateChannelModeratorRequestPrivate(
    const CreateChannelModeratorRequestPrivate &other, CreateChannelModeratorRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
