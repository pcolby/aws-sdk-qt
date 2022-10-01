// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteallowlistrequest.h"
#include "deleteallowlistrequest_p.h"
#include "deleteallowlistresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DeleteAllowListRequest
 * \brief The DeleteAllowListRequest class provides an interface for Macie2 DeleteAllowList requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::deleteAllowList
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAllowListRequest::DeleteAllowListRequest(const DeleteAllowListRequest &other)
    : Macie2Request(new DeleteAllowListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAllowListRequest object.
 */
DeleteAllowListRequest::DeleteAllowListRequest()
    : Macie2Request(new DeleteAllowListRequestPrivate(Macie2Request::DeleteAllowListAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAllowListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAllowListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAllowListRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAllowListResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::DeleteAllowListRequestPrivate
 * \brief The DeleteAllowListRequestPrivate class provides private implementation for DeleteAllowListRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DeleteAllowListRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
DeleteAllowListRequestPrivate::DeleteAllowListRequestPrivate(
    const Macie2Request::Action action, DeleteAllowListRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAllowListRequest
 * class' copy constructor.
 */
DeleteAllowListRequestPrivate::DeleteAllowListRequestPrivate(
    const DeleteAllowListRequestPrivate &other, DeleteAllowListRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
