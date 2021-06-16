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

#include "describediscovererrequest.h"
#include "describediscovererrequest_p.h"
#include "describediscovererresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DescribeDiscovererRequest
 * \brief The DescribeDiscovererRequest class provides an interface for Schemas DescribeDiscoverer requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::describeDiscoverer
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDiscovererRequest::DescribeDiscovererRequest(const DescribeDiscovererRequest &other)
    : SchemasRequest(new DescribeDiscovererRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDiscovererRequest object.
 */
DescribeDiscovererRequest::DescribeDiscovererRequest()
    : SchemasRequest(new DescribeDiscovererRequestPrivate(SchemasRequest::DescribeDiscovererAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDiscovererRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDiscovererResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDiscovererRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDiscovererResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::DescribeDiscovererRequestPrivate
 * \brief The DescribeDiscovererRequestPrivate class provides private implementation for DescribeDiscovererRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DescribeDiscovererRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
DescribeDiscovererRequestPrivate::DescribeDiscovererRequestPrivate(
    const SchemasRequest::Action action, DescribeDiscovererRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDiscovererRequest
 * class' copy constructor.
 */
DescribeDiscovererRequestPrivate::DescribeDiscovererRequestPrivate(
    const DescribeDiscovererRequestPrivate &other, DescribeDiscovererRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
