// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecontactrequest.h"
#include "deletecontactrequest_p.h"
#include "deletecontactresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::DeleteContactRequest
 * \brief The DeleteContactRequest class provides an interface for SsmContacts DeleteContact requests.
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
 * \sa SsmContactsClient::deleteContact
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteContactRequest::DeleteContactRequest(const DeleteContactRequest &other)
    : SsmContactsRequest(new DeleteContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteContactRequest object.
 */
DeleteContactRequest::DeleteContactRequest()
    : SsmContactsRequest(new DeleteContactRequestPrivate(SsmContactsRequest::DeleteContactAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteContactRequest::response(QNetworkReply * const reply) const
{
    return new DeleteContactResponse(*this, reply);
}

/*!
 * \class QtAws::SsmContacts::DeleteContactRequestPrivate
 * \brief The DeleteContactRequestPrivate class provides private implementation for DeleteContactRequest.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a DeleteContactRequestPrivate object for SsmContacts \a action,
 * with public implementation \a q.
 */
DeleteContactRequestPrivate::DeleteContactRequestPrivate(
    const SsmContactsRequest::Action action, DeleteContactRequest * const q)
    : SsmContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteContactRequest
 * class' copy constructor.
 */
DeleteContactRequestPrivate::DeleteContactRequestPrivate(
    const DeleteContactRequestPrivate &other, DeleteContactRequest * const q)
    : SsmContactsRequestPrivate(other, q)
{

}

} // namespace SsmContacts
} // namespace QtAws
