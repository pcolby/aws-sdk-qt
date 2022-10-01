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

#include "deletewhatifforecastexportrequest.h"
#include "deletewhatifforecastexportrequest_p.h"
#include "deletewhatifforecastexportresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteWhatIfForecastExportRequest
 * \brief The DeleteWhatIfForecastExportRequest class provides an interface for Forecast DeleteWhatIfForecastExport requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteWhatIfForecastExport
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWhatIfForecastExportRequest::DeleteWhatIfForecastExportRequest(const DeleteWhatIfForecastExportRequest &other)
    : ForecastRequest(new DeleteWhatIfForecastExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWhatIfForecastExportRequest object.
 */
DeleteWhatIfForecastExportRequest::DeleteWhatIfForecastExportRequest()
    : ForecastRequest(new DeleteWhatIfForecastExportRequestPrivate(ForecastRequest::DeleteWhatIfForecastExportAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWhatIfForecastExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWhatIfForecastExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWhatIfForecastExportRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWhatIfForecastExportResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteWhatIfForecastExportRequestPrivate
 * \brief The DeleteWhatIfForecastExportRequestPrivate class provides private implementation for DeleteWhatIfForecastExportRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteWhatIfForecastExportRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteWhatIfForecastExportRequestPrivate::DeleteWhatIfForecastExportRequestPrivate(
    const ForecastRequest::Action action, DeleteWhatIfForecastExportRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWhatIfForecastExportRequest
 * class' copy constructor.
 */
DeleteWhatIfForecastExportRequestPrivate::DeleteWhatIfForecastExportRequestPrivate(
    const DeleteWhatIfForecastExportRequestPrivate &other, DeleteWhatIfForecastExportRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
