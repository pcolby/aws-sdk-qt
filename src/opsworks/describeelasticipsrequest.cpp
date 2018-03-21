/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeelasticipsrequest.h"
#include "describeelasticipsrequest_p.h"
#include "describeelasticipsresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeElasticIpsRequest
 *
 * @brief  Implements OpsWorks DescribeElasticIps requests.
 *
 * @see    OpsWorksClient::describeElasticIps
 */

/**
 * @brief  Constructs a new DescribeElasticIpsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeElasticIpsResponse::DescribeElasticIpsResponse(

/**
 * @brief  Constructs a new DescribeElasticIpsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeElasticIpsRequest::DescribeElasticIpsRequest(const DescribeElasticIpsRequest &other)
    : OpsWorksRequest(new DescribeElasticIpsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeElasticIpsRequest object.
 */
DescribeElasticIpsRequest::DescribeElasticIpsRequest()
    : OpsWorksRequest(new DescribeElasticIpsRequestPrivate(OpsWorksRequest::DescribeElasticIpsAction, this))
{

}

bool DescribeElasticIpsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeElasticIpsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeElasticIpsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DescribeElasticIpsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeElasticIpsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeElasticIpsRequestPrivate
 *
 * @brief  Private implementation for DescribeElasticIpsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticIpsRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeElasticIpsRequest instance.
 */
DescribeElasticIpsRequestPrivate::DescribeElasticIpsRequestPrivate(
    const OpsWorksRequest::Action action, DescribeElasticIpsRequest * const q)
    : DescribeElasticIpsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticIpsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeElasticIpsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeElasticIpsRequest instance.
 */
DescribeElasticIpsRequestPrivate::DescribeElasticIpsRequestPrivate(
    const DescribeElasticIpsRequestPrivate &other, DescribeElasticIpsRequest * const q)
    : DescribeElasticIpsPrivate(other, q)
{

}
