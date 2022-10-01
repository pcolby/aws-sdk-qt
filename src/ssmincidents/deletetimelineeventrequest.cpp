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

#include "deletetimelineeventrequest.h"
#include "deletetimelineeventrequest_p.h"
#include "deletetimelineeventresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::DeleteTimelineEventRequest
 * \brief The DeleteTimelineEventRequest class provides an interface for SsmIncidents DeleteTimelineEvent requests.
 *
 * \inmodule QtAwsSsmIncidents
 *
 *  Systems Manager Incident Manager is an incident management console designed to help users mitigate and recover from
 *  incidents affecting their Amazon Web Services-hosted applications. An incident is any unplanned interruption or
 *  reduction in quality of services.
 * 
 *  </p
 * 
 *  Incident Manager increases incident resolution by notifying responders of impact, highlighting relevant troubleshooting
 *  data, and providing collaboration tools to get services back up and running. To achieve the primary goal of reducing the
 *  time-to-resolution of critical incidents, Incident Manager automates response plans and enables responder team
 *  escalation.
 *
 * \sa SsmIncidentsClient::deleteTimelineEvent
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTimelineEventRequest::DeleteTimelineEventRequest(const DeleteTimelineEventRequest &other)
    : SsmIncidentsRequest(new DeleteTimelineEventRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTimelineEventRequest object.
 */
DeleteTimelineEventRequest::DeleteTimelineEventRequest()
    : SsmIncidentsRequest(new DeleteTimelineEventRequestPrivate(SsmIncidentsRequest::DeleteTimelineEventAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTimelineEventRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTimelineEventResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTimelineEventRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTimelineEventResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::DeleteTimelineEventRequestPrivate
 * \brief The DeleteTimelineEventRequestPrivate class provides private implementation for DeleteTimelineEventRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a DeleteTimelineEventRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
DeleteTimelineEventRequestPrivate::DeleteTimelineEventRequestPrivate(
    const SsmIncidentsRequest::Action action, DeleteTimelineEventRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTimelineEventRequest
 * class' copy constructor.
 */
DeleteTimelineEventRequestPrivate::DeleteTimelineEventRequestPrivate(
    const DeleteTimelineEventRequestPrivate &other, DeleteTimelineEventRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
