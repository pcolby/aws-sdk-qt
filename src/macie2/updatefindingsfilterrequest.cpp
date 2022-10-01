// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefindingsfilterrequest.h"
#include "updatefindingsfilterrequest_p.h"
#include "updatefindingsfilterresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::UpdateFindingsFilterRequest
 * \brief The UpdateFindingsFilterRequest class provides an interface for Macie2 UpdateFindingsFilter requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::updateFindingsFilter
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFindingsFilterRequest::UpdateFindingsFilterRequest(const UpdateFindingsFilterRequest &other)
    : Macie2Request(new UpdateFindingsFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFindingsFilterRequest object.
 */
UpdateFindingsFilterRequest::UpdateFindingsFilterRequest()
    : Macie2Request(new UpdateFindingsFilterRequestPrivate(Macie2Request::UpdateFindingsFilterAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFindingsFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFindingsFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFindingsFilterRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFindingsFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::UpdateFindingsFilterRequestPrivate
 * \brief The UpdateFindingsFilterRequestPrivate class provides private implementation for UpdateFindingsFilterRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a UpdateFindingsFilterRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
UpdateFindingsFilterRequestPrivate::UpdateFindingsFilterRequestPrivate(
    const Macie2Request::Action action, UpdateFindingsFilterRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFindingsFilterRequest
 * class' copy constructor.
 */
UpdateFindingsFilterRequestPrivate::UpdateFindingsFilterRequestPrivate(
    const UpdateFindingsFilterRequestPrivate &other, UpdateFindingsFilterRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
