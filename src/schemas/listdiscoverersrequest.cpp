// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdiscoverersrequest.h"
#include "listdiscoverersrequest_p.h"
#include "listdiscoverersresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ListDiscoverersRequest
 * \brief The ListDiscoverersRequest class provides an interface for Schemas ListDiscoverers requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::listDiscoverers
 */

/*!
 * Constructs a copy of \a other.
 */
ListDiscoverersRequest::ListDiscoverersRequest(const ListDiscoverersRequest &other)
    : SchemasRequest(new ListDiscoverersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDiscoverersRequest object.
 */
ListDiscoverersRequest::ListDiscoverersRequest()
    : SchemasRequest(new ListDiscoverersRequestPrivate(SchemasRequest::ListDiscoverersAction, this))
{

}

/*!
 * \reimp
 */
bool ListDiscoverersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDiscoverersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDiscoverersRequest::response(QNetworkReply * const reply) const
{
    return new ListDiscoverersResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::ListDiscoverersRequestPrivate
 * \brief The ListDiscoverersRequestPrivate class provides private implementation for ListDiscoverersRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ListDiscoverersRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
ListDiscoverersRequestPrivate::ListDiscoverersRequestPrivate(
    const SchemasRequest::Action action, ListDiscoverersRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDiscoverersRequest
 * class' copy constructor.
 */
ListDiscoverersRequestPrivate::ListDiscoverersRequestPrivate(
    const ListDiscoverersRequestPrivate &other, ListDiscoverersRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
