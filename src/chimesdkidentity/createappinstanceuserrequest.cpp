// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createappinstanceuserrequest.h"
#include "createappinstanceuserrequest_p.h"
#include "createappinstanceuserresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::CreateAppInstanceUserRequest
 * \brief The CreateAppInstanceUserRequest class provides an interface for ChimeSdkIdentity CreateAppInstanceUser requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::createAppInstanceUser
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAppInstanceUserRequest::CreateAppInstanceUserRequest(const CreateAppInstanceUserRequest &other)
    : ChimeSdkIdentityRequest(new CreateAppInstanceUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAppInstanceUserRequest object.
 */
CreateAppInstanceUserRequest::CreateAppInstanceUserRequest()
    : ChimeSdkIdentityRequest(new CreateAppInstanceUserRequestPrivate(ChimeSdkIdentityRequest::CreateAppInstanceUserAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAppInstanceUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAppInstanceUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAppInstanceUserRequest::response(QNetworkReply * const reply) const
{
    return new CreateAppInstanceUserResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::CreateAppInstanceUserRequestPrivate
 * \brief The CreateAppInstanceUserRequestPrivate class provides private implementation for CreateAppInstanceUserRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a CreateAppInstanceUserRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
CreateAppInstanceUserRequestPrivate::CreateAppInstanceUserRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, CreateAppInstanceUserRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAppInstanceUserRequest
 * class' copy constructor.
 */
CreateAppInstanceUserRequestPrivate::CreateAppInstanceUserRequestPrivate(
    const CreateAppInstanceUserRequestPrivate &other, CreateAppInstanceUserRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
