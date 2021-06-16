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

#include "updatedatasetgrouprequest.h"
#include "updatedatasetgrouprequest_p.h"
#include "updatedatasetgroupresponse.h"
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::UpdateDatasetGroupRequest
 * \brief The UpdateDatasetGroupRequest class provides an interface for ForecastService UpdateDatasetGroup requests.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::updateDatasetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDatasetGroupRequest::UpdateDatasetGroupRequest(const UpdateDatasetGroupRequest &other)
    : ForecastServiceRequest(new UpdateDatasetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDatasetGroupRequest object.
 */
UpdateDatasetGroupRequest::UpdateDatasetGroupRequest()
    : ForecastServiceRequest(new UpdateDatasetGroupRequestPrivate(ForecastServiceRequest::UpdateDatasetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDatasetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDatasetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDatasetGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDatasetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ForecastService::UpdateDatasetGroupRequestPrivate
 * \brief The UpdateDatasetGroupRequestPrivate class provides private implementation for UpdateDatasetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a UpdateDatasetGroupRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
UpdateDatasetGroupRequestPrivate::UpdateDatasetGroupRequestPrivate(
    const ForecastServiceRequest::Action action, UpdateDatasetGroupRequest * const q)
    : ForecastServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDatasetGroupRequest
 * class' copy constructor.
 */
UpdateDatasetGroupRequestPrivate::UpdateDatasetGroupRequestPrivate(
    const UpdateDatasetGroupRequestPrivate &other, UpdateDatasetGroupRequest * const q)
    : ForecastServiceRequestPrivate(other, q)
{

}

} // namespace ForecastService
} // namespace QtAws
