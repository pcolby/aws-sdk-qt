// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateappinstanceuserendpointrequest.h"
#include "updateappinstanceuserendpointrequest_p.h"
#include "updateappinstanceuserendpointresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::UpdateAppInstanceUserEndpointRequest
 * \brief The UpdateAppInstanceUserEndpointRequest class provides an interface for ChimeSdkIdentity UpdateAppInstanceUserEndpoint requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::updateAppInstanceUserEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAppInstanceUserEndpointRequest::UpdateAppInstanceUserEndpointRequest(const UpdateAppInstanceUserEndpointRequest &other)
    : ChimeSdkIdentityRequest(new UpdateAppInstanceUserEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAppInstanceUserEndpointRequest object.
 */
UpdateAppInstanceUserEndpointRequest::UpdateAppInstanceUserEndpointRequest()
    : ChimeSdkIdentityRequest(new UpdateAppInstanceUserEndpointRequestPrivate(ChimeSdkIdentityRequest::UpdateAppInstanceUserEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAppInstanceUserEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAppInstanceUserEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAppInstanceUserEndpointRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAppInstanceUserEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::UpdateAppInstanceUserEndpointRequestPrivate
 * \brief The UpdateAppInstanceUserEndpointRequestPrivate class provides private implementation for UpdateAppInstanceUserEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a UpdateAppInstanceUserEndpointRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
UpdateAppInstanceUserEndpointRequestPrivate::UpdateAppInstanceUserEndpointRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, UpdateAppInstanceUserEndpointRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAppInstanceUserEndpointRequest
 * class' copy constructor.
 */
UpdateAppInstanceUserEndpointRequestPrivate::UpdateAppInstanceUserEndpointRequestPrivate(
    const UpdateAppInstanceUserEndpointRequestPrivate &other, UpdateAppInstanceUserEndpointRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
