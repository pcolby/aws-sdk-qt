// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemembersessionrequest.h"
#include "updatemembersessionrequest_p.h"
#include "updatemembersessionresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::UpdateMemberSessionRequest
 * \brief The UpdateMemberSessionRequest class provides an interface for Macie2 UpdateMemberSession requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::updateMemberSession
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMemberSessionRequest::UpdateMemberSessionRequest(const UpdateMemberSessionRequest &other)
    : Macie2Request(new UpdateMemberSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMemberSessionRequest object.
 */
UpdateMemberSessionRequest::UpdateMemberSessionRequest()
    : Macie2Request(new UpdateMemberSessionRequestPrivate(Macie2Request::UpdateMemberSessionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMemberSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMemberSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMemberSessionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMemberSessionResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::UpdateMemberSessionRequestPrivate
 * \brief The UpdateMemberSessionRequestPrivate class provides private implementation for UpdateMemberSessionRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a UpdateMemberSessionRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
UpdateMemberSessionRequestPrivate::UpdateMemberSessionRequestPrivate(
    const Macie2Request::Action action, UpdateMemberSessionRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMemberSessionRequest
 * class' copy constructor.
 */
UpdateMemberSessionRequestPrivate::UpdateMemberSessionRequestPrivate(
    const UpdateMemberSessionRequestPrivate &other, UpdateMemberSessionRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
