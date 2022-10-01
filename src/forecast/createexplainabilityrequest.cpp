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

#include "createexplainabilityrequest.h"
#include "createexplainabilityrequest_p.h"
#include "createexplainabilityresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateExplainabilityRequest
 * \brief The CreateExplainabilityRequest class provides an interface for Forecast CreateExplainability requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createExplainability
 */

/*!
 * Constructs a copy of \a other.
 */
CreateExplainabilityRequest::CreateExplainabilityRequest(const CreateExplainabilityRequest &other)
    : ForecastRequest(new CreateExplainabilityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateExplainabilityRequest object.
 */
CreateExplainabilityRequest::CreateExplainabilityRequest()
    : ForecastRequest(new CreateExplainabilityRequestPrivate(ForecastRequest::CreateExplainabilityAction, this))
{

}

/*!
 * \reimp
 */
bool CreateExplainabilityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateExplainabilityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateExplainabilityRequest::response(QNetworkReply * const reply) const
{
    return new CreateExplainabilityResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateExplainabilityRequestPrivate
 * \brief The CreateExplainabilityRequestPrivate class provides private implementation for CreateExplainabilityRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateExplainabilityRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateExplainabilityRequestPrivate::CreateExplainabilityRequestPrivate(
    const ForecastRequest::Action action, CreateExplainabilityRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateExplainabilityRequest
 * class' copy constructor.
 */
CreateExplainabilityRequestPrivate::CreateExplainabilityRequestPrivate(
    const CreateExplainabilityRequestPrivate &other, CreateExplainabilityRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
