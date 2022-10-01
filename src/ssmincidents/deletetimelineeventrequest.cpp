// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
