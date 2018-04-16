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

#include "describeparametersrequest.h"
#include "describeparametersrequest_p.h"
#include "describeparametersresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DescribeParametersRequest
 *
 * \brief The DescribeParametersRequest class provides an interface for DAX DescribeParameters requests.
 *
 * \ingroup DAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DAXClient::describeParameters
 */

/*!
 * @brief  Constructs a new DescribeParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeParametersRequest::DescribeParametersRequest(const DescribeParametersRequest &other)
    : DAXRequest(new DescribeParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeParametersRequest object.
 */
DescribeParametersRequest::DescribeParametersRequest()
    : DAXRequest(new DescribeParametersRequestPrivate(DAXRequest::DescribeParametersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeParametersRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeParametersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DAXClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeParametersResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeParametersRequestPrivate
 *
 * @brief  Private implementation for DescribeParametersRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeParametersRequestPrivate object.
 *
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public DescribeParametersRequest instance.
 */
DescribeParametersRequestPrivate::DescribeParametersRequestPrivate(
    const DAXRequest::Action action, DescribeParametersRequest * const q)
    : DAXRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeParametersRequest instance.
 */
DescribeParametersRequestPrivate::DescribeParametersRequestPrivate(
    const DescribeParametersRequestPrivate &other, DescribeParametersRequest * const q)
    : DAXRequestPrivate(other, q)
{

}

} // namespace DAX
} // namespace QtAws
