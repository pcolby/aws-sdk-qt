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

#include "resumeresourcerequest.h"
#include "resumeresourcerequest_p.h"
#include "resumeresourceresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ResumeResourceRequest
 * \brief The ResumeResourceRequest class provides an interface for Forecast ResumeResource requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::resumeResource
 */

/*!
 * Constructs a copy of \a other.
 */
ResumeResourceRequest::ResumeResourceRequest(const ResumeResourceRequest &other)
    : ForecastRequest(new ResumeResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResumeResourceRequest object.
 */
ResumeResourceRequest::ResumeResourceRequest()
    : ForecastRequest(new ResumeResourceRequestPrivate(ForecastRequest::ResumeResourceAction, this))
{

}

/*!
 * \reimp
 */
bool ResumeResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResumeResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResumeResourceRequest::response(QNetworkReply * const reply) const
{
    return new ResumeResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ResumeResourceRequestPrivate
 * \brief The ResumeResourceRequestPrivate class provides private implementation for ResumeResourceRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ResumeResourceRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ResumeResourceRequestPrivate::ResumeResourceRequestPrivate(
    const ForecastRequest::Action action, ResumeResourceRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResumeResourceRequest
 * class' copy constructor.
 */
ResumeResourceRequestPrivate::ResumeResourceRequestPrivate(
    const ResumeResourceRequestPrivate &other, ResumeResourceRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
