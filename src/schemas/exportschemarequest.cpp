// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportschemarequest.h"
#include "exportschemarequest_p.h"
#include "exportschemaresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ExportSchemaRequest
 * \brief The ExportSchemaRequest class provides an interface for Schemas ExportSchema requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::exportSchema
 */

/*!
 * Constructs a copy of \a other.
 */
ExportSchemaRequest::ExportSchemaRequest(const ExportSchemaRequest &other)
    : SchemasRequest(new ExportSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportSchemaRequest object.
 */
ExportSchemaRequest::ExportSchemaRequest()
    : SchemasRequest(new ExportSchemaRequestPrivate(SchemasRequest::ExportSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool ExportSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExportSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportSchemaRequest::response(QNetworkReply * const reply) const
{
    return new ExportSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::ExportSchemaRequestPrivate
 * \brief The ExportSchemaRequestPrivate class provides private implementation for ExportSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ExportSchemaRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
ExportSchemaRequestPrivate::ExportSchemaRequestPrivate(
    const SchemasRequest::Action action, ExportSchemaRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExportSchemaRequest
 * class' copy constructor.
 */
ExportSchemaRequestPrivate::ExportSchemaRequestPrivate(
    const ExportSchemaRequestPrivate &other, ExportSchemaRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
