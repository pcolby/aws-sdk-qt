// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdataqualitymetricsrequest.h"
#include "getdataqualitymetricsrequest_p.h"
#include "getdataqualitymetricsresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::GetDataQualityMetricsRequest
 * \brief The GetDataQualityMetricsRequest class provides an interface for LookoutMetrics GetDataQualityMetrics requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::getDataQualityMetrics
 */

/*!
 * Constructs a copy of \a other.
 */
GetDataQualityMetricsRequest::GetDataQualityMetricsRequest(const GetDataQualityMetricsRequest &other)
    : LookoutMetricsRequest(new GetDataQualityMetricsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDataQualityMetricsRequest object.
 */
GetDataQualityMetricsRequest::GetDataQualityMetricsRequest()
    : LookoutMetricsRequest(new GetDataQualityMetricsRequestPrivate(LookoutMetricsRequest::GetDataQualityMetricsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDataQualityMetricsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDataQualityMetricsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataQualityMetricsRequest::response(QNetworkReply * const reply) const
{
    return new GetDataQualityMetricsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::GetDataQualityMetricsRequestPrivate
 * \brief The GetDataQualityMetricsRequestPrivate class provides private implementation for GetDataQualityMetricsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a GetDataQualityMetricsRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
GetDataQualityMetricsRequestPrivate::GetDataQualityMetricsRequestPrivate(
    const LookoutMetricsRequest::Action action, GetDataQualityMetricsRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDataQualityMetricsRequest
 * class' copy constructor.
 */
GetDataQualityMetricsRequestPrivate::GetDataQualityMetricsRequestPrivate(
    const GetDataQualityMetricsRequestPrivate &other, GetDataQualityMetricsRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
