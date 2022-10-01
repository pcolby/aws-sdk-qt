// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletechannelbanrequest.h"
#include "deletechannelbanrequest_p.h"
#include "deletechannelbanresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DeleteChannelBanRequest
 * \brief The DeleteChannelBanRequest class provides an interface for ChimeSdkMessaging DeleteChannelBan requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::deleteChannelBan
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteChannelBanRequest::DeleteChannelBanRequest(const DeleteChannelBanRequest &other)
    : ChimeSdkMessagingRequest(new DeleteChannelBanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteChannelBanRequest object.
 */
DeleteChannelBanRequest::DeleteChannelBanRequest()
    : ChimeSdkMessagingRequest(new DeleteChannelBanRequestPrivate(ChimeSdkMessagingRequest::DeleteChannelBanAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteChannelBanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteChannelBanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteChannelBanRequest::response(QNetworkReply * const reply) const
{
    return new DeleteChannelBanResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::DeleteChannelBanRequestPrivate
 * \brief The DeleteChannelBanRequestPrivate class provides private implementation for DeleteChannelBanRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DeleteChannelBanRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
DeleteChannelBanRequestPrivate::DeleteChannelBanRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, DeleteChannelBanRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteChannelBanRequest
 * class' copy constructor.
 */
DeleteChannelBanRequestPrivate::DeleteChannelBanRequestPrivate(
    const DeleteChannelBanRequestPrivate &other, DeleteChannelBanRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
