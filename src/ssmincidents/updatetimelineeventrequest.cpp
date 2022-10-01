// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetimelineeventrequest.h"
#include "updatetimelineeventrequest_p.h"
#include "updatetimelineeventresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::UpdateTimelineEventRequest
 * \brief The UpdateTimelineEventRequest class provides an interface for SsmIncidents UpdateTimelineEvent requests.
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
 * \sa SsmIncidentsClient::updateTimelineEvent
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTimelineEventRequest::UpdateTimelineEventRequest(const UpdateTimelineEventRequest &other)
    : SsmIncidentsRequest(new UpdateTimelineEventRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTimelineEventRequest object.
 */
UpdateTimelineEventRequest::UpdateTimelineEventRequest()
    : SsmIncidentsRequest(new UpdateTimelineEventRequestPrivate(SsmIncidentsRequest::UpdateTimelineEventAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTimelineEventRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTimelineEventResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTimelineEventRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTimelineEventResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::UpdateTimelineEventRequestPrivate
 * \brief The UpdateTimelineEventRequestPrivate class provides private implementation for UpdateTimelineEventRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a UpdateTimelineEventRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
UpdateTimelineEventRequestPrivate::UpdateTimelineEventRequestPrivate(
    const SsmIncidentsRequest::Action action, UpdateTimelineEventRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTimelineEventRequest
 * class' copy constructor.
 */
UpdateTimelineEventRequestPrivate::UpdateTimelineEventRequestPrivate(
    const UpdateTimelineEventRequestPrivate &other, UpdateTimelineEventRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
