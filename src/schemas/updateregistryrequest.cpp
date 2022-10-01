// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateregistryrequest.h"
#include "updateregistryrequest_p.h"
#include "updateregistryresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::UpdateRegistryRequest
 * \brief The UpdateRegistryRequest class provides an interface for Schemas UpdateRegistry requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::updateRegistry
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRegistryRequest::UpdateRegistryRequest(const UpdateRegistryRequest &other)
    : SchemasRequest(new UpdateRegistryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRegistryRequest object.
 */
UpdateRegistryRequest::UpdateRegistryRequest()
    : SchemasRequest(new UpdateRegistryRequestPrivate(SchemasRequest::UpdateRegistryAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRegistryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRegistryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRegistryRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRegistryResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::UpdateRegistryRequestPrivate
 * \brief The UpdateRegistryRequestPrivate class provides private implementation for UpdateRegistryRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a UpdateRegistryRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
UpdateRegistryRequestPrivate::UpdateRegistryRequestPrivate(
    const SchemasRequest::Action action, UpdateRegistryRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRegistryRequest
 * class' copy constructor.
 */
UpdateRegistryRequestPrivate::UpdateRegistryRequestPrivate(
    const UpdateRegistryRequestPrivate &other, UpdateRegistryRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
