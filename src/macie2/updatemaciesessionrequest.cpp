// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemaciesessionrequest.h"
#include "updatemaciesessionrequest_p.h"
#include "updatemaciesessionresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::UpdateMacieSessionRequest
 * \brief The UpdateMacieSessionRequest class provides an interface for Macie2 UpdateMacieSession requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::updateMacieSession
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMacieSessionRequest::UpdateMacieSessionRequest(const UpdateMacieSessionRequest &other)
    : Macie2Request(new UpdateMacieSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMacieSessionRequest object.
 */
UpdateMacieSessionRequest::UpdateMacieSessionRequest()
    : Macie2Request(new UpdateMacieSessionRequestPrivate(Macie2Request::UpdateMacieSessionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMacieSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMacieSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMacieSessionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMacieSessionResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::UpdateMacieSessionRequestPrivate
 * \brief The UpdateMacieSessionRequestPrivate class provides private implementation for UpdateMacieSessionRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a UpdateMacieSessionRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
UpdateMacieSessionRequestPrivate::UpdateMacieSessionRequestPrivate(
    const Macie2Request::Action action, UpdateMacieSessionRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMacieSessionRequest
 * class' copy constructor.
 */
UpdateMacieSessionRequestPrivate::UpdateMacieSessionRequestPrivate(
    const UpdateMacieSessionRequestPrivate &other, UpdateMacieSessionRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
