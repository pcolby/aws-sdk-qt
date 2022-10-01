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

#include "deletemonitorrequest.h"
#include "deletemonitorrequest_p.h"
#include "deletemonitorresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteMonitorRequest
 * \brief The DeleteMonitorRequest class provides an interface for Forecast DeleteMonitor requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteMonitor
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMonitorRequest::DeleteMonitorRequest(const DeleteMonitorRequest &other)
    : ForecastRequest(new DeleteMonitorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMonitorRequest object.
 */
DeleteMonitorRequest::DeleteMonitorRequest()
    : ForecastRequest(new DeleteMonitorRequestPrivate(ForecastRequest::DeleteMonitorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMonitorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMonitorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMonitorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMonitorResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteMonitorRequestPrivate
 * \brief The DeleteMonitorRequestPrivate class provides private implementation for DeleteMonitorRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteMonitorRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteMonitorRequestPrivate::DeleteMonitorRequestPrivate(
    const ForecastRequest::Action action, DeleteMonitorRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMonitorRequest
 * class' copy constructor.
 */
DeleteMonitorRequestPrivate::DeleteMonitorRequestPrivate(
    const DeleteMonitorRequestPrivate &other, DeleteMonitorRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
