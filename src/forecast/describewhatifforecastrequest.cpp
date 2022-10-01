// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describewhatifforecastrequest.h"
#include "describewhatifforecastrequest_p.h"
#include "describewhatifforecastresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeWhatIfForecastRequest
 * \brief The DescribeWhatIfForecastRequest class provides an interface for Forecast DescribeWhatIfForecast requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeWhatIfForecast
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWhatIfForecastRequest::DescribeWhatIfForecastRequest(const DescribeWhatIfForecastRequest &other)
    : ForecastRequest(new DescribeWhatIfForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWhatIfForecastRequest object.
 */
DescribeWhatIfForecastRequest::DescribeWhatIfForecastRequest()
    : ForecastRequest(new DescribeWhatIfForecastRequestPrivate(ForecastRequest::DescribeWhatIfForecastAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWhatIfForecastRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWhatIfForecastResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWhatIfForecastRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWhatIfForecastResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribeWhatIfForecastRequestPrivate
 * \brief The DescribeWhatIfForecastRequestPrivate class provides private implementation for DescribeWhatIfForecastRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeWhatIfForecastRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribeWhatIfForecastRequestPrivate::DescribeWhatIfForecastRequestPrivate(
    const ForecastRequest::Action action, DescribeWhatIfForecastRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWhatIfForecastRequest
 * class' copy constructor.
 */
DescribeWhatIfForecastRequestPrivate::DescribeWhatIfForecastRequestPrivate(
    const DescribeWhatIfForecastRequestPrivate &other, DescribeWhatIfForecastRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
