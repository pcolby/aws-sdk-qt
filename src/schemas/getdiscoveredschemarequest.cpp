// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdiscoveredschemarequest.h"
#include "getdiscoveredschemarequest_p.h"
#include "getdiscoveredschemaresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::GetDiscoveredSchemaRequest
 * \brief The GetDiscoveredSchemaRequest class provides an interface for Schemas GetDiscoveredSchema requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::getDiscoveredSchema
 */

/*!
 * Constructs a copy of \a other.
 */
GetDiscoveredSchemaRequest::GetDiscoveredSchemaRequest(const GetDiscoveredSchemaRequest &other)
    : SchemasRequest(new GetDiscoveredSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDiscoveredSchemaRequest object.
 */
GetDiscoveredSchemaRequest::GetDiscoveredSchemaRequest()
    : SchemasRequest(new GetDiscoveredSchemaRequestPrivate(SchemasRequest::GetDiscoveredSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool GetDiscoveredSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDiscoveredSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDiscoveredSchemaRequest::response(QNetworkReply * const reply) const
{
    return new GetDiscoveredSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::GetDiscoveredSchemaRequestPrivate
 * \brief The GetDiscoveredSchemaRequestPrivate class provides private implementation for GetDiscoveredSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a GetDiscoveredSchemaRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
GetDiscoveredSchemaRequestPrivate::GetDiscoveredSchemaRequestPrivate(
    const SchemasRequest::Action action, GetDiscoveredSchemaRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDiscoveredSchemaRequest
 * class' copy constructor.
 */
GetDiscoveredSchemaRequestPrivate::GetDiscoveredSchemaRequestPrivate(
    const GetDiscoveredSchemaRequestPrivate &other, GetDiscoveredSchemaRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
