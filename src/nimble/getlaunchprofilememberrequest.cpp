// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlaunchprofilememberrequest.h"
#include "getlaunchprofilememberrequest_p.h"
#include "getlaunchprofilememberresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetLaunchProfileMemberRequest
 * \brief The GetLaunchProfileMemberRequest class provides an interface for Nimble GetLaunchProfileMember requests.
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
 * \sa NimbleClient::getLaunchProfileMember
 */

/*!
 * Constructs a copy of \a other.
 */
GetLaunchProfileMemberRequest::GetLaunchProfileMemberRequest(const GetLaunchProfileMemberRequest &other)
    : NimbleRequest(new GetLaunchProfileMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLaunchProfileMemberRequest object.
 */
GetLaunchProfileMemberRequest::GetLaunchProfileMemberRequest()
    : NimbleRequest(new GetLaunchProfileMemberRequestPrivate(NimbleRequest::GetLaunchProfileMemberAction, this))
{

}

/*!
 * \reimp
 */
bool GetLaunchProfileMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLaunchProfileMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLaunchProfileMemberRequest::response(QNetworkReply * const reply) const
{
    return new GetLaunchProfileMemberResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::GetLaunchProfileMemberRequestPrivate
 * \brief The GetLaunchProfileMemberRequestPrivate class provides private implementation for GetLaunchProfileMemberRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetLaunchProfileMemberRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
GetLaunchProfileMemberRequestPrivate::GetLaunchProfileMemberRequestPrivate(
    const NimbleRequest::Action action, GetLaunchProfileMemberRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLaunchProfileMemberRequest
 * class' copy constructor.
 */
GetLaunchProfileMemberRequestPrivate::GetLaunchProfileMemberRequestPrivate(
    const GetLaunchProfileMemberRequestPrivate &other, GetLaunchProfileMemberRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
