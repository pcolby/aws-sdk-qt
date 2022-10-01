// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateschemarequest.h"
#include "updateschemarequest_p.h"
#include "updateschemaresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::UpdateSchemaRequest
 * \brief The UpdateSchemaRequest class provides an interface for Schemas UpdateSchema requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::updateSchema
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSchemaRequest::UpdateSchemaRequest(const UpdateSchemaRequest &other)
    : SchemasRequest(new UpdateSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSchemaRequest object.
 */
UpdateSchemaRequest::UpdateSchemaRequest()
    : SchemasRequest(new UpdateSchemaRequestPrivate(SchemasRequest::UpdateSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSchemaRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::UpdateSchemaRequestPrivate
 * \brief The UpdateSchemaRequestPrivate class provides private implementation for UpdateSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a UpdateSchemaRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
UpdateSchemaRequestPrivate::UpdateSchemaRequestPrivate(
    const SchemasRequest::Action action, UpdateSchemaRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSchemaRequest
 * class' copy constructor.
 */
UpdateSchemaRequestPrivate::UpdateSchemaRequestPrivate(
    const UpdateSchemaRequestPrivate &other, UpdateSchemaRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
