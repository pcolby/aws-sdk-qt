// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteregistryrequest.h"
#include "deleteregistryrequest_p.h"
#include "deleteregistryresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DeleteRegistryRequest
 * \brief The DeleteRegistryRequest class provides an interface for Schemas DeleteRegistry requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::deleteRegistry
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRegistryRequest::DeleteRegistryRequest(const DeleteRegistryRequest &other)
    : SchemasRequest(new DeleteRegistryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRegistryRequest object.
 */
DeleteRegistryRequest::DeleteRegistryRequest()
    : SchemasRequest(new DeleteRegistryRequestPrivate(SchemasRequest::DeleteRegistryAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRegistryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRegistryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRegistryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRegistryResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::DeleteRegistryRequestPrivate
 * \brief The DeleteRegistryRequestPrivate class provides private implementation for DeleteRegistryRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DeleteRegistryRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
DeleteRegistryRequestPrivate::DeleteRegistryRequestPrivate(
    const SchemasRequest::Action action, DeleteRegistryRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRegistryRequest
 * class' copy constructor.
 */
DeleteRegistryRequestPrivate::DeleteRegistryRequestPrivate(
    const DeleteRegistryRequestPrivate &other, DeleteRegistryRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
