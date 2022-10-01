// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatechannelflowrequest.h"
#include "disassociatechannelflowrequest_p.h"
#include "disassociatechannelflowresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DisassociateChannelFlowRequest
 * \brief The DisassociateChannelFlowRequest class provides an interface for ChimeSdkMessaging DisassociateChannelFlow requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::disassociateChannelFlow
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateChannelFlowRequest::DisassociateChannelFlowRequest(const DisassociateChannelFlowRequest &other)
    : ChimeSdkMessagingRequest(new DisassociateChannelFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateChannelFlowRequest object.
 */
DisassociateChannelFlowRequest::DisassociateChannelFlowRequest()
    : ChimeSdkMessagingRequest(new DisassociateChannelFlowRequestPrivate(ChimeSdkMessagingRequest::DisassociateChannelFlowAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateChannelFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateChannelFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateChannelFlowRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateChannelFlowResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::DisassociateChannelFlowRequestPrivate
 * \brief The DisassociateChannelFlowRequestPrivate class provides private implementation for DisassociateChannelFlowRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DisassociateChannelFlowRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
DisassociateChannelFlowRequestPrivate::DisassociateChannelFlowRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, DisassociateChannelFlowRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateChannelFlowRequest
 * class' copy constructor.
 */
DisassociateChannelFlowRequestPrivate::DisassociateChannelFlowRequestPrivate(
    const DisassociateChannelFlowRequestPrivate &other, DisassociateChannelFlowRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
