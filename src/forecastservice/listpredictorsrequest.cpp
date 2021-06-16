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

#include "listpredictorsrequest.h"
#include "listpredictorsrequest_p.h"
#include "listpredictorsresponse.h"
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::ListPredictorsRequest
 * \brief The ListPredictorsRequest class provides an interface for ForecastService ListPredictors requests.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::listPredictors
 */

/*!
 * Constructs a copy of \a other.
 */
ListPredictorsRequest::ListPredictorsRequest(const ListPredictorsRequest &other)
    : ForecastServiceRequest(new ListPredictorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPredictorsRequest object.
 */
ListPredictorsRequest::ListPredictorsRequest()
    : ForecastServiceRequest(new ListPredictorsRequestPrivate(ForecastServiceRequest::ListPredictorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPredictorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPredictorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPredictorsRequest::response(QNetworkReply * const reply) const
{
    return new ListPredictorsResponse(*this, reply);
}

/*!
 * \class QtAws::ForecastService::ListPredictorsRequestPrivate
 * \brief The ListPredictorsRequestPrivate class provides private implementation for ListPredictorsRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a ListPredictorsRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
ListPredictorsRequestPrivate::ListPredictorsRequestPrivate(
    const ForecastServiceRequest::Action action, ListPredictorsRequest * const q)
    : ForecastServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPredictorsRequest
 * class' copy constructor.
 */
ListPredictorsRequestPrivate::ListPredictorsRequestPrivate(
    const ListPredictorsRequestPrivate &other, ListPredictorsRequest * const q)
    : ForecastServiceRequestPrivate(other, q)
{

}

} // namespace ForecastService
} // namespace QtAws
