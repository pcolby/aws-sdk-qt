// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creatediscovererrequest.h"
#include "creatediscovererrequest_p.h"
#include "creatediscovererresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::CreateDiscovererRequest
 * \brief The CreateDiscovererRequest class provides an interface for Schemas CreateDiscoverer requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::createDiscoverer
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDiscovererRequest::CreateDiscovererRequest(const CreateDiscovererRequest &other)
    : SchemasRequest(new CreateDiscovererRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDiscovererRequest object.
 */
CreateDiscovererRequest::CreateDiscovererRequest()
    : SchemasRequest(new CreateDiscovererRequestPrivate(SchemasRequest::CreateDiscovererAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDiscovererRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDiscovererResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDiscovererRequest::response(QNetworkReply * const reply) const
{
    return new CreateDiscovererResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::CreateDiscovererRequestPrivate
 * \brief The CreateDiscovererRequestPrivate class provides private implementation for CreateDiscovererRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a CreateDiscovererRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
CreateDiscovererRequestPrivate::CreateDiscovererRequestPrivate(
    const SchemasRequest::Action action, CreateDiscovererRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDiscovererRequest
 * class' copy constructor.
 */
CreateDiscovererRequestPrivate::CreateDiscovererRequestPrivate(
    const CreateDiscovererRequestPrivate &other, CreateDiscovererRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
