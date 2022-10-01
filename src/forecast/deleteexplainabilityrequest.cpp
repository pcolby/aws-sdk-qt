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

#include "deleteexplainabilityrequest.h"
#include "deleteexplainabilityrequest_p.h"
#include "deleteexplainabilityresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteExplainabilityRequest
 * \brief The DeleteExplainabilityRequest class provides an interface for Forecast DeleteExplainability requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteExplainability
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteExplainabilityRequest::DeleteExplainabilityRequest(const DeleteExplainabilityRequest &other)
    : ForecastRequest(new DeleteExplainabilityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteExplainabilityRequest object.
 */
DeleteExplainabilityRequest::DeleteExplainabilityRequest()
    : ForecastRequest(new DeleteExplainabilityRequestPrivate(ForecastRequest::DeleteExplainabilityAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteExplainabilityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteExplainabilityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteExplainabilityRequest::response(QNetworkReply * const reply) const
{
    return new DeleteExplainabilityResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteExplainabilityRequestPrivate
 * \brief The DeleteExplainabilityRequestPrivate class provides private implementation for DeleteExplainabilityRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteExplainabilityRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteExplainabilityRequestPrivate::DeleteExplainabilityRequestPrivate(
    const ForecastRequest::Action action, DeleteExplainabilityRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteExplainabilityRequest
 * class' copy constructor.
 */
DeleteExplainabilityRequestPrivate::DeleteExplainabilityRequestPrivate(
    const DeleteExplainabilityRequestPrivate &other, DeleteExplainabilityRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
