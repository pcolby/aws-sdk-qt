// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
