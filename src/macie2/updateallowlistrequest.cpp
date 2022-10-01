// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateallowlistrequest.h"
#include "updateallowlistrequest_p.h"
#include "updateallowlistresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::UpdateAllowListRequest
 * \brief The UpdateAllowListRequest class provides an interface for Macie2 UpdateAllowList requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::updateAllowList
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAllowListRequest::UpdateAllowListRequest(const UpdateAllowListRequest &other)
    : Macie2Request(new UpdateAllowListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAllowListRequest object.
 */
UpdateAllowListRequest::UpdateAllowListRequest()
    : Macie2Request(new UpdateAllowListRequestPrivate(Macie2Request::UpdateAllowListAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAllowListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAllowListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAllowListRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAllowListResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::UpdateAllowListRequestPrivate
 * \brief The UpdateAllowListRequestPrivate class provides private implementation for UpdateAllowListRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a UpdateAllowListRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
UpdateAllowListRequestPrivate::UpdateAllowListRequestPrivate(
    const Macie2Request::Action action, UpdateAllowListRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAllowListRequest
 * class' copy constructor.
 */
UpdateAllowListRequestPrivate::UpdateAllowListRequestPrivate(
    const UpdateAllowListRequestPrivate &other, UpdateAllowListRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
