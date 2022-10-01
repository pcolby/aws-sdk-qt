// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteappinstanceadminrequest.h"
#include "deleteappinstanceadminrequest_p.h"
#include "deleteappinstanceadminresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::DeleteAppInstanceAdminRequest
 * \brief The DeleteAppInstanceAdminRequest class provides an interface for ChimeSdkIdentity DeleteAppInstanceAdmin requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::deleteAppInstanceAdmin
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAppInstanceAdminRequest::DeleteAppInstanceAdminRequest(const DeleteAppInstanceAdminRequest &other)
    : ChimeSdkIdentityRequest(new DeleteAppInstanceAdminRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAppInstanceAdminRequest object.
 */
DeleteAppInstanceAdminRequest::DeleteAppInstanceAdminRequest()
    : ChimeSdkIdentityRequest(new DeleteAppInstanceAdminRequestPrivate(ChimeSdkIdentityRequest::DeleteAppInstanceAdminAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAppInstanceAdminRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAppInstanceAdminResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAppInstanceAdminRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppInstanceAdminResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::DeleteAppInstanceAdminRequestPrivate
 * \brief The DeleteAppInstanceAdminRequestPrivate class provides private implementation for DeleteAppInstanceAdminRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a DeleteAppInstanceAdminRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
DeleteAppInstanceAdminRequestPrivate::DeleteAppInstanceAdminRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, DeleteAppInstanceAdminRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppInstanceAdminRequest
 * class' copy constructor.
 */
DeleteAppInstanceAdminRequestPrivate::DeleteAppInstanceAdminRequestPrivate(
    const DeleteAppInstanceAdminRequestPrivate &other, DeleteAppInstanceAdminRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
