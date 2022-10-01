// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlaunchprofilerequest.h"
#include "createlaunchprofilerequest_p.h"
#include "createlaunchprofileresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::CreateLaunchProfileRequest
 * \brief The CreateLaunchProfileRequest class provides an interface for Nimble CreateLaunchProfile requests.
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
 * \sa NimbleClient::createLaunchProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLaunchProfileRequest::CreateLaunchProfileRequest(const CreateLaunchProfileRequest &other)
    : NimbleRequest(new CreateLaunchProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLaunchProfileRequest object.
 */
CreateLaunchProfileRequest::CreateLaunchProfileRequest()
    : NimbleRequest(new CreateLaunchProfileRequestPrivate(NimbleRequest::CreateLaunchProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLaunchProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLaunchProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLaunchProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateLaunchProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::CreateLaunchProfileRequestPrivate
 * \brief The CreateLaunchProfileRequestPrivate class provides private implementation for CreateLaunchProfileRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a CreateLaunchProfileRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
CreateLaunchProfileRequestPrivate::CreateLaunchProfileRequestPrivate(
    const NimbleRequest::Action action, CreateLaunchProfileRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLaunchProfileRequest
 * class' copy constructor.
 */
CreateLaunchProfileRequestPrivate::CreateLaunchProfileRequestPrivate(
    const CreateLaunchProfileRequestPrivate &other, CreateLaunchProfileRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
