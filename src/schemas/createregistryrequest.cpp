// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createregistryrequest.h"
#include "createregistryrequest_p.h"
#include "createregistryresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::CreateRegistryRequest
 * \brief The CreateRegistryRequest class provides an interface for Schemas CreateRegistry requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::createRegistry
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRegistryRequest::CreateRegistryRequest(const CreateRegistryRequest &other)
    : SchemasRequest(new CreateRegistryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRegistryRequest object.
 */
CreateRegistryRequest::CreateRegistryRequest()
    : SchemasRequest(new CreateRegistryRequestPrivate(SchemasRequest::CreateRegistryAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRegistryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRegistryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRegistryRequest::response(QNetworkReply * const reply) const
{
    return new CreateRegistryResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::CreateRegistryRequestPrivate
 * \brief The CreateRegistryRequestPrivate class provides private implementation for CreateRegistryRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a CreateRegistryRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
CreateRegistryRequestPrivate::CreateRegistryRequestPrivate(
    const SchemasRequest::Action action, CreateRegistryRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRegistryRequest
 * class' copy constructor.
 */
CreateRegistryRequestPrivate::CreateRegistryRequestPrivate(
    const CreateRegistryRequestPrivate &other, CreateRegistryRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
