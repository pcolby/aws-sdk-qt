// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappinstanceuserrequest.h"
#include "deleteappinstanceuserrequest_p.h"
#include "deleteappinstanceuserresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DeleteAppInstanceUserRequest
 * \brief The DeleteAppInstanceUserRequest class provides an interface for ChimeSdkIdentity DeleteAppInstanceUser requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::deleteAppInstanceUser
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAppInstanceUserRequest::DeleteAppInstanceUserRequest(const DeleteAppInstanceUserRequest &other)
    : ChimeSdkIdentityRequest(new DeleteAppInstanceUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAppInstanceUserRequest object.
 */
DeleteAppInstanceUserRequest::DeleteAppInstanceUserRequest()
    : ChimeSdkIdentityRequest(new DeleteAppInstanceUserRequestPrivate(ChimeSdkIdentityRequest::DeleteAppInstanceUserAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAppInstanceUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAppInstanceUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAppInstanceUserRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppInstanceUserResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::DeleteAppInstanceUserRequestPrivate
 * \brief The DeleteAppInstanceUserRequestPrivate class provides private implementation for DeleteAppInstanceUserRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DeleteAppInstanceUserRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
DeleteAppInstanceUserRequestPrivate::DeleteAppInstanceUserRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, DeleteAppInstanceUserRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppInstanceUserRequest
 * class' copy constructor.
 */
DeleteAppInstanceUserRequestPrivate::DeleteAppInstanceUserRequestPrivate(
    const DeleteAppInstanceUserRequestPrivate &other, DeleteAppInstanceUserRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
