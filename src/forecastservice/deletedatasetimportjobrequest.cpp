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

#include "deletedatasetimportjobrequest.h"
#include "deletedatasetimportjobrequest_p.h"
#include "deletedatasetimportjobresponse.h"
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::DeleteDatasetImportJobRequest
 * \brief The DeleteDatasetImportJobRequest class provides an interface for ForecastService DeleteDatasetImportJob requests.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::deleteDatasetImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDatasetImportJobRequest::DeleteDatasetImportJobRequest(const DeleteDatasetImportJobRequest &other)
    : ForecastServiceRequest(new DeleteDatasetImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDatasetImportJobRequest object.
 */
DeleteDatasetImportJobRequest::DeleteDatasetImportJobRequest()
    : ForecastServiceRequest(new DeleteDatasetImportJobRequestPrivate(ForecastServiceRequest::DeleteDatasetImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDatasetImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDatasetImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDatasetImportJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDatasetImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::ForecastService::DeleteDatasetImportJobRequestPrivate
 * \brief The DeleteDatasetImportJobRequestPrivate class provides private implementation for DeleteDatasetImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a DeleteDatasetImportJobRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
DeleteDatasetImportJobRequestPrivate::DeleteDatasetImportJobRequestPrivate(
    const ForecastServiceRequest::Action action, DeleteDatasetImportJobRequest * const q)
    : ForecastServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDatasetImportJobRequest
 * class' copy constructor.
 */
DeleteDatasetImportJobRequestPrivate::DeleteDatasetImportJobRequestPrivate(
    const DeleteDatasetImportJobRequestPrivate &other, DeleteDatasetImportJobRequest * const q)
    : ForecastServiceRequestPrivate(other, q)
{

}

} // namespace ForecastService
} // namespace QtAws
