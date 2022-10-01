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
