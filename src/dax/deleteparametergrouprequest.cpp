/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteparametergrouprequest.h"
#include "deleteparametergrouprequest_p.h"
#include "deleteparametergroupresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DeleteParameterGroupRequest
 * \brief The DeleteParameterGroupRequest class provides an interface for DAX DeleteParameterGroup requests.
 *
 * \inmodule QtAwsDAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DAXClient::deleteParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteParameterGroupRequest::DeleteParameterGroupRequest(const DeleteParameterGroupRequest &other)
    : DAXRequest(new DeleteParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteParameterGroupRequest object.
 */
DeleteParameterGroupRequest::DeleteParameterGroupRequest()
    : DAXRequest(new DeleteParameterGroupRequestPrivate(DAXRequest::DeleteParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DAX::DeleteParameterGroupRequestPrivate
 * \brief The DeleteParameterGroupRequestPrivate class provides private implementation for DeleteParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 *
 * Constructs a DeleteParameterGroupRequestPrivate object for DAX \a action with,
 * public implementation \a q.
 */
DeleteParameterGroupRequestPrivate::DeleteParameterGroupRequestPrivate(
    const DAXRequest::Action action, DeleteParameterGroupRequest * const q)
    : DAXRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteParameterGroupRequest
 * class' copy constructor.
 */
DeleteParameterGroupRequestPrivate::DeleteParameterGroupRequestPrivate(
    const DeleteParameterGroupRequestPrivate &other, DeleteParameterGroupRequest * const q)
    : DAXRequestPrivate(other, q)
{

}

} // namespace DAX
} // namespace QtAws
