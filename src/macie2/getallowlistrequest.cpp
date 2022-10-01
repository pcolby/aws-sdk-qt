// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getallowlistrequest.h"
#include "getallowlistrequest_p.h"
#include "getallowlistresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetAllowListRequest
 * \brief The GetAllowListRequest class provides an interface for Macie2 GetAllowList requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getAllowList
 */

/*!
 * Constructs a copy of \a other.
 */
GetAllowListRequest::GetAllowListRequest(const GetAllowListRequest &other)
    : Macie2Request(new GetAllowListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAllowListRequest object.
 */
GetAllowListRequest::GetAllowListRequest()
    : Macie2Request(new GetAllowListRequestPrivate(Macie2Request::GetAllowListAction, this))
{

}

/*!
 * \reimp
 */
bool GetAllowListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAllowListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAllowListRequest::response(QNetworkReply * const reply) const
{
    return new GetAllowListResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::GetAllowListRequestPrivate
 * \brief The GetAllowListRequestPrivate class provides private implementation for GetAllowListRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetAllowListRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetAllowListRequestPrivate::GetAllowListRequestPrivate(
    const Macie2Request::Action action, GetAllowListRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAllowListRequest
 * class' copy constructor.
 */
GetAllowListRequestPrivate::GetAllowListRequestPrivate(
    const GetAllowListRequestPrivate &other, GetAllowListRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
