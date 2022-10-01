// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletememberrequest.h"
#include "deletememberrequest_p.h"
#include "deletememberresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DeleteMemberRequest
 * \brief The DeleteMemberRequest class provides an interface for Macie2 DeleteMember requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::deleteMember
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMemberRequest::DeleteMemberRequest(const DeleteMemberRequest &other)
    : Macie2Request(new DeleteMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMemberRequest object.
 */
DeleteMemberRequest::DeleteMemberRequest()
    : Macie2Request(new DeleteMemberRequestPrivate(Macie2Request::DeleteMemberAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMemberRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMemberResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::DeleteMemberRequestPrivate
 * \brief The DeleteMemberRequestPrivate class provides private implementation for DeleteMemberRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DeleteMemberRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
DeleteMemberRequestPrivate::DeleteMemberRequestPrivate(
    const Macie2Request::Action action, DeleteMemberRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMemberRequest
 * class' copy constructor.
 */
DeleteMemberRequestPrivate::DeleteMemberRequestPrivate(
    const DeleteMemberRequestPrivate &other, DeleteMemberRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
