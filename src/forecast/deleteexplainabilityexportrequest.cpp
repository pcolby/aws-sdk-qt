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

#include "deleteexplainabilityexportrequest.h"
#include "deleteexplainabilityexportrequest_p.h"
#include "deleteexplainabilityexportresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteExplainabilityExportRequest
 * \brief The DeleteExplainabilityExportRequest class provides an interface for Forecast DeleteExplainabilityExport requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteExplainabilityExport
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteExplainabilityExportRequest::DeleteExplainabilityExportRequest(const DeleteExplainabilityExportRequest &other)
    : ForecastRequest(new DeleteExplainabilityExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteExplainabilityExportRequest object.
 */
DeleteExplainabilityExportRequest::DeleteExplainabilityExportRequest()
    : ForecastRequest(new DeleteExplainabilityExportRequestPrivate(ForecastRequest::DeleteExplainabilityExportAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteExplainabilityExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteExplainabilityExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteExplainabilityExportRequest::response(QNetworkReply * const reply) const
{
    return new DeleteExplainabilityExportResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteExplainabilityExportRequestPrivate
 * \brief The DeleteExplainabilityExportRequestPrivate class provides private implementation for DeleteExplainabilityExportRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteExplainabilityExportRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteExplainabilityExportRequestPrivate::DeleteExplainabilityExportRequestPrivate(
    const ForecastRequest::Action action, DeleteExplainabilityExportRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteExplainabilityExportRequest
 * class' copy constructor.
 */
DeleteExplainabilityExportRequestPrivate::DeleteExplainabilityExportRequestPrivate(
    const DeleteExplainabilityExportRequestPrivate &other, DeleteExplainabilityExportRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
