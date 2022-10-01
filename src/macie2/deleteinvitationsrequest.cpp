// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinvitationsrequest.h"
#include "deleteinvitationsrequest_p.h"
#include "deleteinvitationsresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DeleteInvitationsRequest
 * \brief The DeleteInvitationsRequest class provides an interface for Macie2 DeleteInvitations requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::deleteInvitations
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInvitationsRequest::DeleteInvitationsRequest(const DeleteInvitationsRequest &other)
    : Macie2Request(new DeleteInvitationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInvitationsRequest object.
 */
DeleteInvitationsRequest::DeleteInvitationsRequest()
    : Macie2Request(new DeleteInvitationsRequestPrivate(Macie2Request::DeleteInvitationsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInvitationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInvitationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInvitationsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInvitationsResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::DeleteInvitationsRequestPrivate
 * \brief The DeleteInvitationsRequestPrivate class provides private implementation for DeleteInvitationsRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DeleteInvitationsRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
DeleteInvitationsRequestPrivate::DeleteInvitationsRequestPrivate(
    const Macie2Request::Action action, DeleteInvitationsRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInvitationsRequest
 * class' copy constructor.
 */
DeleteInvitationsRequestPrivate::DeleteInvitationsRequestPrivate(
    const DeleteInvitationsRequestPrivate &other, DeleteInvitationsRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
