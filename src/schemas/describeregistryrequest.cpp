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

#include "describeregistryrequest.h"
#include "describeregistryrequest_p.h"
#include "describeregistryresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DescribeRegistryRequest
 * \brief The DescribeRegistryRequest class provides an interface for Schemas DescribeRegistry requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::describeRegistry
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRegistryRequest::DescribeRegistryRequest(const DescribeRegistryRequest &other)
    : SchemasRequest(new DescribeRegistryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRegistryRequest object.
 */
DescribeRegistryRequest::DescribeRegistryRequest()
    : SchemasRequest(new DescribeRegistryRequestPrivate(SchemasRequest::DescribeRegistryAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRegistryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRegistryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRegistryRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRegistryResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::DescribeRegistryRequestPrivate
 * \brief The DescribeRegistryRequestPrivate class provides private implementation for DescribeRegistryRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DescribeRegistryRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
DescribeRegistryRequestPrivate::DescribeRegistryRequestPrivate(
    const SchemasRequest::Action action, DescribeRegistryRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRegistryRequest
 * class' copy constructor.
 */
DescribeRegistryRequestPrivate::DescribeRegistryRequestPrivate(
    const DescribeRegistryRequestPrivate &other, DescribeRegistryRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
