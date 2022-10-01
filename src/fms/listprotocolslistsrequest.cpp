// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprotocolslistsrequest.h"
#include "listprotocolslistsrequest_p.h"
#include "listprotocolslistsresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::ListProtocolsListsRequest
 * \brief The ListProtocolsListsRequest class provides an interface for Fms ListProtocolsLists requests.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::listProtocolsLists
 */

/*!
 * Constructs a copy of \a other.
 */
ListProtocolsListsRequest::ListProtocolsListsRequest(const ListProtocolsListsRequest &other)
    : FmsRequest(new ListProtocolsListsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProtocolsListsRequest object.
 */
ListProtocolsListsRequest::ListProtocolsListsRequest()
    : FmsRequest(new ListProtocolsListsRequestPrivate(FmsRequest::ListProtocolsListsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProtocolsListsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProtocolsListsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProtocolsListsRequest::response(QNetworkReply * const reply) const
{
    return new ListProtocolsListsResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::ListProtocolsListsRequestPrivate
 * \brief The ListProtocolsListsRequestPrivate class provides private implementation for ListProtocolsListsRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a ListProtocolsListsRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
ListProtocolsListsRequestPrivate::ListProtocolsListsRequestPrivate(
    const FmsRequest::Action action, ListProtocolsListsRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProtocolsListsRequest
 * class' copy constructor.
 */
ListProtocolsListsRequestPrivate::ListProtocolsListsRequestPrivate(
    const ListProtocolsListsRequestPrivate &other, ListProtocolsListsRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
