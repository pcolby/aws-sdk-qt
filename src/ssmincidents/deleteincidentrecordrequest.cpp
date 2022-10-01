// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteincidentrecordrequest.h"
#include "deleteincidentrecordrequest_p.h"
#include "deleteincidentrecordresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::DeleteIncidentRecordRequest
 * \brief The DeleteIncidentRecordRequest class provides an interface for SsmIncidents DeleteIncidentRecord requests.
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
 * \sa SsmIncidentsClient::deleteIncidentRecord
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIncidentRecordRequest::DeleteIncidentRecordRequest(const DeleteIncidentRecordRequest &other)
    : SsmIncidentsRequest(new DeleteIncidentRecordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIncidentRecordRequest object.
 */
DeleteIncidentRecordRequest::DeleteIncidentRecordRequest()
    : SsmIncidentsRequest(new DeleteIncidentRecordRequestPrivate(SsmIncidentsRequest::DeleteIncidentRecordAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIncidentRecordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIncidentRecordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIncidentRecordRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIncidentRecordResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::DeleteIncidentRecordRequestPrivate
 * \brief The DeleteIncidentRecordRequestPrivate class provides private implementation for DeleteIncidentRecordRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a DeleteIncidentRecordRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
DeleteIncidentRecordRequestPrivate::DeleteIncidentRecordRequestPrivate(
    const SsmIncidentsRequest::Action action, DeleteIncidentRecordRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIncidentRecordRequest
 * class' copy constructor.
 */
DeleteIncidentRecordRequestPrivate::DeleteIncidentRecordRequestPrivate(
    const DeleteIncidentRecordRequestPrivate &other, DeleteIncidentRecordRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
