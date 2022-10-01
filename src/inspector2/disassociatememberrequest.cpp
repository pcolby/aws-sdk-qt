// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatememberrequest.h"
#include "disassociatememberrequest_p.h"
#include "disassociatememberresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::DisassociateMemberRequest
 * \brief The DisassociateMemberRequest class provides an interface for Inspector2 DisassociateMember requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::disassociateMember
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateMemberRequest::DisassociateMemberRequest(const DisassociateMemberRequest &other)
    : Inspector2Request(new DisassociateMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateMemberRequest object.
 */
DisassociateMemberRequest::DisassociateMemberRequest()
    : Inspector2Request(new DisassociateMemberRequestPrivate(Inspector2Request::DisassociateMemberAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateMemberRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateMemberResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::DisassociateMemberRequestPrivate
 * \brief The DisassociateMemberRequestPrivate class provides private implementation for DisassociateMemberRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a DisassociateMemberRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
DisassociateMemberRequestPrivate::DisassociateMemberRequestPrivate(
    const Inspector2Request::Action action, DisassociateMemberRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateMemberRequest
 * class' copy constructor.
 */
DisassociateMemberRequestPrivate::DisassociateMemberRequestPrivate(
    const DisassociateMemberRequestPrivate &other, DisassociateMemberRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
