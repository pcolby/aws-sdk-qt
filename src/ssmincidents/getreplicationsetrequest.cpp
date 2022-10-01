// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreplicationsetrequest.h"
#include "getreplicationsetrequest_p.h"
#include "getreplicationsetresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::GetReplicationSetRequest
 * \brief The GetReplicationSetRequest class provides an interface for SsmIncidents GetReplicationSet requests.
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
 * \sa SsmIncidentsClient::getReplicationSet
 */

/*!
 * Constructs a copy of \a other.
 */
GetReplicationSetRequest::GetReplicationSetRequest(const GetReplicationSetRequest &other)
    : SsmIncidentsRequest(new GetReplicationSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReplicationSetRequest object.
 */
GetReplicationSetRequest::GetReplicationSetRequest()
    : SsmIncidentsRequest(new GetReplicationSetRequestPrivate(SsmIncidentsRequest::GetReplicationSetAction, this))
{

}

/*!
 * \reimp
 */
bool GetReplicationSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReplicationSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReplicationSetRequest::response(QNetworkReply * const reply) const
{
    return new GetReplicationSetResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::GetReplicationSetRequestPrivate
 * \brief The GetReplicationSetRequestPrivate class provides private implementation for GetReplicationSetRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a GetReplicationSetRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
GetReplicationSetRequestPrivate::GetReplicationSetRequestPrivate(
    const SsmIncidentsRequest::Action action, GetReplicationSetRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReplicationSetRequest
 * class' copy constructor.
 */
GetReplicationSetRequestPrivate::GetReplicationSetRequestPrivate(
    const GetReplicationSetRequestPrivate &other, GetReplicationSetRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
