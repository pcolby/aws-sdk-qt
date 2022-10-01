// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappinstancerequest.h"
#include "deleteappinstancerequest_p.h"
#include "deleteappinstanceresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DeleteAppInstanceRequest
 * \brief The DeleteAppInstanceRequest class provides an interface for ChimeSdkIdentity DeleteAppInstance requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::deleteAppInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAppInstanceRequest::DeleteAppInstanceRequest(const DeleteAppInstanceRequest &other)
    : ChimeSdkIdentityRequest(new DeleteAppInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAppInstanceRequest object.
 */
DeleteAppInstanceRequest::DeleteAppInstanceRequest()
    : ChimeSdkIdentityRequest(new DeleteAppInstanceRequestPrivate(ChimeSdkIdentityRequest::DeleteAppInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAppInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAppInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAppInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::DeleteAppInstanceRequestPrivate
 * \brief The DeleteAppInstanceRequestPrivate class provides private implementation for DeleteAppInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DeleteAppInstanceRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
DeleteAppInstanceRequestPrivate::DeleteAppInstanceRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, DeleteAppInstanceRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppInstanceRequest
 * class' copy constructor.
 */
DeleteAppInstanceRequestPrivate::DeleteAppInstanceRequestPrivate(
    const DeleteAppInstanceRequestPrivate &other, DeleteAppInstanceRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
