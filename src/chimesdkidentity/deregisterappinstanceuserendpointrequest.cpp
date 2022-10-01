// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregisterappinstanceuserendpointrequest.h"
#include "deregisterappinstanceuserendpointrequest_p.h"
#include "deregisterappinstanceuserendpointresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DeregisterAppInstanceUserEndpointRequest
 * \brief The DeregisterAppInstanceUserEndpointRequest class provides an interface for ChimeSdkIdentity DeregisterAppInstanceUserEndpoint requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::deregisterAppInstanceUserEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterAppInstanceUserEndpointRequest::DeregisterAppInstanceUserEndpointRequest(const DeregisterAppInstanceUserEndpointRequest &other)
    : ChimeSdkIdentityRequest(new DeregisterAppInstanceUserEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterAppInstanceUserEndpointRequest object.
 */
DeregisterAppInstanceUserEndpointRequest::DeregisterAppInstanceUserEndpointRequest()
    : ChimeSdkIdentityRequest(new DeregisterAppInstanceUserEndpointRequestPrivate(ChimeSdkIdentityRequest::DeregisterAppInstanceUserEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterAppInstanceUserEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterAppInstanceUserEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterAppInstanceUserEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterAppInstanceUserEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::DeregisterAppInstanceUserEndpointRequestPrivate
 * \brief The DeregisterAppInstanceUserEndpointRequestPrivate class provides private implementation for DeregisterAppInstanceUserEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DeregisterAppInstanceUserEndpointRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
DeregisterAppInstanceUserEndpointRequestPrivate::DeregisterAppInstanceUserEndpointRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, DeregisterAppInstanceUserEndpointRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterAppInstanceUserEndpointRequest
 * class' copy constructor.
 */
DeregisterAppInstanceUserEndpointRequestPrivate::DeregisterAppInstanceUserEndpointRequestPrivate(
    const DeregisterAppInstanceUserEndpointRequestPrivate &other, DeregisterAppInstanceUserEndpointRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
