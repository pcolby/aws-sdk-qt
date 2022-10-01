// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatechannelflowrequest.h"
#include "associatechannelflowrequest_p.h"
#include "associatechannelflowresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::AssociateChannelFlowRequest
 * \brief The AssociateChannelFlowRequest class provides an interface for ChimeSdkMessaging AssociateChannelFlow requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::associateChannelFlow
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateChannelFlowRequest::AssociateChannelFlowRequest(const AssociateChannelFlowRequest &other)
    : ChimeSdkMessagingRequest(new AssociateChannelFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateChannelFlowRequest object.
 */
AssociateChannelFlowRequest::AssociateChannelFlowRequest()
    : ChimeSdkMessagingRequest(new AssociateChannelFlowRequestPrivate(ChimeSdkMessagingRequest::AssociateChannelFlowAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateChannelFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateChannelFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateChannelFlowRequest::response(QNetworkReply * const reply) const
{
    return new AssociateChannelFlowResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::AssociateChannelFlowRequestPrivate
 * \brief The AssociateChannelFlowRequestPrivate class provides private implementation for AssociateChannelFlowRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a AssociateChannelFlowRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
AssociateChannelFlowRequestPrivate::AssociateChannelFlowRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, AssociateChannelFlowRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateChannelFlowRequest
 * class' copy constructor.
 */
AssociateChannelFlowRequestPrivate::AssociateChannelFlowRequestPrivate(
    const AssociateChannelFlowRequestPrivate &other, AssociateChannelFlowRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
