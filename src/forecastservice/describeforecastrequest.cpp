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

#include "describeforecastrequest.h"
#include "describeforecastrequest_p.h"
#include "describeforecastresponse.h"
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::DescribeForecastRequest
 * \brief The DescribeForecastRequest class provides an interface for ForecastService DescribeForecast requests.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::describeForecast
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeForecastRequest::DescribeForecastRequest(const DescribeForecastRequest &other)
    : ForecastServiceRequest(new DescribeForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeForecastRequest object.
 */
DescribeForecastRequest::DescribeForecastRequest()
    : ForecastServiceRequest(new DescribeForecastRequestPrivate(ForecastServiceRequest::DescribeForecastAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeForecastRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeForecastResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeForecastRequest::response(QNetworkReply * const reply) const
{
    return new DescribeForecastResponse(*this, reply);
}

/*!
 * \class QtAws::ForecastService::DescribeForecastRequestPrivate
 * \brief The DescribeForecastRequestPrivate class provides private implementation for DescribeForecastRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a DescribeForecastRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
DescribeForecastRequestPrivate::DescribeForecastRequestPrivate(
    const ForecastServiceRequest::Action action, DescribeForecastRequest * const q)
    : ForecastServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeForecastRequest
 * class' copy constructor.
 */
DescribeForecastRequestPrivate::DescribeForecastRequestPrivate(
    const DescribeForecastRequestPrivate &other, DescribeForecastRequest * const q)
    : ForecastServiceRequestPrivate(other, q)
{

}

} // namespace ForecastService
} // namespace QtAws
