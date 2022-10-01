// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createforecastexportjobrequest.h"
#include "createforecastexportjobrequest_p.h"
#include "createforecastexportjobresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateForecastExportJobRequest
 * \brief The CreateForecastExportJobRequest class provides an interface for Forecast CreateForecastExportJob requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createForecastExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateForecastExportJobRequest::CreateForecastExportJobRequest(const CreateForecastExportJobRequest &other)
    : ForecastRequest(new CreateForecastExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateForecastExportJobRequest object.
 */
CreateForecastExportJobRequest::CreateForecastExportJobRequest()
    : ForecastRequest(new CreateForecastExportJobRequestPrivate(ForecastRequest::CreateForecastExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateForecastExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateForecastExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateForecastExportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateForecastExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateForecastExportJobRequestPrivate
 * \brief The CreateForecastExportJobRequestPrivate class provides private implementation for CreateForecastExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateForecastExportJobRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateForecastExportJobRequestPrivate::CreateForecastExportJobRequestPrivate(
    const ForecastRequest::Action action, CreateForecastExportJobRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateForecastExportJobRequest
 * class' copy constructor.
 */
CreateForecastExportJobRequestPrivate::CreateForecastExportJobRequestPrivate(
    const CreateForecastExportJobRequestPrivate &other, CreateForecastExportJobRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
