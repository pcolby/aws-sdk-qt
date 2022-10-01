// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listschemasrequest.h"
#include "listschemasrequest_p.h"
#include "listschemasresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ListSchemasRequest
 * \brief The ListSchemasRequest class provides an interface for Schemas ListSchemas requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::listSchemas
 */

/*!
 * Constructs a copy of \a other.
 */
ListSchemasRequest::ListSchemasRequest(const ListSchemasRequest &other)
    : SchemasRequest(new ListSchemasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSchemasRequest object.
 */
ListSchemasRequest::ListSchemasRequest()
    : SchemasRequest(new ListSchemasRequestPrivate(SchemasRequest::ListSchemasAction, this))
{

}

/*!
 * \reimp
 */
bool ListSchemasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSchemasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSchemasRequest::response(QNetworkReply * const reply) const
{
    return new ListSchemasResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::ListSchemasRequestPrivate
 * \brief The ListSchemasRequestPrivate class provides private implementation for ListSchemasRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ListSchemasRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
ListSchemasRequestPrivate::ListSchemasRequestPrivate(
    const SchemasRequest::Action action, ListSchemasRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSchemasRequest
 * class' copy constructor.
 */
ListSchemasRequestPrivate::ListSchemasRequestPrivate(
    const ListSchemasRequestPrivate &other, ListSchemasRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
