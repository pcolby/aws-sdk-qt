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

#include "createdatasetgrouprequest.h"
#include "createdatasetgrouprequest_p.h"
#include "createdatasetgroupresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateDatasetGroupRequest
 * \brief The CreateDatasetGroupRequest class provides an interface for Forecast CreateDatasetGroup requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createDatasetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDatasetGroupRequest::CreateDatasetGroupRequest(const CreateDatasetGroupRequest &other)
    : ForecastRequest(new CreateDatasetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDatasetGroupRequest object.
 */
CreateDatasetGroupRequest::CreateDatasetGroupRequest()
    : ForecastRequest(new CreateDatasetGroupRequestPrivate(ForecastRequest::CreateDatasetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDatasetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDatasetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDatasetGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateDatasetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateDatasetGroupRequestPrivate
 * \brief The CreateDatasetGroupRequestPrivate class provides private implementation for CreateDatasetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateDatasetGroupRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateDatasetGroupRequestPrivate::CreateDatasetGroupRequestPrivate(
    const ForecastRequest::Action action, CreateDatasetGroupRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDatasetGroupRequest
 * class' copy constructor.
 */
CreateDatasetGroupRequestPrivate::CreateDatasetGroupRequestPrivate(
    const CreateDatasetGroupRequestPrivate &other, CreateDatasetGroupRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
