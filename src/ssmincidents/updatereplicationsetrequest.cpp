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

#include "updatereplicationsetrequest.h"
#include "updatereplicationsetrequest_p.h"
#include "updatereplicationsetresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::UpdateReplicationSetRequest
 * \brief The UpdateReplicationSetRequest class provides an interface for SsmIncidents UpdateReplicationSet requests.
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
 * \sa SsmIncidentsClient::updateReplicationSet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateReplicationSetRequest::UpdateReplicationSetRequest(const UpdateReplicationSetRequest &other)
    : SsmIncidentsRequest(new UpdateReplicationSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateReplicationSetRequest object.
 */
UpdateReplicationSetRequest::UpdateReplicationSetRequest()
    : SsmIncidentsRequest(new UpdateReplicationSetRequestPrivate(SsmIncidentsRequest::UpdateReplicationSetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateReplicationSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateReplicationSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateReplicationSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateReplicationSetResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::UpdateReplicationSetRequestPrivate
 * \brief The UpdateReplicationSetRequestPrivate class provides private implementation for UpdateReplicationSetRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a UpdateReplicationSetRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
UpdateReplicationSetRequestPrivate::UpdateReplicationSetRequestPrivate(
    const SsmIncidentsRequest::Action action, UpdateReplicationSetRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateReplicationSetRequest
 * class' copy constructor.
 */
UpdateReplicationSetRequestPrivate::UpdateReplicationSetRequestPrivate(
    const UpdateReplicationSetRequestPrivate &other, UpdateReplicationSetRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
