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
