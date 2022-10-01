// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstudiorequest.h"
#include "createstudiorequest_p.h"
#include "createstudioresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::CreateStudioRequest
 * \brief The CreateStudioRequest class provides an interface for Nimble CreateStudio requests.
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
 * \sa NimbleClient::createStudio
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStudioRequest::CreateStudioRequest(const CreateStudioRequest &other)
    : NimbleRequest(new CreateStudioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStudioRequest object.
 */
CreateStudioRequest::CreateStudioRequest()
    : NimbleRequest(new CreateStudioRequestPrivate(NimbleRequest::CreateStudioAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStudioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStudioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStudioRequest::response(QNetworkReply * const reply) const
{
    return new CreateStudioResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::CreateStudioRequestPrivate
 * \brief The CreateStudioRequestPrivate class provides private implementation for CreateStudioRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a CreateStudioRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
CreateStudioRequestPrivate::CreateStudioRequestPrivate(
    const NimbleRequest::Action action, CreateStudioRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStudioRequest
 * class' copy constructor.
 */
CreateStudioRequestPrivate::CreateStudioRequestPrivate(
    const CreateStudioRequestPrivate &other, CreateStudioRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
