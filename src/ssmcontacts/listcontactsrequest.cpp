// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontactsrequest.h"
#include "listcontactsrequest_p.h"
#include "listcontactsresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::ListContactsRequest
 * \brief The ListContactsRequest class provides an interface for SsmContacts ListContacts requests.
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
 * \sa SsmContactsClient::listContacts
 */

/*!
 * Constructs a copy of \a other.
 */
ListContactsRequest::ListContactsRequest(const ListContactsRequest &other)
    : SsmContactsRequest(new ListContactsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListContactsRequest object.
 */
ListContactsRequest::ListContactsRequest()
    : SsmContactsRequest(new ListContactsRequestPrivate(SsmContactsRequest::ListContactsAction, this))
{

}

/*!
 * \reimp
 */
bool ListContactsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListContactsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListContactsRequest::response(QNetworkReply * const reply) const
{
    return new ListContactsResponse(*this, reply);
}

/*!
 * \class QtAws::SsmContacts::ListContactsRequestPrivate
 * \brief The ListContactsRequestPrivate class provides private implementation for ListContactsRequest.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a ListContactsRequestPrivate object for SsmContacts \a action,
 * with public implementation \a q.
 */
ListContactsRequestPrivate::ListContactsRequestPrivate(
    const SsmContactsRequest::Action action, ListContactsRequest * const q)
    : SsmContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListContactsRequest
 * class' copy constructor.
 */
ListContactsRequestPrivate::ListContactsRequestPrivate(
    const ListContactsRequestPrivate &other, ListContactsRequest * const q)
    : SsmContactsRequestPrivate(other, q)
{

}

} // namespace SsmContacts
} // namespace QtAws
