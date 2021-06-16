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

#include "startincidentrequest.h"
#include "startincidentrequest_p.h"
#include "startincidentresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SSMIncidents {

/*!
 * \class QtAws::SSMIncidents::StartIncidentRequest
 * \brief The StartIncidentRequest class provides an interface for SSMIncidents StartIncident requests.
 *
 * \inmodule QtAwsSSMIncidents
 *
 *  AWS Systems Manager Incident Manager is an incident management console designed to help users mitigate and recover from
 *  incidents affecting their AWS-hosted applications. An incident is any unplanned interruption or reduction in quality of
 *  services.
 * 
 *  </p
 * 
 *  Incident Manager increases incident resolution by notifying responders of impact, highlighting relevant troubleshooting
 *  data, and providing collaboration tools to get services back up and running. To achieve the primary goal of reducing the
 *  time-to-resolution of critical incidents, Incident Manager automates response plans and enables responder team
 *  escalation.
 *
 * \sa SSMIncidentsClient::startIncident
 */

/*!
 * Constructs a copy of \a other.
 */
StartIncidentRequest::StartIncidentRequest(const StartIncidentRequest &other)
    : SSMIncidentsRequest(new StartIncidentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartIncidentRequest object.
 */
StartIncidentRequest::StartIncidentRequest()
    : SSMIncidentsRequest(new StartIncidentRequestPrivate(SSMIncidentsRequest::StartIncidentAction, this))
{

}

/*!
 * \reimp
 */
bool StartIncidentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartIncidentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartIncidentRequest::response(QNetworkReply * const reply) const
{
    return new StartIncidentResponse(*this, reply);
}

/*!
 * \class QtAws::SSMIncidents::StartIncidentRequestPrivate
 * \brief The StartIncidentRequestPrivate class provides private implementation for StartIncidentRequest.
 * \internal
 *
 * \inmodule QtAwsSSMIncidents
 */

/*!
 * Constructs a StartIncidentRequestPrivate object for SSMIncidents \a action,
 * with public implementation \a q.
 */
StartIncidentRequestPrivate::StartIncidentRequestPrivate(
    const SSMIncidentsRequest::Action action, StartIncidentRequest * const q)
    : SSMIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartIncidentRequest
 * class' copy constructor.
 */
StartIncidentRequestPrivate::StartIncidentRequestPrivate(
    const StartIncidentRequestPrivate &other, StartIncidentRequest * const q)
    : SSMIncidentsRequestPrivate(other, q)
{

}

} // namespace SSMIncidents
} // namespace QtAws
