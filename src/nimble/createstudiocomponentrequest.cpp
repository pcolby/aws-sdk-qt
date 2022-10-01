// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstudiocomponentrequest.h"
#include "createstudiocomponentrequest_p.h"
#include "createstudiocomponentresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::CreateStudioComponentRequest
 * \brief The CreateStudioComponentRequest class provides an interface for Nimble CreateStudioComponent requests.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::createStudioComponent
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStudioComponentRequest::CreateStudioComponentRequest(const CreateStudioComponentRequest &other)
    : NimbleRequest(new CreateStudioComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStudioComponentRequest object.
 */
CreateStudioComponentRequest::CreateStudioComponentRequest()
    : NimbleRequest(new CreateStudioComponentRequestPrivate(NimbleRequest::CreateStudioComponentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStudioComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStudioComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStudioComponentRequest::response(QNetworkReply * const reply) const
{
    return new CreateStudioComponentResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::CreateStudioComponentRequestPrivate
 * \brief The CreateStudioComponentRequestPrivate class provides private implementation for CreateStudioComponentRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a CreateStudioComponentRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
CreateStudioComponentRequestPrivate::CreateStudioComponentRequestPrivate(
    const NimbleRequest::Action action, CreateStudioComponentRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStudioComponentRequest
 * class' copy constructor.
 */
CreateStudioComponentRequestPrivate::CreateStudioComponentRequestPrivate(
    const CreateStudioComponentRequestPrivate &other, CreateStudioComponentRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
