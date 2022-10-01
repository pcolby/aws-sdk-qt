// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getincidentrecordrequest.h"
#include "getincidentrecordrequest_p.h"
#include "getincidentrecordresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::GetIncidentRecordRequest
 * \brief The GetIncidentRecordRequest class provides an interface for SsmIncidents GetIncidentRecord requests.
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
 * \sa SsmIncidentsClient::getIncidentRecord
 */

/*!
 * Constructs a copy of \a other.
 */
GetIncidentRecordRequest::GetIncidentRecordRequest(const GetIncidentRecordRequest &other)
    : SsmIncidentsRequest(new GetIncidentRecordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIncidentRecordRequest object.
 */
GetIncidentRecordRequest::GetIncidentRecordRequest()
    : SsmIncidentsRequest(new GetIncidentRecordRequestPrivate(SsmIncidentsRequest::GetIncidentRecordAction, this))
{

}

/*!
 * \reimp
 */
bool GetIncidentRecordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIncidentRecordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIncidentRecordRequest::response(QNetworkReply * const reply) const
{
    return new GetIncidentRecordResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::GetIncidentRecordRequestPrivate
 * \brief The GetIncidentRecordRequestPrivate class provides private implementation for GetIncidentRecordRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a GetIncidentRecordRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
GetIncidentRecordRequestPrivate::GetIncidentRecordRequestPrivate(
    const SsmIncidentsRequest::Action action, GetIncidentRecordRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIncidentRecordRequest
 * class' copy constructor.
 */
GetIncidentRecordRequestPrivate::GetIncidentRecordRequestPrivate(
    const GetIncidentRecordRequestPrivate &other, GetIncidentRecordRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
