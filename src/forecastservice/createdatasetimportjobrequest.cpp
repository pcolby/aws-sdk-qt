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

#include "createdatasetimportjobrequest.h"
#include "createdatasetimportjobrequest_p.h"
#include "createdatasetimportjobresponse.h"
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::CreateDatasetImportJobRequest
 * \brief The CreateDatasetImportJobRequest class provides an interface for ForecastService CreateDatasetImportJob requests.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::createDatasetImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDatasetImportJobRequest::CreateDatasetImportJobRequest(const CreateDatasetImportJobRequest &other)
    : ForecastServiceRequest(new CreateDatasetImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDatasetImportJobRequest object.
 */
CreateDatasetImportJobRequest::CreateDatasetImportJobRequest()
    : ForecastServiceRequest(new CreateDatasetImportJobRequestPrivate(ForecastServiceRequest::CreateDatasetImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDatasetImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDatasetImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDatasetImportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateDatasetImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::ForecastService::CreateDatasetImportJobRequestPrivate
 * \brief The CreateDatasetImportJobRequestPrivate class provides private implementation for CreateDatasetImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a CreateDatasetImportJobRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
CreateDatasetImportJobRequestPrivate::CreateDatasetImportJobRequestPrivate(
    const ForecastServiceRequest::Action action, CreateDatasetImportJobRequest * const q)
    : ForecastServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDatasetImportJobRequest
 * class' copy constructor.
 */
CreateDatasetImportJobRequestPrivate::CreateDatasetImportJobRequestPrivate(
    const CreateDatasetImportJobRequestPrivate &other, CreateDatasetImportJobRequest * const q)
    : ForecastServiceRequestPrivate(other, q)
{

}

} // namespace ForecastService
} // namespace QtAws
