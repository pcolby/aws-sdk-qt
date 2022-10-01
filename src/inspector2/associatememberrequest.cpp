/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "associatememberrequest.h"
#include "associatememberrequest_p.h"
#include "associatememberresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::AssociateMemberRequest
 * \brief The AssociateMemberRequest class provides an interface for Inspector2 AssociateMember requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::associateMember
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateMemberRequest::AssociateMemberRequest(const AssociateMemberRequest &other)
    : Inspector2Request(new AssociateMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateMemberRequest object.
 */
AssociateMemberRequest::AssociateMemberRequest()
    : Inspector2Request(new AssociateMemberRequestPrivate(Inspector2Request::AssociateMemberAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateMemberRequest::response(QNetworkReply * const reply) const
{
    return new AssociateMemberResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::AssociateMemberRequestPrivate
 * \brief The AssociateMemberRequestPrivate class provides private implementation for AssociateMemberRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a AssociateMemberRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
AssociateMemberRequestPrivate::AssociateMemberRequestPrivate(
    const Inspector2Request::Action action, AssociateMemberRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateMemberRequest
 * class' copy constructor.
 */
AssociateMemberRequestPrivate::AssociateMemberRequestPrivate(
    const AssociateMemberRequestPrivate &other, AssociateMemberRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
