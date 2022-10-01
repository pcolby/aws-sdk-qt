// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketstatisticsrequest.h"
#include "getbucketstatisticsrequest_p.h"
#include "getbucketstatisticsresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetBucketStatisticsRequest
 * \brief The GetBucketStatisticsRequest class provides an interface for Macie2 GetBucketStatistics requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getBucketStatistics
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketStatisticsRequest::GetBucketStatisticsRequest(const GetBucketStatisticsRequest &other)
    : Macie2Request(new GetBucketStatisticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketStatisticsRequest object.
 */
GetBucketStatisticsRequest::GetBucketStatisticsRequest()
    : Macie2Request(new GetBucketStatisticsRequestPrivate(Macie2Request::GetBucketStatisticsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketStatisticsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketStatisticsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketStatisticsRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketStatisticsResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::GetBucketStatisticsRequestPrivate
 * \brief The GetBucketStatisticsRequestPrivate class provides private implementation for GetBucketStatisticsRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetBucketStatisticsRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetBucketStatisticsRequestPrivate::GetBucketStatisticsRequestPrivate(
    const Macie2Request::Action action, GetBucketStatisticsRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketStatisticsRequest
 * class' copy constructor.
 */
GetBucketStatisticsRequestPrivate::GetBucketStatisticsRequestPrivate(
    const GetBucketStatisticsRequestPrivate &other, GetBucketStatisticsRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
