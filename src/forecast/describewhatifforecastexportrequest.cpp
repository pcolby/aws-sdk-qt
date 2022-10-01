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

#include "describewhatifforecastexportrequest.h"
#include "describewhatifforecastexportrequest_p.h"
#include "describewhatifforecastexportresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeWhatIfForecastExportRequest
 * \brief The DescribeWhatIfForecastExportRequest class provides an interface for Forecast DescribeWhatIfForecastExport requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeWhatIfForecastExport
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWhatIfForecastExportRequest::DescribeWhatIfForecastExportRequest(const DescribeWhatIfForecastExportRequest &other)
    : ForecastRequest(new DescribeWhatIfForecastExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWhatIfForecastExportRequest object.
 */
DescribeWhatIfForecastExportRequest::DescribeWhatIfForecastExportRequest()
    : ForecastRequest(new DescribeWhatIfForecastExportRequestPrivate(ForecastRequest::DescribeWhatIfForecastExportAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWhatIfForecastExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWhatIfForecastExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWhatIfForecastExportRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWhatIfForecastExportResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribeWhatIfForecastExportRequestPrivate
 * \brief The DescribeWhatIfForecastExportRequestPrivate class provides private implementation for DescribeWhatIfForecastExportRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeWhatIfForecastExportRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribeWhatIfForecastExportRequestPrivate::DescribeWhatIfForecastExportRequestPrivate(
    const ForecastRequest::Action action, DescribeWhatIfForecastExportRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWhatIfForecastExportRequest
 * class' copy constructor.
 */
DescribeWhatIfForecastExportRequestPrivate::DescribeWhatIfForecastExportRequestPrivate(
    const DescribeWhatIfForecastExportRequestPrivate &other, DescribeWhatIfForecastExportRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
