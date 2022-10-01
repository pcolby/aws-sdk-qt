// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createappinstancerequest.h"
#include "createappinstancerequest_p.h"
#include "createappinstanceresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::CreateAppInstanceRequest
 * \brief The CreateAppInstanceRequest class provides an interface for ChimeSdkIdentity CreateAppInstance requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::createAppInstance
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAppInstanceRequest::CreateAppInstanceRequest(const CreateAppInstanceRequest &other)
    : ChimeSdkIdentityRequest(new CreateAppInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAppInstanceRequest object.
 */
CreateAppInstanceRequest::CreateAppInstanceRequest()
    : ChimeSdkIdentityRequest(new CreateAppInstanceRequestPrivate(ChimeSdkIdentityRequest::CreateAppInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAppInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAppInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAppInstanceRequest::response(QNetworkReply * const reply) const
{
    return new CreateAppInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::CreateAppInstanceRequestPrivate
 * \brief The CreateAppInstanceRequestPrivate class provides private implementation for CreateAppInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a CreateAppInstanceRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
CreateAppInstanceRequestPrivate::CreateAppInstanceRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, CreateAppInstanceRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAppInstanceRequest
 * class' copy constructor.
 */
CreateAppInstanceRequestPrivate::CreateAppInstanceRequestPrivate(
    const CreateAppInstanceRequestPrivate &other, CreateAppInstanceRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
