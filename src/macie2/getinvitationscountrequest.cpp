// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinvitationscountrequest.h"
#include "getinvitationscountrequest_p.h"
#include "getinvitationscountresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetInvitationsCountRequest
 * \brief The GetInvitationsCountRequest class provides an interface for Macie2 GetInvitationsCount requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getInvitationsCount
 */

/*!
 * Constructs a copy of \a other.
 */
GetInvitationsCountRequest::GetInvitationsCountRequest(const GetInvitationsCountRequest &other)
    : Macie2Request(new GetInvitationsCountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInvitationsCountRequest object.
 */
GetInvitationsCountRequest::GetInvitationsCountRequest()
    : Macie2Request(new GetInvitationsCountRequestPrivate(Macie2Request::GetInvitationsCountAction, this))
{

}

/*!
 * \reimp
 */
bool GetInvitationsCountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInvitationsCountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInvitationsCountRequest::response(QNetworkReply * const reply) const
{
    return new GetInvitationsCountResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::GetInvitationsCountRequestPrivate
 * \brief The GetInvitationsCountRequestPrivate class provides private implementation for GetInvitationsCountRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetInvitationsCountRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetInvitationsCountRequestPrivate::GetInvitationsCountRequestPrivate(
    const Macie2Request::Action action, GetInvitationsCountRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInvitationsCountRequest
 * class' copy constructor.
 */
GetInvitationsCountRequestPrivate::GetInvitationsCountRequestPrivate(
    const GetInvitationsCountRequestPrivate &other, GetInvitationsCountRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
