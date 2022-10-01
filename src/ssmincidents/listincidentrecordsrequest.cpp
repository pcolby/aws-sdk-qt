// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listincidentrecordsrequest.h"
#include "listincidentrecordsrequest_p.h"
#include "listincidentrecordsresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::ListIncidentRecordsRequest
 * \brief The ListIncidentRecordsRequest class provides an interface for SsmIncidents ListIncidentRecords requests.
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
 * \sa SsmIncidentsClient::listIncidentRecords
 */

/*!
 * Constructs a copy of \a other.
 */
ListIncidentRecordsRequest::ListIncidentRecordsRequest(const ListIncidentRecordsRequest &other)
    : SsmIncidentsRequest(new ListIncidentRecordsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIncidentRecordsRequest object.
 */
ListIncidentRecordsRequest::ListIncidentRecordsRequest()
    : SsmIncidentsRequest(new ListIncidentRecordsRequestPrivate(SsmIncidentsRequest::ListIncidentRecordsAction, this))
{

}

/*!
 * \reimp
 */
bool ListIncidentRecordsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIncidentRecordsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIncidentRecordsRequest::response(QNetworkReply * const reply) const
{
    return new ListIncidentRecordsResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::ListIncidentRecordsRequestPrivate
 * \brief The ListIncidentRecordsRequestPrivate class provides private implementation for ListIncidentRecordsRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a ListIncidentRecordsRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
ListIncidentRecordsRequestPrivate::ListIncidentRecordsRequestPrivate(
    const SsmIncidentsRequest::Action action, ListIncidentRecordsRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIncidentRecordsRequest
 * class' copy constructor.
 */
ListIncidentRecordsRequestPrivate::ListIncidentRecordsRequestPrivate(
    const ListIncidentRecordsRequestPrivate &other, ListIncidentRecordsRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
