// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettimelineeventrequest.h"
#include "gettimelineeventrequest_p.h"
#include "gettimelineeventresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::GetTimelineEventRequest
 * \brief The GetTimelineEventRequest class provides an interface for SsmIncidents GetTimelineEvent requests.
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
 * \sa SsmIncidentsClient::getTimelineEvent
 */

/*!
 * Constructs a copy of \a other.
 */
GetTimelineEventRequest::GetTimelineEventRequest(const GetTimelineEventRequest &other)
    : SsmIncidentsRequest(new GetTimelineEventRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTimelineEventRequest object.
 */
GetTimelineEventRequest::GetTimelineEventRequest()
    : SsmIncidentsRequest(new GetTimelineEventRequestPrivate(SsmIncidentsRequest::GetTimelineEventAction, this))
{

}

/*!
 * \reimp
 */
bool GetTimelineEventRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTimelineEventResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTimelineEventRequest::response(QNetworkReply * const reply) const
{
    return new GetTimelineEventResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::GetTimelineEventRequestPrivate
 * \brief The GetTimelineEventRequestPrivate class provides private implementation for GetTimelineEventRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a GetTimelineEventRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
GetTimelineEventRequestPrivate::GetTimelineEventRequestPrivate(
    const SsmIncidentsRequest::Action action, GetTimelineEventRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTimelineEventRequest
 * class' copy constructor.
 */
GetTimelineEventRequestPrivate::GetTimelineEventRequestPrivate(
    const GetTimelineEventRequestPrivate &other, GetTimelineEventRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
