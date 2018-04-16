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

#include "describedefaultparametersrequest.h"
#include "describedefaultparametersrequest_p.h"
#include "describedefaultparametersresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DescribeDefaultParametersRequest
 *
 * \brief The DescribeDefaultParametersRequest class provides an interface for DAX DescribeDefaultParameters requests.
 *
 * \ingroup DAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DAXClient::describeDefaultParameters
 */

/*!
 * @brief  Constructs a new DescribeDefaultParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDefaultParametersRequest::DescribeDefaultParametersRequest(const DescribeDefaultParametersRequest &other)
    : DAXRequest(new DescribeDefaultParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeDefaultParametersRequest object.
 */
DescribeDefaultParametersRequest::DescribeDefaultParametersRequest()
    : DAXRequest(new DescribeDefaultParametersRequestPrivate(DAXRequest::DescribeDefaultParametersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDefaultParametersRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeDefaultParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDefaultParametersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DAXClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDefaultParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDefaultParametersResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeDefaultParametersRequestPrivate
 *
 * @brief  Private implementation for DescribeDefaultParametersRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeDefaultParametersRequestPrivate object.
 *
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public DescribeDefaultParametersRequest instance.
 */
DescribeDefaultParametersRequestPrivate::DescribeDefaultParametersRequestPrivate(
    const DAXRequest::Action action, DescribeDefaultParametersRequest * const q)
    : DAXRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeDefaultParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDefaultParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDefaultParametersRequest instance.
 */
DescribeDefaultParametersRequestPrivate::DescribeDefaultParametersRequestPrivate(
    const DescribeDefaultParametersRequestPrivate &other, DescribeDefaultParametersRequest * const q)
    : DAXRequestPrivate(other, q)
{

}

} // namespace DAX
} // namespace QtAws
