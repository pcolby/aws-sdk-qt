// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeappinstanceuserendpointrequest.h"
#include "describeappinstanceuserendpointrequest_p.h"
#include "describeappinstanceuserendpointresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceUserEndpointRequest
 * \brief The DescribeAppInstanceUserEndpointRequest class provides an interface for ChimeSdkIdentity DescribeAppInstanceUserEndpoint requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::describeAppInstanceUserEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAppInstanceUserEndpointRequest::DescribeAppInstanceUserEndpointRequest(const DescribeAppInstanceUserEndpointRequest &other)
    : ChimeSdkIdentityRequest(new DescribeAppInstanceUserEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAppInstanceUserEndpointRequest object.
 */
DescribeAppInstanceUserEndpointRequest::DescribeAppInstanceUserEndpointRequest()
    : ChimeSdkIdentityRequest(new DescribeAppInstanceUserEndpointRequestPrivate(ChimeSdkIdentityRequest::DescribeAppInstanceUserEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAppInstanceUserEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAppInstanceUserEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAppInstanceUserEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAppInstanceUserEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::DescribeAppInstanceUserEndpointRequestPrivate
 * \brief The DescribeAppInstanceUserEndpointRequestPrivate class provides private implementation for DescribeAppInstanceUserEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DescribeAppInstanceUserEndpointRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
DescribeAppInstanceUserEndpointRequestPrivate::DescribeAppInstanceUserEndpointRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, DescribeAppInstanceUserEndpointRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAppInstanceUserEndpointRequest
 * class' copy constructor.
 */
DescribeAppInstanceUserEndpointRequestPrivate::DescribeAppInstanceUserEndpointRequestPrivate(
    const DescribeAppInstanceUserEndpointRequestPrivate &other, DescribeAppInstanceUserEndpointRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
