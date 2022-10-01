// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelmoderatedbyappinstanceuserrequest.h"
#include "describechannelmoderatedbyappinstanceuserrequest_p.h"
#include "describechannelmoderatedbyappinstanceuserresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelModeratedByAppInstanceUserRequest
 * \brief The DescribeChannelModeratedByAppInstanceUserRequest class provides an interface for ChimeSdkMessaging DescribeChannelModeratedByAppInstanceUser requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::describeChannelModeratedByAppInstanceUser
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeChannelModeratedByAppInstanceUserRequest::DescribeChannelModeratedByAppInstanceUserRequest(const DescribeChannelModeratedByAppInstanceUserRequest &other)
    : ChimeSdkMessagingRequest(new DescribeChannelModeratedByAppInstanceUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeChannelModeratedByAppInstanceUserRequest object.
 */
DescribeChannelModeratedByAppInstanceUserRequest::DescribeChannelModeratedByAppInstanceUserRequest()
    : ChimeSdkMessagingRequest(new DescribeChannelModeratedByAppInstanceUserRequestPrivate(ChimeSdkMessagingRequest::DescribeChannelModeratedByAppInstanceUserAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeChannelModeratedByAppInstanceUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeChannelModeratedByAppInstanceUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeChannelModeratedByAppInstanceUserRequest::response(QNetworkReply * const reply) const
{
    return new DescribeChannelModeratedByAppInstanceUserResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelModeratedByAppInstanceUserRequestPrivate
 * \brief The DescribeChannelModeratedByAppInstanceUserRequestPrivate class provides private implementation for DescribeChannelModeratedByAppInstanceUserRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DescribeChannelModeratedByAppInstanceUserRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
DescribeChannelModeratedByAppInstanceUserRequestPrivate::DescribeChannelModeratedByAppInstanceUserRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, DescribeChannelModeratedByAppInstanceUserRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeChannelModeratedByAppInstanceUserRequest
 * class' copy constructor.
 */
DescribeChannelModeratedByAppInstanceUserRequestPrivate::DescribeChannelModeratedByAppInstanceUserRequestPrivate(
    const DescribeChannelModeratedByAppInstanceUserRequestPrivate &other, DescribeChannelModeratedByAppInstanceUserRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
