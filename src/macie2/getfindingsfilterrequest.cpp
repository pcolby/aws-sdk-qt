// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfindingsfilterrequest.h"
#include "getfindingsfilterrequest_p.h"
#include "getfindingsfilterresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetFindingsFilterRequest
 * \brief The GetFindingsFilterRequest class provides an interface for Macie2 GetFindingsFilter requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getFindingsFilter
 */

/*!
 * Constructs a copy of \a other.
 */
GetFindingsFilterRequest::GetFindingsFilterRequest(const GetFindingsFilterRequest &other)
    : Macie2Request(new GetFindingsFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFindingsFilterRequest object.
 */
GetFindingsFilterRequest::GetFindingsFilterRequest()
    : Macie2Request(new GetFindingsFilterRequestPrivate(Macie2Request::GetFindingsFilterAction, this))
{

}

/*!
 * \reimp
 */
bool GetFindingsFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFindingsFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFindingsFilterRequest::response(QNetworkReply * const reply) const
{
    return new GetFindingsFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::GetFindingsFilterRequestPrivate
 * \brief The GetFindingsFilterRequestPrivate class provides private implementation for GetFindingsFilterRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetFindingsFilterRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetFindingsFilterRequestPrivate::GetFindingsFilterRequestPrivate(
    const Macie2Request::Action action, GetFindingsFilterRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFindingsFilterRequest
 * class' copy constructor.
 */
GetFindingsFilterRequestPrivate::GetFindingsFilterRequestPrivate(
    const GetFindingsFilterRequestPrivate &other, GetFindingsFilterRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
