// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstudiomemberrequest.h"
#include "getstudiomemberrequest_p.h"
#include "getstudiomemberresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetStudioMemberRequest
 * \brief The GetStudioMemberRequest class provides an interface for Nimble GetStudioMember requests.
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
 * \sa NimbleClient::getStudioMember
 */

/*!
 * Constructs a copy of \a other.
 */
GetStudioMemberRequest::GetStudioMemberRequest(const GetStudioMemberRequest &other)
    : NimbleRequest(new GetStudioMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStudioMemberRequest object.
 */
GetStudioMemberRequest::GetStudioMemberRequest()
    : NimbleRequest(new GetStudioMemberRequestPrivate(NimbleRequest::GetStudioMemberAction, this))
{

}

/*!
 * \reimp
 */
bool GetStudioMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStudioMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStudioMemberRequest::response(QNetworkReply * const reply) const
{
    return new GetStudioMemberResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::GetStudioMemberRequestPrivate
 * \brief The GetStudioMemberRequestPrivate class provides private implementation for GetStudioMemberRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetStudioMemberRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
GetStudioMemberRequestPrivate::GetStudioMemberRequestPrivate(
    const NimbleRequest::Action action, GetStudioMemberRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStudioMemberRequest
 * class' copy constructor.
 */
GetStudioMemberRequestPrivate::GetStudioMemberRequestPrivate(
    const GetStudioMemberRequestPrivate &other, GetStudioMemberRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
