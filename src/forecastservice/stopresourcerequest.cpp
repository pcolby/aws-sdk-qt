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

#include "stopresourcerequest.h"
#include "stopresourcerequest_p.h"
#include "stopresourceresponse.h"
#include "forecastservicerequest_p.h"

namespace QtAws {
namespace ForecastService {

/*!
 * \class QtAws::ForecastService::StopResourceRequest
 * \brief The StopResourceRequest class provides an interface for ForecastService StopResource requests.
 *
 * \inmodule QtAwsForecastService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastServiceClient::stopResource
 */

/*!
 * Constructs a copy of \a other.
 */
StopResourceRequest::StopResourceRequest(const StopResourceRequest &other)
    : ForecastServiceRequest(new StopResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopResourceRequest object.
 */
StopResourceRequest::StopResourceRequest()
    : ForecastServiceRequest(new StopResourceRequestPrivate(ForecastServiceRequest::StopResourceAction, this))
{

}

/*!
 * \reimp
 */
bool StopResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopResourceRequest::response(QNetworkReply * const reply) const
{
    return new StopResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ForecastService::StopResourceRequestPrivate
 * \brief The StopResourceRequestPrivate class provides private implementation for StopResourceRequest.
 * \internal
 *
 * \inmodule QtAwsForecastService
 */

/*!
 * Constructs a StopResourceRequestPrivate object for ForecastService \a action,
 * with public implementation \a q.
 */
StopResourceRequestPrivate::StopResourceRequestPrivate(
    const ForecastServiceRequest::Action action, StopResourceRequest * const q)
    : ForecastServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopResourceRequest
 * class' copy constructor.
 */
StopResourceRequestPrivate::StopResourceRequestPrivate(
    const StopResourceRequestPrivate &other, StopResourceRequest * const q)
    : ForecastServiceRequestPrivate(other, q)
{

}

} // namespace ForecastService
} // namespace QtAws
