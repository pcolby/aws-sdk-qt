// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeschemarequest.h"
#include "describeschemarequest_p.h"
#include "describeschemaresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DescribeSchemaRequest
 * \brief The DescribeSchemaRequest class provides an interface for Schemas DescribeSchema requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::describeSchema
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSchemaRequest::DescribeSchemaRequest(const DescribeSchemaRequest &other)
    : SchemasRequest(new DescribeSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSchemaRequest object.
 */
DescribeSchemaRequest::DescribeSchemaRequest()
    : SchemasRequest(new DescribeSchemaRequestPrivate(SchemasRequest::DescribeSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSchemaRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::DescribeSchemaRequestPrivate
 * \brief The DescribeSchemaRequestPrivate class provides private implementation for DescribeSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DescribeSchemaRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
DescribeSchemaRequestPrivate::DescribeSchemaRequestPrivate(
    const SchemasRequest::Action action, DescribeSchemaRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSchemaRequest
 * class' copy constructor.
 */
DescribeSchemaRequestPrivate::DescribeSchemaRequestPrivate(
    const DescribeSchemaRequestPrivate &other, DescribeSchemaRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
