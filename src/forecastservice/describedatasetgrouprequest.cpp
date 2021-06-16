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

#include "describedatasetgrouprequest.h"
#include "describedatasetgrouprequest_p.h"
#include "describedatasetgroupresponse.h"
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::DescribeDatasetGroupRequest
 * \brief The DescribeDatasetGroupRequest class provides an interface for ForecastService DescribeDatasetGroup requests.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::describeDatasetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDatasetGroupRequest::DescribeDatasetGroupRequest(const DescribeDatasetGroupRequest &other)
    : ForecastServiceRequest(new DescribeDatasetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDatasetGroupRequest object.
 */
DescribeDatasetGroupRequest::DescribeDatasetGroupRequest()
    : ForecastServiceRequest(new DescribeDatasetGroupRequestPrivate(ForecastServiceRequest::DescribeDatasetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDatasetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDatasetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDatasetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDatasetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ForecastService::DescribeDatasetGroupRequestPrivate
 * \brief The DescribeDatasetGroupRequestPrivate class provides private implementation for DescribeDatasetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a DescribeDatasetGroupRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
DescribeDatasetGroupRequestPrivate::DescribeDatasetGroupRequestPrivate(
    const ForecastServiceRequest::Action action, DescribeDatasetGroupRequest * const q)
    : ForecastServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDatasetGroupRequest
 * class' copy constructor.
 */
DescribeDatasetGroupRequestPrivate::DescribeDatasetGroupRequestPrivate(
    const DescribeDatasetGroupRequestPrivate &other, DescribeDatasetGroupRequest * const q)
    : ForecastServiceRequestPrivate(other, q)
{

}

} // namespace ForecastService
} // namespace QtAws
