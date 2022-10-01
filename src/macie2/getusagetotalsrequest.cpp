// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusagetotalsrequest.h"
#include "getusagetotalsrequest_p.h"
#include "getusagetotalsresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetUsageTotalsRequest
 * \brief The GetUsageTotalsRequest class provides an interface for Macie2 GetUsageTotals requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getUsageTotals
 */

/*!
 * Constructs a copy of \a other.
 */
GetUsageTotalsRequest::GetUsageTotalsRequest(const GetUsageTotalsRequest &other)
    : Macie2Request(new GetUsageTotalsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUsageTotalsRequest object.
 */
GetUsageTotalsRequest::GetUsageTotalsRequest()
    : Macie2Request(new GetUsageTotalsRequestPrivate(Macie2Request::GetUsageTotalsAction, this))
{

}

/*!
 * \reimp
 */
bool GetUsageTotalsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUsageTotalsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUsageTotalsRequest::response(QNetworkReply * const reply) const
{
    return new GetUsageTotalsResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::GetUsageTotalsRequestPrivate
 * \brief The GetUsageTotalsRequestPrivate class provides private implementation for GetUsageTotalsRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetUsageTotalsRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetUsageTotalsRequestPrivate::GetUsageTotalsRequestPrivate(
    const Macie2Request::Action action, GetUsageTotalsRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUsageTotalsRequest
 * class' copy constructor.
 */
GetUsageTotalsRequestPrivate::GetUsageTotalsRequestPrivate(
    const GetUsageTotalsRequestPrivate &other, GetUsageTotalsRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
