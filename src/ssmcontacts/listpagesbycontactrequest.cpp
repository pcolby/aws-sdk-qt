// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpagesbycontactrequest.h"
#include "listpagesbycontactrequest_p.h"
#include "listpagesbycontactresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::ListPagesByContactRequest
 * \brief The ListPagesByContactRequest class provides an interface for SsmContacts ListPagesByContact requests.
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
 * \sa SsmContactsClient::listPagesByContact
 */

/*!
 * Constructs a copy of \a other.
 */
ListPagesByContactRequest::ListPagesByContactRequest(const ListPagesByContactRequest &other)
    : SsmContactsRequest(new ListPagesByContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPagesByContactRequest object.
 */
ListPagesByContactRequest::ListPagesByContactRequest()
    : SsmContactsRequest(new ListPagesByContactRequestPrivate(SsmContactsRequest::ListPagesByContactAction, this))
{

}

/*!
 * \reimp
 */
bool ListPagesByContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPagesByContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPagesByContactRequest::response(QNetworkReply * const reply) const
{
    return new ListPagesByContactResponse(*this, reply);
}

/*!
 * \class QtAws::SsmContacts::ListPagesByContactRequestPrivate
 * \brief The ListPagesByContactRequestPrivate class provides private implementation for ListPagesByContactRequest.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a ListPagesByContactRequestPrivate object for SsmContacts \a action,
 * with public implementation \a q.
 */
ListPagesByContactRequestPrivate::ListPagesByContactRequestPrivate(
    const SsmContactsRequest::Action action, ListPagesByContactRequest * const q)
    : SsmContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPagesByContactRequest
 * class' copy constructor.
 */
ListPagesByContactRequestPrivate::ListPagesByContactRequestPrivate(
    const ListPagesByContactRequestPrivate &other, ListPagesByContactRequest * const q)
    : SsmContactsRequestPrivate(other, q)
{

}

} // namespace SsmContacts
} // namespace QtAws
