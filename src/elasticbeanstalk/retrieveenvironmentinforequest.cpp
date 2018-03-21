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

#include "retrieveenvironmentinforequest.h"
#include "retrieveenvironmentinforequest_p.h"
#include "retrieveenvironmentinforesponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  RetrieveEnvironmentInfoRequest
 *
 * @brief  Implements ElasticBeanstalk RetrieveEnvironmentInfo requests.
 *
 * @see    ElasticBeanstalkClient::retrieveEnvironmentInfo
 */

/**
 * @brief  Constructs a new RetrieveEnvironmentInfoRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RetrieveEnvironmentInfoRequest::RetrieveEnvironmentInfoRequest(const RetrieveEnvironmentInfoRequest &other)
    : ElasticBeanstalkRequest(new RetrieveEnvironmentInfoRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RetrieveEnvironmentInfoRequest object.
 */
RetrieveEnvironmentInfoRequest::RetrieveEnvironmentInfoRequest()
    : ElasticBeanstalkRequest(new RetrieveEnvironmentInfoRequestPrivate(ElasticBeanstalkRequest::RetrieveEnvironmentInfoAction, this))
{

}

bool RetrieveEnvironmentInfoRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RetrieveEnvironmentInfoResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RetrieveEnvironmentInfoResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * RetrieveEnvironmentInfoRequest::response(QNetworkReply * const reply) const
{
    return new RetrieveEnvironmentInfoResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RetrieveEnvironmentInfoRequestPrivate
 *
 * @brief  Private implementation for RetrieveEnvironmentInfoRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RetrieveEnvironmentInfoRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public RetrieveEnvironmentInfoRequest instance.
 */
RetrieveEnvironmentInfoRequestPrivate::RetrieveEnvironmentInfoRequestPrivate(
    const ElasticBeanstalkRequest::Action action, RetrieveEnvironmentInfoRequest * const q)
    : RetrieveEnvironmentInfoPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RetrieveEnvironmentInfoRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RetrieveEnvironmentInfoRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RetrieveEnvironmentInfoRequest instance.
 */
RetrieveEnvironmentInfoRequestPrivate::RetrieveEnvironmentInfoRequestPrivate(
    const RetrieveEnvironmentInfoRequestPrivate &other, RetrieveEnvironmentInfoRequest * const q)
    : RetrieveEnvironmentInfoPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace AWS
