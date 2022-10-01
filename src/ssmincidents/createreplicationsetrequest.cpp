// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreplicationsetrequest.h"
#include "createreplicationsetrequest_p.h"
#include "createreplicationsetresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::CreateReplicationSetRequest
 * \brief The CreateReplicationSetRequest class provides an interface for SsmIncidents CreateReplicationSet requests.
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
 * \sa SsmIncidentsClient::createReplicationSet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReplicationSetRequest::CreateReplicationSetRequest(const CreateReplicationSetRequest &other)
    : SsmIncidentsRequest(new CreateReplicationSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReplicationSetRequest object.
 */
CreateReplicationSetRequest::CreateReplicationSetRequest()
    : SsmIncidentsRequest(new CreateReplicationSetRequestPrivate(SsmIncidentsRequest::CreateReplicationSetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReplicationSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReplicationSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReplicationSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateReplicationSetResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::CreateReplicationSetRequestPrivate
 * \brief The CreateReplicationSetRequestPrivate class provides private implementation for CreateReplicationSetRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a CreateReplicationSetRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
CreateReplicationSetRequestPrivate::CreateReplicationSetRequestPrivate(
    const SsmIncidentsRequest::Action action, CreateReplicationSetRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReplicationSetRequest
 * class' copy constructor.
 */
CreateReplicationSetRequestPrivate::CreateReplicationSetRequestPrivate(
    const CreateReplicationSetRequestPrivate &other, CreateReplicationSetRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
