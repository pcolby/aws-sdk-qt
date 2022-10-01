// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelflowrequest.h"
#include "describechannelflowrequest_p.h"
#include "describechannelflowresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelFlowRequest
 * \brief The DescribeChannelFlowRequest class provides an interface for ChimeSdkMessaging DescribeChannelFlow requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::describeChannelFlow
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeChannelFlowRequest::DescribeChannelFlowRequest(const DescribeChannelFlowRequest &other)
    : ChimeSdkMessagingRequest(new DescribeChannelFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeChannelFlowRequest object.
 */
DescribeChannelFlowRequest::DescribeChannelFlowRequest()
    : ChimeSdkMessagingRequest(new DescribeChannelFlowRequestPrivate(ChimeSdkMessagingRequest::DescribeChannelFlowAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeChannelFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeChannelFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeChannelFlowRequest::response(QNetworkReply * const reply) const
{
    return new DescribeChannelFlowResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelFlowRequestPrivate
 * \brief The DescribeChannelFlowRequestPrivate class provides private implementation for DescribeChannelFlowRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DescribeChannelFlowRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
DescribeChannelFlowRequestPrivate::DescribeChannelFlowRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, DescribeChannelFlowRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeChannelFlowRequest
 * class' copy constructor.
 */
DescribeChannelFlowRequestPrivate::DescribeChannelFlowRequestPrivate(
    const DescribeChannelFlowRequestPrivate &other, DescribeChannelFlowRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
