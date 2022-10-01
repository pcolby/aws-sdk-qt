// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerappinstanceuserendpointrequest.h"
#include "registerappinstanceuserendpointrequest_p.h"
#include "registerappinstanceuserendpointresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::RegisterAppInstanceUserEndpointRequest
 * \brief The RegisterAppInstanceUserEndpointRequest class provides an interface for ChimeSdkIdentity RegisterAppInstanceUserEndpoint requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::registerAppInstanceUserEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterAppInstanceUserEndpointRequest::RegisterAppInstanceUserEndpointRequest(const RegisterAppInstanceUserEndpointRequest &other)
    : ChimeSdkIdentityRequest(new RegisterAppInstanceUserEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterAppInstanceUserEndpointRequest object.
 */
RegisterAppInstanceUserEndpointRequest::RegisterAppInstanceUserEndpointRequest()
    : ChimeSdkIdentityRequest(new RegisterAppInstanceUserEndpointRequestPrivate(ChimeSdkIdentityRequest::RegisterAppInstanceUserEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterAppInstanceUserEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterAppInstanceUserEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterAppInstanceUserEndpointRequest::response(QNetworkReply * const reply) const
{
    return new RegisterAppInstanceUserEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::RegisterAppInstanceUserEndpointRequestPrivate
 * \brief The RegisterAppInstanceUserEndpointRequestPrivate class provides private implementation for RegisterAppInstanceUserEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a RegisterAppInstanceUserEndpointRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
RegisterAppInstanceUserEndpointRequestPrivate::RegisterAppInstanceUserEndpointRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, RegisterAppInstanceUserEndpointRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterAppInstanceUserEndpointRequest
 * class' copy constructor.
 */
RegisterAppInstanceUserEndpointRequestPrivate::RegisterAppInstanceUserEndpointRequestPrivate(
    const RegisterAppInstanceUserEndpointRequestPrivate &other, RegisterAppInstanceUserEndpointRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
