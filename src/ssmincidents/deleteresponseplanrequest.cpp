// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresponseplanrequest.h"
#include "deleteresponseplanrequest_p.h"
#include "deleteresponseplanresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::DeleteResponsePlanRequest
 * \brief The DeleteResponsePlanRequest class provides an interface for SsmIncidents DeleteResponsePlan requests.
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
 * \sa SsmIncidentsClient::deleteResponsePlan
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResponsePlanRequest::DeleteResponsePlanRequest(const DeleteResponsePlanRequest &other)
    : SsmIncidentsRequest(new DeleteResponsePlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResponsePlanRequest object.
 */
DeleteResponsePlanRequest::DeleteResponsePlanRequest()
    : SsmIncidentsRequest(new DeleteResponsePlanRequestPrivate(SsmIncidentsRequest::DeleteResponsePlanAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResponsePlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResponsePlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResponsePlanRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResponsePlanResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::DeleteResponsePlanRequestPrivate
 * \brief The DeleteResponsePlanRequestPrivate class provides private implementation for DeleteResponsePlanRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a DeleteResponsePlanRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
DeleteResponsePlanRequestPrivate::DeleteResponsePlanRequestPrivate(
    const SsmIncidentsRequest::Action action, DeleteResponsePlanRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResponsePlanRequest
 * class' copy constructor.
 */
DeleteResponsePlanRequestPrivate::DeleteResponsePlanRequestPrivate(
    const DeleteResponsePlanRequestPrivate &other, DeleteResponsePlanRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
