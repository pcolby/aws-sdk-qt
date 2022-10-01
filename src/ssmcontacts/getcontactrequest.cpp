// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontactrequest.h"
#include "getcontactrequest_p.h"
#include "getcontactresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::GetContactRequest
 * \brief The GetContactRequest class provides an interface for SsmContacts GetContact requests.
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
 * \sa SsmContactsClient::getContact
 */

/*!
 * Constructs a copy of \a other.
 */
GetContactRequest::GetContactRequest(const GetContactRequest &other)
    : SsmContactsRequest(new GetContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContactRequest object.
 */
GetContactRequest::GetContactRequest()
    : SsmContactsRequest(new GetContactRequestPrivate(SsmContactsRequest::GetContactAction, this))
{

}

/*!
 * \reimp
 */
bool GetContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContactRequest::response(QNetworkReply * const reply) const
{
    return new GetContactResponse(*this, reply);
}

/*!
 * \class QtAws::SsmContacts::GetContactRequestPrivate
 * \brief The GetContactRequestPrivate class provides private implementation for GetContactRequest.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a GetContactRequestPrivate object for SsmContacts \a action,
 * with public implementation \a q.
 */
GetContactRequestPrivate::GetContactRequestPrivate(
    const SsmContactsRequest::Action action, GetContactRequest * const q)
    : SsmContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContactRequest
 * class' copy constructor.
 */
GetContactRequestPrivate::GetContactRequestPrivate(
    const GetContactRequestPrivate &other, GetContactRequest * const q)
    : SsmContactsRequestPrivate(other, q)
{

}

} // namespace SsmContacts
} // namespace QtAws
