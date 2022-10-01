// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletechannelrequest.h"
#include "deletechannelrequest_p.h"
#include "deletechannelresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DeleteChannelRequest
 * \brief The DeleteChannelRequest class provides an interface for ChimeSdkMessaging DeleteChannel requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::deleteChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteChannelRequest::DeleteChannelRequest(const DeleteChannelRequest &other)
    : ChimeSdkMessagingRequest(new DeleteChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteChannelRequest object.
 */
DeleteChannelRequest::DeleteChannelRequest()
    : ChimeSdkMessagingRequest(new DeleteChannelRequestPrivate(ChimeSdkMessagingRequest::DeleteChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteChannelResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::DeleteChannelRequestPrivate
 * \brief The DeleteChannelRequestPrivate class provides private implementation for DeleteChannelRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DeleteChannelRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
DeleteChannelRequestPrivate::DeleteChannelRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, DeleteChannelRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteChannelRequest
 * class' copy constructor.
 */
DeleteChannelRequestPrivate::DeleteChannelRequestPrivate(
    const DeleteChannelRequestPrivate &other, DeleteChannelRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
