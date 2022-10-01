// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcepoliciesrequest.h"
#include "getresourcepoliciesrequest_p.h"
#include "getresourcepoliciesresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::GetResourcePoliciesRequest
 * \brief The GetResourcePoliciesRequest class provides an interface for SsmIncidents GetResourcePolicies requests.
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
 * \sa SsmIncidentsClient::getResourcePolicies
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourcePoliciesRequest::GetResourcePoliciesRequest(const GetResourcePoliciesRequest &other)
    : SsmIncidentsRequest(new GetResourcePoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourcePoliciesRequest object.
 */
GetResourcePoliciesRequest::GetResourcePoliciesRequest()
    : SsmIncidentsRequest(new GetResourcePoliciesRequestPrivate(SsmIncidentsRequest::GetResourcePoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourcePoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourcePoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourcePoliciesRequest::response(QNetworkReply * const reply) const
{
    return new GetResourcePoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::GetResourcePoliciesRequestPrivate
 * \brief The GetResourcePoliciesRequestPrivate class provides private implementation for GetResourcePoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a GetResourcePoliciesRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
GetResourcePoliciesRequestPrivate::GetResourcePoliciesRequestPrivate(
    const SsmIncidentsRequest::Action action, GetResourcePoliciesRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourcePoliciesRequest
 * class' copy constructor.
 */
GetResourcePoliciesRequestPrivate::GetResourcePoliciesRequestPrivate(
    const GetResourcePoliciesRequestPrivate &other, GetResourcePoliciesRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
