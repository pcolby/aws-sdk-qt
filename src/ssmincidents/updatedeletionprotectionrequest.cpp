// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedeletionprotectionrequest.h"
#include "updatedeletionprotectionrequest_p.h"
#include "updatedeletionprotectionresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::UpdateDeletionProtectionRequest
 * \brief The UpdateDeletionProtectionRequest class provides an interface for SsmIncidents UpdateDeletionProtection requests.
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
 * \sa SsmIncidentsClient::updateDeletionProtection
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDeletionProtectionRequest::UpdateDeletionProtectionRequest(const UpdateDeletionProtectionRequest &other)
    : SsmIncidentsRequest(new UpdateDeletionProtectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDeletionProtectionRequest object.
 */
UpdateDeletionProtectionRequest::UpdateDeletionProtectionRequest()
    : SsmIncidentsRequest(new UpdateDeletionProtectionRequestPrivate(SsmIncidentsRequest::UpdateDeletionProtectionAction, this))
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
 * \class QtAws::SsmIncidents::UpdateDeletionProtectionRequestPrivate
 * \brief The UpdateDeletionProtectionRequestPrivate class provides private implementation for UpdateDeletionProtectionRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a UpdateDeletionProtectionRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
UpdateDeletionProtectionRequestPrivate::UpdateDeletionProtectionRequestPrivate(
    const SsmIncidentsRequest::Action action, UpdateDeletionProtectionRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
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
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
