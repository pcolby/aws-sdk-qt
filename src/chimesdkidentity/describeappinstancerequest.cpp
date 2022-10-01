/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeappinstancerequest.h"
#include "describeappinstancerequest_p.h"
#include "describeappinstanceresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceRequest
 * \brief The DescribeAppInstanceRequest class provides an interface for ChimeSdkIdentity DescribeAppInstance requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::describeAppInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAppInstanceRequest::DescribeAppInstanceRequest(const DescribeAppInstanceRequest &other)
    : ChimeSdkIdentityRequest(new DescribeAppInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAppInstanceRequest object.
 */
DescribeAppInstanceRequest::DescribeAppInstanceRequest()
    : ChimeSdkIdentityRequest(new DescribeAppInstanceRequestPrivate(ChimeSdkIdentityRequest::DescribeAppInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAppInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAppInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAppInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAppInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceRequestPrivate
 * \brief The DescribeAppInstanceRequestPrivate class provides private implementation for DescribeAppInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DescribeAppInstanceRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
DescribeAppInstanceRequestPrivate::DescribeAppInstanceRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, DescribeAppInstanceRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAppInstanceRequest
 * class' copy constructor.
 */
DescribeAppInstanceRequestPrivate::DescribeAppInstanceRequestPrivate(
    const DescribeAppInstanceRequestPrivate &other, DescribeAppInstanceRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
