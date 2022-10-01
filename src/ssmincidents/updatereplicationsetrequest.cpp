// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
