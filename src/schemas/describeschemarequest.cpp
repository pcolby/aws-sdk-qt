/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
