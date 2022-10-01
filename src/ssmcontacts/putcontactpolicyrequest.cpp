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

#include "putcontactpolicyrequest.h"
#include "putcontactpolicyrequest_p.h"
#include "putcontactpolicyresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::PutContactPolicyRequest
 * \brief The PutContactPolicyRequest class provides an interface for SsmContacts PutContactPolicy requests.
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
 * \sa SsmContactsClient::putContactPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutContactPolicyRequest::PutContactPolicyRequest(const PutContactPolicyRequest &other)
    : SsmContactsRequest(new PutContactPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutContactPolicyRequest object.
 */
PutContactPolicyRequest::PutContactPolicyRequest()
    : SsmContactsRequest(new PutContactPolicyRequestPrivate(SsmContactsRequest::PutContactPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutContactPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutContactPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutContactPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutContactPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::SsmContacts::PutContactPolicyRequestPrivate
 * \brief The PutContactPolicyRequestPrivate class provides private implementation for PutContactPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a PutContactPolicyRequestPrivate object for SsmContacts \a action,
 * with public implementation \a q.
 */
PutContactPolicyRequestPrivate::PutContactPolicyRequestPrivate(
    const SsmContactsRequest::Action action, PutContactPolicyRequest * const q)
    : SsmContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutContactPolicyRequest
 * class' copy constructor.
 */
PutContactPolicyRequestPrivate::PutContactPolicyRequestPrivate(
    const PutContactPolicyRequestPrivate &other, PutContactPolicyRequest * const q)
    : SsmContactsRequestPrivate(other, q)
{

}

} // namespace SsmContacts
} // namespace QtAws
