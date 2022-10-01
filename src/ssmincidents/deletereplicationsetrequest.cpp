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

#include "deletereplicationsetrequest.h"
#include "deletereplicationsetrequest_p.h"
#include "deletereplicationsetresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::DeleteReplicationSetRequest
 * \brief The DeleteReplicationSetRequest class provides an interface for SsmIncidents DeleteReplicationSet requests.
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
 * \sa SsmIncidentsClient::deleteReplicationSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReplicationSetRequest::DeleteReplicationSetRequest(const DeleteReplicationSetRequest &other)
    : SsmIncidentsRequest(new DeleteReplicationSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReplicationSetRequest object.
 */
DeleteReplicationSetRequest::DeleteReplicationSetRequest()
    : SsmIncidentsRequest(new DeleteReplicationSetRequestPrivate(SsmIncidentsRequest::DeleteReplicationSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReplicationSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReplicationSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReplicationSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationSetResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::DeleteReplicationSetRequestPrivate
 * \brief The DeleteReplicationSetRequestPrivate class provides private implementation for DeleteReplicationSetRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a DeleteReplicationSetRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
DeleteReplicationSetRequestPrivate::DeleteReplicationSetRequestPrivate(
    const SsmIncidentsRequest::Action action, DeleteReplicationSetRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationSetRequest
 * class' copy constructor.
 */
DeleteReplicationSetRequestPrivate::DeleteReplicationSetRequestPrivate(
    const DeleteReplicationSetRequestPrivate &other, DeleteReplicationSetRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
