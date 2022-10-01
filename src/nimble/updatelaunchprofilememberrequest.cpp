// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelaunchprofilememberrequest.h"
#include "updatelaunchprofilememberrequest_p.h"
#include "updatelaunchprofilememberresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::UpdateLaunchProfileMemberRequest
 * \brief The UpdateLaunchProfileMemberRequest class provides an interface for Nimble UpdateLaunchProfileMember requests.
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
 * \sa NimbleClient::updateLaunchProfileMember
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLaunchProfileMemberRequest::UpdateLaunchProfileMemberRequest(const UpdateLaunchProfileMemberRequest &other)
    : NimbleRequest(new UpdateLaunchProfileMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLaunchProfileMemberRequest object.
 */
UpdateLaunchProfileMemberRequest::UpdateLaunchProfileMemberRequest()
    : NimbleRequest(new UpdateLaunchProfileMemberRequestPrivate(NimbleRequest::UpdateLaunchProfileMemberAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLaunchProfileMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLaunchProfileMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLaunchProfileMemberRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLaunchProfileMemberResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::UpdateLaunchProfileMemberRequestPrivate
 * \brief The UpdateLaunchProfileMemberRequestPrivate class provides private implementation for UpdateLaunchProfileMemberRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a UpdateLaunchProfileMemberRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
UpdateLaunchProfileMemberRequestPrivate::UpdateLaunchProfileMemberRequestPrivate(
    const NimbleRequest::Action action, UpdateLaunchProfileMemberRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLaunchProfileMemberRequest
 * class' copy constructor.
 */
UpdateLaunchProfileMemberRequestPrivate::UpdateLaunchProfileMemberRequestPrivate(
    const UpdateLaunchProfileMemberRequestPrivate &other, UpdateLaunchProfileMemberRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
