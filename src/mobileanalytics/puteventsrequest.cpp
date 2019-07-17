/*
    Copyright 2013-2019 Paul Colby

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

#include "puteventsrequest.h"
#include "puteventsrequest_p.h"
#include "puteventsresponse.h"
#include "mobileanalyticsrequest_p.h"

namespace QtAws {
namespace MobileAnalytics {

/*!
 * \class QtAws::MobileAnalytics::PutEventsRequest
 * \brief The PutEventsRequest class provides an interface for MobileAnalytics PutEvents requests.
 *
 * \inmodule QtAwsMobileAnalytics
 *
 *  Amazon Mobile Analytics is a service for collecting, visualizing, and understanding app usage data at
 *
 * \sa MobileAnalyticsClient::putEvents
 */

/*!
 * Constructs a copy of \a other.
 */
PutEventsRequest::PutEventsRequest(const PutEventsRequest &other)
    : MobileAnalyticsRequest(new PutEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutEventsRequest object.
 */
PutEventsRequest::PutEventsRequest()
    : MobileAnalyticsRequest(new PutEventsRequestPrivate(MobileAnalyticsRequest::PutEventsAction, this))
{

}

/*!
 * \reimp
 */
bool PutEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutEventsRequest::response(QNetworkReply * const reply) const
{
    return new PutEventsResponse(*this, reply);
}

/*!
 * \class QtAws::MobileAnalytics::PutEventsRequestPrivate
 * \brief The PutEventsRequestPrivate class provides private implementation for PutEventsRequest.
 * \internal
 *
 * \inmodule QtAwsMobileAnalytics
 */

/*!
 * Constructs a PutEventsRequestPrivate object for MobileAnalytics \a action,
 * with public implementation \a q.
 */
PutEventsRequestPrivate::PutEventsRequestPrivate(
    const MobileAnalyticsRequest::Action action, PutEventsRequest * const q)
    : MobileAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutEventsRequest
 * class' copy constructor.
 */
PutEventsRequestPrivate::PutEventsRequestPrivate(
    const PutEventsRequestPrivate &other, PutEventsRequest * const q)
    : MobileAnalyticsRequestPrivate(other, q)
{

}

} // namespace MobileAnalytics
} // namespace QtAws
