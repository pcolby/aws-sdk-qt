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

#include "createwhatifforecastexportrequest.h"
#include "createwhatifforecastexportrequest_p.h"
#include "createwhatifforecastexportresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateWhatIfForecastExportRequest
 * \brief The CreateWhatIfForecastExportRequest class provides an interface for Forecast CreateWhatIfForecastExport requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createWhatIfForecastExport
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWhatIfForecastExportRequest::CreateWhatIfForecastExportRequest(const CreateWhatIfForecastExportRequest &other)
    : ForecastRequest(new CreateWhatIfForecastExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWhatIfForecastExportRequest object.
 */
CreateWhatIfForecastExportRequest::CreateWhatIfForecastExportRequest()
    : ForecastRequest(new CreateWhatIfForecastExportRequestPrivate(ForecastRequest::CreateWhatIfForecastExportAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWhatIfForecastExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWhatIfForecastExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWhatIfForecastExportRequest::response(QNetworkReply * const reply) const
{
    return new CreateWhatIfForecastExportResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateWhatIfForecastExportRequestPrivate
 * \brief The CreateWhatIfForecastExportRequestPrivate class provides private implementation for CreateWhatIfForecastExportRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateWhatIfForecastExportRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateWhatIfForecastExportRequestPrivate::CreateWhatIfForecastExportRequestPrivate(
    const ForecastRequest::Action action, CreateWhatIfForecastExportRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWhatIfForecastExportRequest
 * class' copy constructor.
 */
CreateWhatIfForecastExportRequestPrivate::CreateWhatIfForecastExportRequestPrivate(
    const CreateWhatIfForecastExportRequestPrivate &other, CreateWhatIfForecastExportRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
