// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acceptinvitationrequest.h"
#include "acceptinvitationrequest_p.h"
#include "acceptinvitationresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::AcceptInvitationRequest
 * \brief The AcceptInvitationRequest class provides an interface for Macie2 AcceptInvitation requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::acceptInvitation
 */

/*!
 * Constructs a copy of \a other.
 */
AcceptInvitationRequest::AcceptInvitationRequest(const AcceptInvitationRequest &other)
    : Macie2Request(new AcceptInvitationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcceptInvitationRequest object.
 */
AcceptInvitationRequest::AcceptInvitationRequest()
    : Macie2Request(new AcceptInvitationRequestPrivate(Macie2Request::AcceptInvitationAction, this))
{

}

/*!
 * \reimp
 */
bool AcceptInvitationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcceptInvitationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcceptInvitationRequest::response(QNetworkReply * const reply) const
{
    return new AcceptInvitationResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::AcceptInvitationRequestPrivate
 * \brief The AcceptInvitationRequestPrivate class provides private implementation for AcceptInvitationRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a AcceptInvitationRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
AcceptInvitationRequestPrivate::AcceptInvitationRequestPrivate(
    const Macie2Request::Action action, AcceptInvitationRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcceptInvitationRequest
 * class' copy constructor.
 */
AcceptInvitationRequestPrivate::AcceptInvitationRequestPrivate(
    const AcceptInvitationRequestPrivate &other, AcceptInvitationRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
