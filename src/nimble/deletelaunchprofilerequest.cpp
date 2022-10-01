// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelaunchprofilerequest.h"
#include "deletelaunchprofilerequest_p.h"
#include "deletelaunchprofileresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::DeleteLaunchProfileRequest
 * \brief The DeleteLaunchProfileRequest class provides an interface for Nimble DeleteLaunchProfile requests.
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
 * \sa NimbleClient::deleteLaunchProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLaunchProfileRequest::DeleteLaunchProfileRequest(const DeleteLaunchProfileRequest &other)
    : NimbleRequest(new DeleteLaunchProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLaunchProfileRequest object.
 */
DeleteLaunchProfileRequest::DeleteLaunchProfileRequest()
    : NimbleRequest(new DeleteLaunchProfileRequestPrivate(NimbleRequest::DeleteLaunchProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLaunchProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLaunchProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLaunchProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLaunchProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::DeleteLaunchProfileRequestPrivate
 * \brief The DeleteLaunchProfileRequestPrivate class provides private implementation for DeleteLaunchProfileRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a DeleteLaunchProfileRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
DeleteLaunchProfileRequestPrivate::DeleteLaunchProfileRequestPrivate(
    const NimbleRequest::Action action, DeleteLaunchProfileRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLaunchProfileRequest
 * class' copy constructor.
 */
DeleteLaunchProfileRequestPrivate::DeleteLaunchProfileRequestPrivate(
    const DeleteLaunchProfileRequestPrivate &other, DeleteLaunchProfileRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
