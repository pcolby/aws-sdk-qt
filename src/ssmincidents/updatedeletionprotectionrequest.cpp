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

#include "updatedeletionprotectionrequest.h"
#include "updatedeletionprotectionrequest_p.h"
#include "updatedeletionprotectionresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SSMIncidents {

/*!
 * \class QtAws::SSMIncidents::UpdateDeletionProtectionRequest
 * \brief The UpdateDeletionProtectionRequest class provides an interface for SSMIncidents UpdateDeletionProtection requests.
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
 * \sa SSMIncidentsClient::updateDeletionProtection
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDeletionProtectionRequest::UpdateDeletionProtectionRequest(const UpdateDeletionProtectionRequest &other)
    : SSMIncidentsRequest(new UpdateDeletionProtectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDeletionProtectionRequest object.
 */
UpdateDeletionProtectionRequest::UpdateDeletionProtectionRequest()
    : SSMIncidentsRequest(new UpdateDeletionProtectionRequestPrivate(SSMIncidentsRequest::UpdateDeletionProtectionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDeletionProtectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDeletionProtectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDeletionProtectionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeletionProtectionResponse(*this, reply);
}

/*!
 * \class QtAws::SSMIncidents::UpdateDeletionProtectionRequestPrivate
 * \brief The UpdateDeletionProtectionRequestPrivate class provides private implementation for UpdateDeletionProtectionRequest.
 * \internal
 *
 * \inmodule QtAwsSSMIncidents
 */

/*!
 * Constructs a UpdateDeletionProtectionRequestPrivate object for SSMIncidents \a action,
 * with public implementation \a q.
 */
UpdateDeletionProtectionRequestPrivate::UpdateDeletionProtectionRequestPrivate(
    const SSMIncidentsRequest::Action action, UpdateDeletionProtectionRequest * const q)
    : SSMIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeletionProtectionRequest
 * class' copy constructor.
 */
UpdateDeletionProtectionRequestPrivate::UpdateDeletionProtectionRequestPrivate(
    const UpdateDeletionProtectionRequestPrivate &other, UpdateDeletionProtectionRequest * const q)
    : SSMIncidentsRequestPrivate(other, q)
{

}

} // namespace SSMIncidents
} // namespace QtAws
