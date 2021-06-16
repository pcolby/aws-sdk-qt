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

#include "getsampledatarequest.h"
#include "getsampledatarequest_p.h"
#include "getsampledataresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::GetSampleDataRequest
 * \brief The GetSampleDataRequest class provides an interface for LookoutMetrics GetSampleData requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::getSampleData
 */

/*!
 * Constructs a copy of \a other.
 */
GetSampleDataRequest::GetSampleDataRequest(const GetSampleDataRequest &other)
    : LookoutMetricsRequest(new GetSampleDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSampleDataRequest object.
 */
GetSampleDataRequest::GetSampleDataRequest()
    : LookoutMetricsRequest(new GetSampleDataRequestPrivate(LookoutMetricsRequest::GetSampleDataAction, this))
{

}

/*!
 * \reimp
 */
bool GetSampleDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSampleDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSampleDataRequest::response(QNetworkReply * const reply) const
{
    return new GetSampleDataResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::GetSampleDataRequestPrivate
 * \brief The GetSampleDataRequestPrivate class provides private implementation for GetSampleDataRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a GetSampleDataRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
GetSampleDataRequestPrivate::GetSampleDataRequestPrivate(
    const LookoutMetricsRequest::Action action, GetSampleDataRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSampleDataRequest
 * class' copy constructor.
 */
GetSampleDataRequestPrivate::GetSampleDataRequestPrivate(
    const GetSampleDataRequestPrivate &other, GetSampleDataRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
