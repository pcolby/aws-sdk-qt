// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putlaunchprofilemembersrequest.h"
#include "putlaunchprofilemembersrequest_p.h"
#include "putlaunchprofilemembersresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::PutLaunchProfileMembersRequest
 * \brief The PutLaunchProfileMembersRequest class provides an interface for Nimble PutLaunchProfileMembers requests.
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
 * \sa NimbleClient::putLaunchProfileMembers
 */

/*!
 * Constructs a copy of \a other.
 */
PutLaunchProfileMembersRequest::PutLaunchProfileMembersRequest(const PutLaunchProfileMembersRequest &other)
    : NimbleRequest(new PutLaunchProfileMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutLaunchProfileMembersRequest object.
 */
PutLaunchProfileMembersRequest::PutLaunchProfileMembersRequest()
    : NimbleRequest(new PutLaunchProfileMembersRequestPrivate(NimbleRequest::PutLaunchProfileMembersAction, this))
{

}

/*!
 * \reimp
 */
bool PutLaunchProfileMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutLaunchProfileMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutLaunchProfileMembersRequest::response(QNetworkReply * const reply) const
{
    return new PutLaunchProfileMembersResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::PutLaunchProfileMembersRequestPrivate
 * \brief The PutLaunchProfileMembersRequestPrivate class provides private implementation for PutLaunchProfileMembersRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a PutLaunchProfileMembersRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
PutLaunchProfileMembersRequestPrivate::PutLaunchProfileMembersRequestPrivate(
    const NimbleRequest::Action action, PutLaunchProfileMembersRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutLaunchProfileMembersRequest
 * class' copy constructor.
 */
PutLaunchProfileMembersRequestPrivate::PutLaunchProfileMembersRequestPrivate(
    const PutLaunchProfileMembersRequestPrivate &other, PutLaunchProfileMembersRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
