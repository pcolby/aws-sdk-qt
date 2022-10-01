// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfindingstatisticsrequest.h"
#include "getfindingstatisticsrequest_p.h"
#include "getfindingstatisticsresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetFindingStatisticsRequest
 * \brief The GetFindingStatisticsRequest class provides an interface for Macie2 GetFindingStatistics requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getFindingStatistics
 */

/*!
 * Constructs a copy of \a other.
 */
GetFindingStatisticsRequest::GetFindingStatisticsRequest(const GetFindingStatisticsRequest &other)
    : Macie2Request(new GetFindingStatisticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFindingStatisticsRequest object.
 */
GetFindingStatisticsRequest::GetFindingStatisticsRequest()
    : Macie2Request(new GetFindingStatisticsRequestPrivate(Macie2Request::GetFindingStatisticsAction, this))
{

}

/*!
 * \reimp
 */
bool GetFindingStatisticsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFindingStatisticsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFindingStatisticsRequest::response(QNetworkReply * const reply) const
{
    return new GetFindingStatisticsResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::GetFindingStatisticsRequestPrivate
 * \brief The GetFindingStatisticsRequestPrivate class provides private implementation for GetFindingStatisticsRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetFindingStatisticsRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetFindingStatisticsRequestPrivate::GetFindingStatisticsRequestPrivate(
    const Macie2Request::Action action, GetFindingStatisticsRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFindingStatisticsRequest
 * class' copy constructor.
 */
GetFindingStatisticsRequestPrivate::GetFindingStatisticsRequestPrivate(
    const GetFindingStatisticsRequestPrivate &other, GetFindingStatisticsRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
