// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
