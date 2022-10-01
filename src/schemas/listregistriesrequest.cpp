// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listregistriesrequest.h"
#include "listregistriesrequest_p.h"
#include "listregistriesresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ListRegistriesRequest
 * \brief The ListRegistriesRequest class provides an interface for Schemas ListRegistries requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::listRegistries
 */

/*!
 * Constructs a copy of \a other.
 */
ListRegistriesRequest::ListRegistriesRequest(const ListRegistriesRequest &other)
    : SchemasRequest(new ListRegistriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRegistriesRequest object.
 */
ListRegistriesRequest::ListRegistriesRequest()
    : SchemasRequest(new ListRegistriesRequestPrivate(SchemasRequest::ListRegistriesAction, this))
{

}

/*!
 * \reimp
 */
bool ListRegistriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRegistriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRegistriesRequest::response(QNetworkReply * const reply) const
{
    return new ListRegistriesResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::ListRegistriesRequestPrivate
 * \brief The ListRegistriesRequestPrivate class provides private implementation for ListRegistriesRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ListRegistriesRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
ListRegistriesRequestPrivate::ListRegistriesRequestPrivate(
    const SchemasRequest::Action action, ListRegistriesRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRegistriesRequest
 * class' copy constructor.
 */
ListRegistriesRequestPrivate::ListRegistriesRequestPrivate(
    const ListRegistriesRequestPrivate &other, ListRegistriesRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
