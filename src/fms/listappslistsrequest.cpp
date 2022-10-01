// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappslistsrequest.h"
#include "listappslistsrequest_p.h"
#include "listappslistsresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::ListAppsListsRequest
 * \brief The ListAppsListsRequest class provides an interface for Fms ListAppsLists requests.
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
 * \sa FmsClient::listAppsLists
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppsListsRequest::ListAppsListsRequest(const ListAppsListsRequest &other)
    : FmsRequest(new ListAppsListsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppsListsRequest object.
 */
ListAppsListsRequest::ListAppsListsRequest()
    : FmsRequest(new ListAppsListsRequestPrivate(FmsRequest::ListAppsListsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppsListsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppsListsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppsListsRequest::response(QNetworkReply * const reply) const
{
    return new ListAppsListsResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::ListAppsListsRequestPrivate
 * \brief The ListAppsListsRequestPrivate class provides private implementation for ListAppsListsRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a ListAppsListsRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
ListAppsListsRequestPrivate::ListAppsListsRequestPrivate(
    const FmsRequest::Action action, ListAppsListsRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppsListsRequest
 * class' copy constructor.
 */
ListAppsListsRequestPrivate::ListAppsListsRequestPrivate(
    const ListAppsListsRequestPrivate &other, ListAppsListsRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
