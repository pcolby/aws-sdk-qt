// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateappinstanceuserrequest.h"
#include "updateappinstanceuserrequest_p.h"
#include "updateappinstanceuserresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::UpdateAppInstanceUserRequest
 * \brief The UpdateAppInstanceUserRequest class provides an interface for ChimeSdkIdentity UpdateAppInstanceUser requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::updateAppInstanceUser
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAppInstanceUserRequest::UpdateAppInstanceUserRequest(const UpdateAppInstanceUserRequest &other)
    : ChimeSdkIdentityRequest(new UpdateAppInstanceUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAppInstanceUserRequest object.
 */
UpdateAppInstanceUserRequest::UpdateAppInstanceUserRequest()
    : ChimeSdkIdentityRequest(new UpdateAppInstanceUserRequestPrivate(ChimeSdkIdentityRequest::UpdateAppInstanceUserAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAppInstanceUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAppInstanceUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAppInstanceUserRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAppInstanceUserResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::UpdateAppInstanceUserRequestPrivate
 * \brief The UpdateAppInstanceUserRequestPrivate class provides private implementation for UpdateAppInstanceUserRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a UpdateAppInstanceUserRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
UpdateAppInstanceUserRequestPrivate::UpdateAppInstanceUserRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, UpdateAppInstanceUserRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAppInstanceUserRequest
 * class' copy constructor.
 */
UpdateAppInstanceUserRequestPrivate::UpdateAppInstanceUserRequestPrivate(
    const UpdateAppInstanceUserRequestPrivate &other, UpdateAppInstanceUserRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
