// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelmembershipforappinstanceuserrequest.h"
#include "describechannelmembershipforappinstanceuserrequest_p.h"
#include "describechannelmembershipforappinstanceuserresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelMembershipForAppInstanceUserRequest
 * \brief The DescribeChannelMembershipForAppInstanceUserRequest class provides an interface for ChimeSdkMessaging DescribeChannelMembershipForAppInstanceUser requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::describeChannelMembershipForAppInstanceUser
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeChannelMembershipForAppInstanceUserRequest::DescribeChannelMembershipForAppInstanceUserRequest(const DescribeChannelMembershipForAppInstanceUserRequest &other)
    : ChimeSdkMessagingRequest(new DescribeChannelMembershipForAppInstanceUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeChannelMembershipForAppInstanceUserRequest object.
 */
DescribeChannelMembershipForAppInstanceUserRequest::DescribeChannelMembershipForAppInstanceUserRequest()
    : ChimeSdkMessagingRequest(new DescribeChannelMembershipForAppInstanceUserRequestPrivate(ChimeSdkMessagingRequest::DescribeChannelMembershipForAppInstanceUserAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeChannelMembershipForAppInstanceUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeChannelMembershipForAppInstanceUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeChannelMembershipForAppInstanceUserRequest::response(QNetworkReply * const reply) const
{
    return new DescribeChannelMembershipForAppInstanceUserResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::DescribeChannelMembershipForAppInstanceUserRequestPrivate
 * \brief The DescribeChannelMembershipForAppInstanceUserRequestPrivate class provides private implementation for DescribeChannelMembershipForAppInstanceUserRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DescribeChannelMembershipForAppInstanceUserRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
DescribeChannelMembershipForAppInstanceUserRequestPrivate::DescribeChannelMembershipForAppInstanceUserRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, DescribeChannelMembershipForAppInstanceUserRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeChannelMembershipForAppInstanceUserRequest
 * class' copy constructor.
 */
DescribeChannelMembershipForAppInstanceUserRequestPrivate::DescribeChannelMembershipForAppInstanceUserRequestPrivate(
    const DescribeChannelMembershipForAppInstanceUserRequestPrivate &other, DescribeChannelMembershipForAppInstanceUserRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
