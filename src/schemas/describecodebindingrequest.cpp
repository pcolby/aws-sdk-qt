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

#include "describecodebindingrequest.h"
#include "describecodebindingrequest_p.h"
#include "describecodebindingresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DescribeCodeBindingRequest
 * \brief The DescribeCodeBindingRequest class provides an interface for Schemas DescribeCodeBinding requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::describeCodeBinding
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCodeBindingRequest::DescribeCodeBindingRequest(const DescribeCodeBindingRequest &other)
    : SchemasRequest(new DescribeCodeBindingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCodeBindingRequest object.
 */
DescribeCodeBindingRequest::DescribeCodeBindingRequest()
    : SchemasRequest(new DescribeCodeBindingRequestPrivate(SchemasRequest::DescribeCodeBindingAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCodeBindingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCodeBindingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCodeBindingRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCodeBindingResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::DescribeCodeBindingRequestPrivate
 * \brief The DescribeCodeBindingRequestPrivate class provides private implementation for DescribeCodeBindingRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DescribeCodeBindingRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
DescribeCodeBindingRequestPrivate::DescribeCodeBindingRequestPrivate(
    const SchemasRequest::Action action, DescribeCodeBindingRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCodeBindingRequest
 * class' copy constructor.
 */
DescribeCodeBindingRequestPrivate::DescribeCodeBindingRequestPrivate(
    const DescribeCodeBindingRequestPrivate &other, DescribeCodeBindingRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
