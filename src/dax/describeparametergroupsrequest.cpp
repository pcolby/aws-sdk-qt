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

#include "describeparametergroupsrequest.h"
#include "describeparametergroupsrequest_p.h"
#include "describeparametergroupsresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DescribeParameterGroupsRequest
 *
 * \brief The DescribeParameterGroupsRequest class provides an interface for DAX DescribeParameterGroups requests.
 *
 * \ingroup DAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DAXClient::describeParameterGroups
 */

/*!
 * @brief  Constructs a new DescribeParameterGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeParameterGroupsRequest::DescribeParameterGroupsRequest(const DescribeParameterGroupsRequest &other)
    : DAXRequest(new DescribeParameterGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeParameterGroupsRequest object.
 */
DescribeParameterGroupsRequest::DescribeParameterGroupsRequest()
    : DAXRequest(new DescribeParameterGroupsRequestPrivate(DAXRequest::DescribeParameterGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeParameterGroupsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeParameterGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeParameterGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DAXClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeParameterGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeParameterGroupsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeParameterGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeParameterGroupsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeParameterGroupsRequestPrivate object.
 *
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public DescribeParameterGroupsRequest instance.
 */
DescribeParameterGroupsRequestPrivate::DescribeParameterGroupsRequestPrivate(
    const DAXRequest::Action action, DescribeParameterGroupsRequest * const q)
    : DAXRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeParameterGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeParameterGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeParameterGroupsRequest instance.
 */
DescribeParameterGroupsRequestPrivate::DescribeParameterGroupsRequestPrivate(
    const DescribeParameterGroupsRequestPrivate &other, DescribeParameterGroupsRequest * const q)
    : DAXRequestPrivate(other, q)
{

}

} // namespace DAX
} // namespace QtAws
