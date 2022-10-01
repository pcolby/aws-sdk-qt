// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteschemaversionrequest.h"
#include "deleteschemaversionrequest_p.h"
#include "deleteschemaversionresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DeleteSchemaVersionRequest
 * \brief The DeleteSchemaVersionRequest class provides an interface for Schemas DeleteSchemaVersion requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::deleteSchemaVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSchemaVersionRequest::DeleteSchemaVersionRequest(const DeleteSchemaVersionRequest &other)
    : SchemasRequest(new DeleteSchemaVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSchemaVersionRequest object.
 */
DeleteSchemaVersionRequest::DeleteSchemaVersionRequest()
    : SchemasRequest(new DeleteSchemaVersionRequestPrivate(SchemasRequest::DeleteSchemaVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSchemaVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSchemaVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSchemaVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSchemaVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::DeleteSchemaVersionRequestPrivate
 * \brief The DeleteSchemaVersionRequestPrivate class provides private implementation for DeleteSchemaVersionRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DeleteSchemaVersionRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
DeleteSchemaVersionRequestPrivate::DeleteSchemaVersionRequestPrivate(
    const SchemasRequest::Action action, DeleteSchemaVersionRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSchemaVersionRequest
 * class' copy constructor.
 */
DeleteSchemaVersionRequestPrivate::DeleteSchemaVersionRequestPrivate(
    const DeleteSchemaVersionRequestPrivate &other, DeleteSchemaVersionRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
