// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeappinstanceuserrequest.h"
#include "describeappinstanceuserrequest_p.h"
#include "describeappinstanceuserresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceUserRequest
 * \brief The DescribeAppInstanceUserRequest class provides an interface for ChimeSdkIdentity DescribeAppInstanceUser requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::describeAppInstanceUser
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAppInstanceUserRequest::DescribeAppInstanceUserRequest(const DescribeAppInstanceUserRequest &other)
    : ChimeSdkIdentityRequest(new DescribeAppInstanceUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAppInstanceUserRequest object.
 */
DescribeAppInstanceUserRequest::DescribeAppInstanceUserRequest()
    : ChimeSdkIdentityRequest(new DescribeAppInstanceUserRequestPrivate(ChimeSdkIdentityRequest::DescribeAppInstanceUserAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAppInstanceUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAppInstanceUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAppInstanceUserRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAppInstanceUserResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceUserRequestPrivate
 * \brief The DescribeAppInstanceUserRequestPrivate class provides private implementation for DescribeAppInstanceUserRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DescribeAppInstanceUserRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
DescribeAppInstanceUserRequestPrivate::DescribeAppInstanceUserRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, DescribeAppInstanceUserRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAppInstanceUserRequest
 * class' copy constructor.
 */
DescribeAppInstanceUserRequestPrivate::DescribeAppInstanceUserRequestPrivate(
    const DescribeAppInstanceUserRequestPrivate &other, DescribeAppInstanceUserRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
