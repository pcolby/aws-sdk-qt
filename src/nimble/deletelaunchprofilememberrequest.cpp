// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelaunchprofilememberrequest.h"
#include "deletelaunchprofilememberrequest_p.h"
#include "deletelaunchprofilememberresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::DeleteLaunchProfileMemberRequest
 * \brief The DeleteLaunchProfileMemberRequest class provides an interface for Nimble DeleteLaunchProfileMember requests.
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
 * \sa NimbleClient::deleteLaunchProfileMember
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLaunchProfileMemberRequest::DeleteLaunchProfileMemberRequest(const DeleteLaunchProfileMemberRequest &other)
    : NimbleRequest(new DeleteLaunchProfileMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLaunchProfileMemberRequest object.
 */
DeleteLaunchProfileMemberRequest::DeleteLaunchProfileMemberRequest()
    : NimbleRequest(new DeleteLaunchProfileMemberRequestPrivate(NimbleRequest::DeleteLaunchProfileMemberAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLaunchProfileMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLaunchProfileMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLaunchProfileMemberRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLaunchProfileMemberResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::DeleteLaunchProfileMemberRequestPrivate
 * \brief The DeleteLaunchProfileMemberRequestPrivate class provides private implementation for DeleteLaunchProfileMemberRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a DeleteLaunchProfileMemberRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
DeleteLaunchProfileMemberRequestPrivate::DeleteLaunchProfileMemberRequestPrivate(
    const NimbleRequest::Action action, DeleteLaunchProfileMemberRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLaunchProfileMemberRequest
 * class' copy constructor.
 */
DeleteLaunchProfileMemberRequestPrivate::DeleteLaunchProfileMemberRequestPrivate(
    const DeleteLaunchProfileMemberRequestPrivate &other, DeleteLaunchProfileMemberRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
