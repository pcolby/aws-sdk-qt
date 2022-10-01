// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelmoderatorrequest.h"
#include "describechannelmoderatorrequest_p.h"
#include "describechannelmoderatorresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelModeratorRequest
 * \brief The DescribeChannelModeratorRequest class provides an interface for ChimeSdkMessaging DescribeChannelModerator requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::describeChannelModerator
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeChannelModeratorRequest::DescribeChannelModeratorRequest(const DescribeChannelModeratorRequest &other)
    : ChimeSdkMessagingRequest(new DescribeChannelModeratorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeChannelModeratorRequest object.
 */
DescribeChannelModeratorRequest::DescribeChannelModeratorRequest()
    : ChimeSdkMessagingRequest(new DescribeChannelModeratorRequestPrivate(ChimeSdkMessagingRequest::DescribeChannelModeratorAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeChannelModeratorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeChannelModeratorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeChannelModeratorRequest::response(QNetworkReply * const reply) const
{
    return new DescribeChannelModeratorResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelModeratorRequestPrivate
 * \brief The DescribeChannelModeratorRequestPrivate class provides private implementation for DescribeChannelModeratorRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DescribeChannelModeratorRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
DescribeChannelModeratorRequestPrivate::DescribeChannelModeratorRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, DescribeChannelModeratorRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeChannelModeratorRequest
 * class' copy constructor.
 */
DescribeChannelModeratorRequestPrivate::DescribeChannelModeratorRequestPrivate(
    const DescribeChannelModeratorRequestPrivate &other, DescribeChannelModeratorRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
