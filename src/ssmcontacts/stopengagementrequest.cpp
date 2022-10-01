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

#include "stopengagementrequest.h"
#include "stopengagementrequest_p.h"
#include "stopengagementresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::StopEngagementRequest
 * \brief The StopEngagementRequest class provides an interface for SsmContacts StopEngagement requests.
 *
 * \inmodule QtAwsSsmContacts
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
 * \sa SsmContactsClient::stopEngagement
 */

/*!
 * Constructs a copy of \a other.
 */
StopEngagementRequest::StopEngagementRequest(const StopEngagementRequest &other)
    : SsmContactsRequest(new StopEngagementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopEngagementRequest object.
 */
StopEngagementRequest::StopEngagementRequest()
    : SsmContactsRequest(new StopEngagementRequestPrivate(SsmContactsRequest::StopEngagementAction, this))
{

}

/*!
 * \reimp
 */
bool StopEngagementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopEngagementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopEngagementRequest::response(QNetworkReply * const reply) const
{
    return new StopEngagementResponse(*this, reply);
}

/*!
 * \class QtAws::SsmContacts::StopEngagementRequestPrivate
 * \brief The StopEngagementRequestPrivate class provides private implementation for StopEngagementRequest.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a StopEngagementRequestPrivate object for SsmContacts \a action,
 * with public implementation \a q.
 */
StopEngagementRequestPrivate::StopEngagementRequestPrivate(
    const SsmContactsRequest::Action action, StopEngagementRequest * const q)
    : SsmContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopEngagementRequest
 * class' copy constructor.
 */
StopEngagementRequestPrivate::StopEngagementRequestPrivate(
    const StopEngagementRequestPrivate &other, StopEngagementRequest * const q)
    : SsmContactsRequestPrivate(other, q)
{

}

} // namespace SsmContacts
} // namespace QtAws
