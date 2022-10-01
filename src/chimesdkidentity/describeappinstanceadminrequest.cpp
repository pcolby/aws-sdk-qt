// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeappinstanceadminrequest.h"
#include "describeappinstanceadminrequest_p.h"
#include "describeappinstanceadminresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceAdminRequest
 * \brief The DescribeAppInstanceAdminRequest class provides an interface for ChimeSdkIdentity DescribeAppInstanceAdmin requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::describeAppInstanceAdmin
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAppInstanceAdminRequest::DescribeAppInstanceAdminRequest(const DescribeAppInstanceAdminRequest &other)
    : ChimeSdkIdentityRequest(new DescribeAppInstanceAdminRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAppInstanceAdminRequest object.
 */
DescribeAppInstanceAdminRequest::DescribeAppInstanceAdminRequest()
    : ChimeSdkIdentityRequest(new DescribeAppInstanceAdminRequestPrivate(ChimeSdkIdentityRequest::DescribeAppInstanceAdminAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAppInstanceAdminRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAppInstanceAdminResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAppInstanceAdminRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAppInstanceAdminResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceAdminRequestPrivate
 * \brief The DescribeAppInstanceAdminRequestPrivate class provides private implementation for DescribeAppInstanceAdminRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DescribeAppInstanceAdminRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
DescribeAppInstanceAdminRequestPrivate::DescribeAppInstanceAdminRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, DescribeAppInstanceAdminRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAppInstanceAdminRequest
 * class' copy constructor.
 */
DescribeAppInstanceAdminRequestPrivate::DescribeAppInstanceAdminRequestPrivate(
    const DescribeAppInstanceAdminRequestPrivate &other, DescribeAppInstanceAdminRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
