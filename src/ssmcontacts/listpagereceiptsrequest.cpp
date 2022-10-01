// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpagereceiptsrequest.h"
#include "listpagereceiptsrequest_p.h"
#include "listpagereceiptsresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::ListPageReceiptsRequest
 * \brief The ListPageReceiptsRequest class provides an interface for SsmContacts ListPageReceipts requests.
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
 * \sa SsmContactsClient::listPageReceipts
 */

/*!
 * Constructs a copy of \a other.
 */
ListPageReceiptsRequest::ListPageReceiptsRequest(const ListPageReceiptsRequest &other)
    : SsmContactsRequest(new ListPageReceiptsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPageReceiptsRequest object.
 */
ListPageReceiptsRequest::ListPageReceiptsRequest()
    : SsmContactsRequest(new ListPageReceiptsRequestPrivate(SsmContactsRequest::ListPageReceiptsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPageReceiptsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPageReceiptsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPageReceiptsRequest::response(QNetworkReply * const reply) const
{
    return new ListPageReceiptsResponse(*this, reply);
}

/*!
 * \class QtAws::SsmContacts::ListPageReceiptsRequestPrivate
 * \brief The ListPageReceiptsRequestPrivate class provides private implementation for ListPageReceiptsRequest.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a ListPageReceiptsRequestPrivate object for SsmContacts \a action,
 * with public implementation \a q.
 */
ListPageReceiptsRequestPrivate::ListPageReceiptsRequestPrivate(
    const SsmContactsRequest::Action action, ListPageReceiptsRequest * const q)
    : SsmContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPageReceiptsRequest
 * class' copy constructor.
 */
ListPageReceiptsRequestPrivate::ListPageReceiptsRequestPrivate(
    const ListPageReceiptsRequestPrivate &other, ListPageReceiptsRequest * const q)
    : SsmContactsRequestPrivate(other, q)
{

}

} // namespace SsmContacts
} // namespace QtAws
