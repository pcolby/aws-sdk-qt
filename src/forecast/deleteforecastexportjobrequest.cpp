// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteforecastexportjobrequest.h"
#include "deleteforecastexportjobrequest_p.h"
#include "deleteforecastexportjobresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteForecastExportJobRequest
 * \brief The DeleteForecastExportJobRequest class provides an interface for Forecast DeleteForecastExportJob requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteForecastExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteForecastExportJobRequest::DeleteForecastExportJobRequest(const DeleteForecastExportJobRequest &other)
    : ForecastRequest(new DeleteForecastExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteForecastExportJobRequest object.
 */
DeleteForecastExportJobRequest::DeleteForecastExportJobRequest()
    : ForecastRequest(new DeleteForecastExportJobRequestPrivate(ForecastRequest::DeleteForecastExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteForecastExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteForecastExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteForecastExportJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteForecastExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteForecastExportJobRequestPrivate
 * \brief The DeleteForecastExportJobRequestPrivate class provides private implementation for DeleteForecastExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteForecastExportJobRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteForecastExportJobRequestPrivate::DeleteForecastExportJobRequestPrivate(
    const ForecastRequest::Action action, DeleteForecastExportJobRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteForecastExportJobRequest
 * class' copy constructor.
 */
DeleteForecastExportJobRequestPrivate::DeleteForecastExportJobRequestPrivate(
    const DeleteForecastExportJobRequestPrivate &other, DeleteForecastExportJobRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
