// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcontactrequest.h"
#include "createcontactrequest_p.h"
#include "createcontactresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::CreateContactRequest
 * \brief The CreateContactRequest class provides an interface for SsmContacts CreateContact requests.
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
 * \sa SsmContactsClient::createContact
 */

/*!
 * Constructs a copy of \a other.
 */
CreateContactRequest::CreateContactRequest(const CreateContactRequest &other)
    : SsmContactsRequest(new CreateContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateContactRequest object.
 */
CreateContactRequest::CreateContactRequest()
    : SsmContactsRequest(new CreateContactRequestPrivate(SsmContactsRequest::CreateContactAction, this))
{

}

/*!
 * \reimp
 */
bool CreateContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateContactRequest::response(QNetworkReply * const reply) const
{
    return new CreateContactResponse(*this, reply);
}

/*!
 * \class QtAws::SsmContacts::CreateContactRequestPrivate
 * \brief The CreateContactRequestPrivate class provides private implementation for CreateContactRequest.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a CreateContactRequestPrivate object for SsmContacts \a action,
 * with public implementation \a q.
 */
CreateContactRequestPrivate::CreateContactRequestPrivate(
    const SsmContactsRequest::Action action, CreateContactRequest * const q)
    : SsmContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateContactRequest
 * class' copy constructor.
 */
CreateContactRequestPrivate::CreateContactRequestPrivate(
    const CreateContactRequestPrivate &other, CreateContactRequest * const q)
    : SsmContactsRequestPrivate(other, q)
{

}

} // namespace SsmContacts
} // namespace QtAws
