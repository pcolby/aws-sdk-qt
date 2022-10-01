// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateappinstancerequest.h"
#include "updateappinstancerequest_p.h"
#include "updateappinstanceresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::UpdateAppInstanceRequest
 * \brief The UpdateAppInstanceRequest class provides an interface for ChimeSdkIdentity UpdateAppInstance requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::updateAppInstance
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAppInstanceRequest::UpdateAppInstanceRequest(const UpdateAppInstanceRequest &other)
    : ChimeSdkIdentityRequest(new UpdateAppInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAppInstanceRequest object.
 */
UpdateAppInstanceRequest::UpdateAppInstanceRequest()
    : ChimeSdkIdentityRequest(new UpdateAppInstanceRequestPrivate(ChimeSdkIdentityRequest::UpdateAppInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAppInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAppInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAppInstanceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAppInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::UpdateAppInstanceRequestPrivate
 * \brief The UpdateAppInstanceRequestPrivate class provides private implementation for UpdateAppInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a UpdateAppInstanceRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
UpdateAppInstanceRequestPrivate::UpdateAppInstanceRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, UpdateAppInstanceRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAppInstanceRequest
 * class' copy constructor.
 */
UpdateAppInstanceRequestPrivate::UpdateAppInstanceRequestPrivate(
    const UpdateAppInstanceRequestPrivate &other, UpdateAppInstanceRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
