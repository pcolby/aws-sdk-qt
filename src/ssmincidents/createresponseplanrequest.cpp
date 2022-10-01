// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresponseplanrequest.h"
#include "createresponseplanrequest_p.h"
#include "createresponseplanresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::CreateResponsePlanRequest
 * \brief The CreateResponsePlanRequest class provides an interface for SsmIncidents CreateResponsePlan requests.
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
 * \sa SsmIncidentsClient::createResponsePlan
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResponsePlanRequest::CreateResponsePlanRequest(const CreateResponsePlanRequest &other)
    : SsmIncidentsRequest(new CreateResponsePlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResponsePlanRequest object.
 */
CreateResponsePlanRequest::CreateResponsePlanRequest()
    : SsmIncidentsRequest(new CreateResponsePlanRequestPrivate(SsmIncidentsRequest::CreateResponsePlanAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResponsePlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResponsePlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResponsePlanRequest::response(QNetworkReply * const reply) const
{
    return new CreateResponsePlanResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::CreateResponsePlanRequestPrivate
 * \brief The CreateResponsePlanRequestPrivate class provides private implementation for CreateResponsePlanRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a CreateResponsePlanRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
CreateResponsePlanRequestPrivate::CreateResponsePlanRequestPrivate(
    const SsmIncidentsRequest::Action action, CreateResponsePlanRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResponsePlanRequest
 * class' copy constructor.
 */
CreateResponsePlanRequestPrivate::CreateResponsePlanRequestPrivate(
    const CreateResponsePlanRequestPrivate &other, CreateResponsePlanRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
