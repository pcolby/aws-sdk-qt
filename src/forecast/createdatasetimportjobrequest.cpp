// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetimportjobrequest.h"
#include "createdatasetimportjobrequest_p.h"
#include "createdatasetimportjobresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateDatasetImportJobRequest
 * \brief The CreateDatasetImportJobRequest class provides an interface for Forecast CreateDatasetImportJob requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createDatasetImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDatasetImportJobRequest::CreateDatasetImportJobRequest(const CreateDatasetImportJobRequest &other)
    : ForecastRequest(new CreateDatasetImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDatasetImportJobRequest object.
 */
CreateDatasetImportJobRequest::CreateDatasetImportJobRequest()
    : ForecastRequest(new CreateDatasetImportJobRequestPrivate(ForecastRequest::CreateDatasetImportJobAction, this))
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
 * \class QtAws::Forecast::CreateDatasetImportJobRequestPrivate
 * \brief The CreateDatasetImportJobRequestPrivate class provides private implementation for CreateDatasetImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateDatasetImportJobRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateDatasetImportJobRequestPrivate::CreateDatasetImportJobRequestPrivate(
    const ForecastRequest::Action action, CreateDatasetImportJobRequest * const q)
    : ForecastRequestPrivate(action, q)
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
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
