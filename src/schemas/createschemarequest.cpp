// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createschemarequest.h"
#include "createschemarequest_p.h"
#include "createschemaresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::CreateSchemaRequest
 * \brief The CreateSchemaRequest class provides an interface for Schemas CreateSchema requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::createSchema
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSchemaRequest::CreateSchemaRequest(const CreateSchemaRequest &other)
    : SchemasRequest(new CreateSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSchemaRequest object.
 */
CreateSchemaRequest::CreateSchemaRequest()
    : SchemasRequest(new CreateSchemaRequestPrivate(SchemasRequest::CreateSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSchemaRequest::response(QNetworkReply * const reply) const
{
    return new CreateSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::CreateSchemaRequestPrivate
 * \brief The CreateSchemaRequestPrivate class provides private implementation for CreateSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a CreateSchemaRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
CreateSchemaRequestPrivate::CreateSchemaRequestPrivate(
    const SchemasRequest::Action action, CreateSchemaRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSchemaRequest
 * class' copy constructor.
 */
CreateSchemaRequestPrivate::CreateSchemaRequestPrivate(
    const CreateSchemaRequestPrivate &other, CreateSchemaRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
