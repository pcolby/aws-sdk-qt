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
