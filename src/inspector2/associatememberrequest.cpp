// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
