// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreplicationsetsrequest.h"
#include "listreplicationsetsrequest_p.h"
#include "listreplicationsetsresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::ListReplicationSetsRequest
 * \brief The ListReplicationSetsRequest class provides an interface for SsmIncidents ListReplicationSets requests.
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
 * \sa SsmIncidentsClient::listReplicationSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListReplicationSetsRequest::ListReplicationSetsRequest(const ListReplicationSetsRequest &other)
    : SsmIncidentsRequest(new ListReplicationSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReplicationSetsRequest object.
 */
ListReplicationSetsRequest::ListReplicationSetsRequest()
    : SsmIncidentsRequest(new ListReplicationSetsRequestPrivate(SsmIncidentsRequest::ListReplicationSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReplicationSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReplicationSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReplicationSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListReplicationSetsResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::ListReplicationSetsRequestPrivate
 * \brief The ListReplicationSetsRequestPrivate class provides private implementation for ListReplicationSetsRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a ListReplicationSetsRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
ListReplicationSetsRequestPrivate::ListReplicationSetsRequestPrivate(
    const SsmIncidentsRequest::Action action, ListReplicationSetsRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReplicationSetsRequest
 * class' copy constructor.
 */
ListReplicationSetsRequestPrivate::ListReplicationSetsRequestPrivate(
    const ListReplicationSetsRequestPrivate &other, ListReplicationSetsRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
