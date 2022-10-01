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

#include "createexplainabilityexportrequest.h"
#include "createexplainabilityexportrequest_p.h"
#include "createexplainabilityexportresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateExplainabilityExportRequest
 * \brief The CreateExplainabilityExportRequest class provides an interface for Forecast CreateExplainabilityExport requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createExplainabilityExport
 */

/*!
 * Constructs a copy of \a other.
 */
CreateExplainabilityExportRequest::CreateExplainabilityExportRequest(const CreateExplainabilityExportRequest &other)
    : ForecastRequest(new CreateExplainabilityExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateExplainabilityExportRequest object.
 */
CreateExplainabilityExportRequest::CreateExplainabilityExportRequest()
    : ForecastRequest(new CreateExplainabilityExportRequestPrivate(ForecastRequest::CreateExplainabilityExportAction, this))
{

}

/*!
 * \reimp
 */
bool CreateExplainabilityExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateExplainabilityExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateExplainabilityExportRequest::response(QNetworkReply * const reply) const
{
    return new CreateExplainabilityExportResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateExplainabilityExportRequestPrivate
 * \brief The CreateExplainabilityExportRequestPrivate class provides private implementation for CreateExplainabilityExportRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateExplainabilityExportRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateExplainabilityExportRequestPrivate::CreateExplainabilityExportRequestPrivate(
    const ForecastRequest::Action action, CreateExplainabilityExportRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateExplainabilityExportRequest
 * class' copy constructor.
 */
CreateExplainabilityExportRequestPrivate::CreateExplainabilityExportRequestPrivate(
    const CreateExplainabilityExportRequestPrivate &other, CreateExplainabilityExportRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
