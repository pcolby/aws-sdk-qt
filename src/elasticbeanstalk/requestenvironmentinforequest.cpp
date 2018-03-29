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

#include "requestenvironmentinforequest.h"
#include "requestenvironmentinforequest_p.h"
#include "requestenvironmentinforesponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  RequestEnvironmentInfoRequest
 *
 * @brief  Implements ElasticBeanstalk RequestEnvironmentInfo requests.
 *
 * @see    ElasticBeanstalkClient::requestEnvironmentInfo
 */

/**
 * @brief  Constructs a new RequestEnvironmentInfoRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RequestEnvironmentInfoRequest::RequestEnvironmentInfoRequest(const RequestEnvironmentInfoRequest &other)
    : ElasticBeanstalkRequest(new RequestEnvironmentInfoRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RequestEnvironmentInfoRequest object.
 */
RequestEnvironmentInfoRequest::RequestEnvironmentInfoRequest()
    : ElasticBeanstalkRequest(new RequestEnvironmentInfoRequestPrivate(ElasticBeanstalkRequest::RequestEnvironmentInfoAction, this))
{

}

bool RequestEnvironmentInfoRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RequestEnvironmentInfoResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RequestEnvironmentInfoResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * RequestEnvironmentInfoRequest::response(QNetworkReply * const reply) const
{
    return new RequestEnvironmentInfoResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RequestEnvironmentInfoRequestPrivate
 *
 * @brief  Private implementation for RequestEnvironmentInfoRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RequestEnvironmentInfoRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public RequestEnvironmentInfoRequest instance.
 */
RequestEnvironmentInfoRequestPrivate::RequestEnvironmentInfoRequestPrivate(
    const ElasticBeanstalkRequest::Action action, RequestEnvironmentInfoRequest * const q)
    : RequestEnvironmentInfoPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RequestEnvironmentInfoRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RequestEnvironmentInfoRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RequestEnvironmentInfoRequest instance.
 */
RequestEnvironmentInfoRequestPrivate::RequestEnvironmentInfoRequestPrivate(
    const RequestEnvironmentInfoRequestPrivate &other, RequestEnvironmentInfoRequest * const q)
    : RequestEnvironmentInfoPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
