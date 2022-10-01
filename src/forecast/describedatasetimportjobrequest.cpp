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

#include "describedatasetimportjobrequest.h"
#include "describedatasetimportjobrequest_p.h"
#include "describedatasetimportjobresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeDatasetImportJobRequest
 * \brief The DescribeDatasetImportJobRequest class provides an interface for Forecast DescribeDatasetImportJob requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeDatasetImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDatasetImportJobRequest::DescribeDatasetImportJobRequest(const DescribeDatasetImportJobRequest &other)
    : ForecastRequest(new DescribeDatasetImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDatasetImportJobRequest object.
 */
DescribeDatasetImportJobRequest::DescribeDatasetImportJobRequest()
    : ForecastRequest(new DescribeDatasetImportJobRequestPrivate(ForecastRequest::DescribeDatasetImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDatasetImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDatasetImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDatasetImportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDatasetImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribeDatasetImportJobRequestPrivate
 * \brief The DescribeDatasetImportJobRequestPrivate class provides private implementation for DescribeDatasetImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeDatasetImportJobRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribeDatasetImportJobRequestPrivate::DescribeDatasetImportJobRequestPrivate(
    const ForecastRequest::Action action, DescribeDatasetImportJobRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDatasetImportJobRequest
 * class' copy constructor.
 */
DescribeDatasetImportJobRequestPrivate::DescribeDatasetImportJobRequestPrivate(
    const DescribeDatasetImportJobRequestPrivate &other, DescribeDatasetImportJobRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
