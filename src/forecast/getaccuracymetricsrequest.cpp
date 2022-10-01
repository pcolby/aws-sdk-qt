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

#include "getaccuracymetricsrequest.h"
#include "getaccuracymetricsrequest_p.h"
#include "getaccuracymetricsresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::GetAccuracyMetricsRequest
 * \brief The GetAccuracyMetricsRequest class provides an interface for Forecast GetAccuracyMetrics requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::getAccuracyMetrics
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccuracyMetricsRequest::GetAccuracyMetricsRequest(const GetAccuracyMetricsRequest &other)
    : ForecastRequest(new GetAccuracyMetricsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccuracyMetricsRequest object.
 */
GetAccuracyMetricsRequest::GetAccuracyMetricsRequest()
    : ForecastRequest(new GetAccuracyMetricsRequestPrivate(ForecastRequest::GetAccuracyMetricsAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccuracyMetricsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccuracyMetricsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccuracyMetricsRequest::response(QNetworkReply * const reply) const
{
    return new GetAccuracyMetricsResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::GetAccuracyMetricsRequestPrivate
 * \brief The GetAccuracyMetricsRequestPrivate class provides private implementation for GetAccuracyMetricsRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a GetAccuracyMetricsRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
GetAccuracyMetricsRequestPrivate::GetAccuracyMetricsRequestPrivate(
    const ForecastRequest::Action action, GetAccuracyMetricsRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccuracyMetricsRequest
 * class' copy constructor.
 */
GetAccuracyMetricsRequestPrivate::GetAccuracyMetricsRequestPrivate(
    const GetAccuracyMetricsRequestPrivate &other, GetAccuracyMetricsRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
