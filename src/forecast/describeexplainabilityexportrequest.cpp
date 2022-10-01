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

#include "describeexplainabilityexportrequest.h"
#include "describeexplainabilityexportrequest_p.h"
#include "describeexplainabilityexportresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeExplainabilityExportRequest
 * \brief The DescribeExplainabilityExportRequest class provides an interface for Forecast DescribeExplainabilityExport requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeExplainabilityExport
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeExplainabilityExportRequest::DescribeExplainabilityExportRequest(const DescribeExplainabilityExportRequest &other)
    : ForecastRequest(new DescribeExplainabilityExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeExplainabilityExportRequest object.
 */
DescribeExplainabilityExportRequest::DescribeExplainabilityExportRequest()
    : ForecastRequest(new DescribeExplainabilityExportRequestPrivate(ForecastRequest::DescribeExplainabilityExportAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeExplainabilityExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeExplainabilityExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeExplainabilityExportRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExplainabilityExportResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribeExplainabilityExportRequestPrivate
 * \brief The DescribeExplainabilityExportRequestPrivate class provides private implementation for DescribeExplainabilityExportRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeExplainabilityExportRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribeExplainabilityExportRequestPrivate::DescribeExplainabilityExportRequestPrivate(
    const ForecastRequest::Action action, DescribeExplainabilityExportRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeExplainabilityExportRequest
 * class' copy constructor.
 */
DescribeExplainabilityExportRequestPrivate::DescribeExplainabilityExportRequestPrivate(
    const DescribeExplainabilityExportRequestPrivate &other, DescribeExplainabilityExportRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
