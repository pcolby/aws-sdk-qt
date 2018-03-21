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

#include "describeplatformversionrequest.h"
#include "describeplatformversionrequest_p.h"
#include "describeplatformversionresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DescribePlatformVersionRequest
 *
 * @brief  Implements ElasticBeanstalk DescribePlatformVersion requests.
 *
 * @see    ElasticBeanstalkClient::describePlatformVersion
 */

/**
 * @brief  Constructs a new DescribePlatformVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePlatformVersionResponse::DescribePlatformVersionResponse(

/**
 * @brief  Constructs a new DescribePlatformVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribePlatformVersionRequest::DescribePlatformVersionRequest(const DescribePlatformVersionRequest &other)
    : ElasticBeanstalkRequest(new DescribePlatformVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribePlatformVersionRequest object.
 */
DescribePlatformVersionRequest::DescribePlatformVersionRequest()
    : ElasticBeanstalkRequest(new DescribePlatformVersionRequestPrivate(ElasticBeanstalkRequest::DescribePlatformVersionAction, this))
{

}

bool DescribePlatformVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribePlatformVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribePlatformVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * DescribePlatformVersionRequest::response(QNetworkReply * const reply) const
{
    return new DescribePlatformVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribePlatformVersionRequestPrivate
 *
 * @brief  Private implementation for DescribePlatformVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePlatformVersionRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public DescribePlatformVersionRequest instance.
 */
DescribePlatformVersionRequestPrivate::DescribePlatformVersionRequestPrivate(
    const ElasticBeanstalkRequest::Action action, DescribePlatformVersionRequest * const q)
    : DescribePlatformVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribePlatformVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribePlatformVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribePlatformVersionRequest instance.
 */
DescribePlatformVersionRequestPrivate::DescribePlatformVersionRequestPrivate(
    const DescribePlatformVersionRequestPrivate &other, DescribePlatformVersionRequest * const q)
    : DescribePlatformVersionPrivate(other, q)
{

}
