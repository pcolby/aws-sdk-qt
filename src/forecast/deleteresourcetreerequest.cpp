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

#include "deleteresourcetreerequest.h"
#include "deleteresourcetreerequest_p.h"
#include "deleteresourcetreeresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteResourceTreeRequest
 * \brief The DeleteResourceTreeRequest class provides an interface for Forecast DeleteResourceTree requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteResourceTree
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResourceTreeRequest::DeleteResourceTreeRequest(const DeleteResourceTreeRequest &other)
    : ForecastRequest(new DeleteResourceTreeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResourceTreeRequest object.
 */
DeleteResourceTreeRequest::DeleteResourceTreeRequest()
    : ForecastRequest(new DeleteResourceTreeRequestPrivate(ForecastRequest::DeleteResourceTreeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResourceTreeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResourceTreeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourceTreeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourceTreeResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteResourceTreeRequestPrivate
 * \brief The DeleteResourceTreeRequestPrivate class provides private implementation for DeleteResourceTreeRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteResourceTreeRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteResourceTreeRequestPrivate::DeleteResourceTreeRequestPrivate(
    const ForecastRequest::Action action, DeleteResourceTreeRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourceTreeRequest
 * class' copy constructor.
 */
DeleteResourceTreeRequestPrivate::DeleteResourceTreeRequestPrivate(
    const DeleteResourceTreeRequestPrivate &other, DeleteResourceTreeRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
