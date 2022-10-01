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

#include "createmonitorrequest.h"
#include "createmonitorrequest_p.h"
#include "createmonitorresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateMonitorRequest
 * \brief The CreateMonitorRequest class provides an interface for Forecast CreateMonitor requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createMonitor
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMonitorRequest::CreateMonitorRequest(const CreateMonitorRequest &other)
    : ForecastRequest(new CreateMonitorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMonitorRequest object.
 */
CreateMonitorRequest::CreateMonitorRequest()
    : ForecastRequest(new CreateMonitorRequestPrivate(ForecastRequest::CreateMonitorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMonitorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMonitorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMonitorRequest::response(QNetworkReply * const reply) const
{
    return new CreateMonitorResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateMonitorRequestPrivate
 * \brief The CreateMonitorRequestPrivate class provides private implementation for CreateMonitorRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateMonitorRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateMonitorRequestPrivate::CreateMonitorRequestPrivate(
    const ForecastRequest::Action action, CreateMonitorRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMonitorRequest
 * class' copy constructor.
 */
CreateMonitorRequestPrivate::CreateMonitorRequestPrivate(
    const CreateMonitorRequestPrivate &other, CreateMonitorRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
