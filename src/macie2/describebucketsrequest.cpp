/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describebucketsrequest.h"
#include "describebucketsrequest_p.h"
#include "describebucketsresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DescribeBucketsRequest
 * \brief The DescribeBucketsRequest class provides an interface for Macie2 DescribeBuckets requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::describeBuckets
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBucketsRequest::DescribeBucketsRequest(const DescribeBucketsRequest &other)
    : Macie2Request(new DescribeBucketsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBucketsRequest object.
 */
DescribeBucketsRequest::DescribeBucketsRequest()
    : Macie2Request(new DescribeBucketsRequestPrivate(Macie2Request::DescribeBucketsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBucketsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBucketsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBucketsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBucketsResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::DescribeBucketsRequestPrivate
 * \brief The DescribeBucketsRequestPrivate class provides private implementation for DescribeBucketsRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DescribeBucketsRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
DescribeBucketsRequestPrivate::DescribeBucketsRequestPrivate(
    const Macie2Request::Action action, DescribeBucketsRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBucketsRequest
 * class' copy constructor.
 */
DescribeBucketsRequestPrivate::DescribeBucketsRequestPrivate(
    const DescribeBucketsRequestPrivate &other, DescribeBucketsRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
