// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listengagementsrequest.h"
#include "listengagementsrequest_p.h"
#include "listengagementsresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::ListEngagementsRequest
 * \brief The ListEngagementsRequest class provides an interface for SsmContacts ListEngagements requests.
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
 * \sa SsmContactsClient::listEngagements
 */

/*!
 * Constructs a copy of \a other.
 */
ListEngagementsRequest::ListEngagementsRequest(const ListEngagementsRequest &other)
    : SsmContactsRequest(new ListEngagementsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEngagementsRequest object.
 */
ListEngagementsRequest::ListEngagementsRequest()
    : SsmContactsRequest(new ListEngagementsRequestPrivate(SsmContactsRequest::ListEngagementsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEngagementsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEngagementsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEngagementsRequest::response(QNetworkReply * const reply) const
{
    return new ListEngagementsResponse(*this, reply);
}

/*!
 * \class QtAws::SsmContacts::ListEngagementsRequestPrivate
 * \brief The ListEngagementsRequestPrivate class provides private implementation for ListEngagementsRequest.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a ListEngagementsRequestPrivate object for SsmContacts \a action,
 * with public implementation \a q.
 */
ListEngagementsRequestPrivate::ListEngagementsRequestPrivate(
    const SsmContactsRequest::Action action, ListEngagementsRequest * const q)
    : SsmContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEngagementsRequest
 * class' copy constructor.
 */
ListEngagementsRequestPrivate::ListEngagementsRequestPrivate(
    const ListEngagementsRequestPrivate &other, ListEngagementsRequest * const q)
    : SsmContactsRequestPrivate(other, q)
{

}

} // namespace SsmContacts
} // namespace QtAws
