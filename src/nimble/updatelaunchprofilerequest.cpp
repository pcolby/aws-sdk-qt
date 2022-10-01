// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelaunchprofilerequest.h"
#include "updatelaunchprofilerequest_p.h"
#include "updatelaunchprofileresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::UpdateLaunchProfileRequest
 * \brief The UpdateLaunchProfileRequest class provides an interface for Nimble UpdateLaunchProfile requests.
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
 * \sa NimbleClient::updateLaunchProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLaunchProfileRequest::UpdateLaunchProfileRequest(const UpdateLaunchProfileRequest &other)
    : NimbleRequest(new UpdateLaunchProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLaunchProfileRequest object.
 */
UpdateLaunchProfileRequest::UpdateLaunchProfileRequest()
    : NimbleRequest(new UpdateLaunchProfileRequestPrivate(NimbleRequest::UpdateLaunchProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLaunchProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLaunchProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLaunchProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLaunchProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::UpdateLaunchProfileRequestPrivate
 * \brief The UpdateLaunchProfileRequestPrivate class provides private implementation for UpdateLaunchProfileRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a UpdateLaunchProfileRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
UpdateLaunchProfileRequestPrivate::UpdateLaunchProfileRequestPrivate(
    const NimbleRequest::Action action, UpdateLaunchProfileRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLaunchProfileRequest
 * class' copy constructor.
 */
UpdateLaunchProfileRequestPrivate::UpdateLaunchProfileRequestPrivate(
    const UpdateLaunchProfileRequestPrivate &other, UpdateLaunchProfileRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
