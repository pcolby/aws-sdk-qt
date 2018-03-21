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

#include "describeconfigurationrecordersrequest.h"
#include "describeconfigurationrecordersrequest_p.h"
#include "describeconfigurationrecordersresponse.h"
#include "configservicerequest_p.h"

namespace AWS {
namespace ConfigService {

/**
 * @class  DescribeConfigurationRecordersRequest
 *
 * @brief  Implements ConfigService DescribeConfigurationRecorders requests.
 *
 * @see    ConfigServiceClient::describeConfigurationRecorders
 */

/**
 * @brief  Constructs a new DescribeConfigurationRecordersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigurationRecordersResponse::DescribeConfigurationRecordersResponse(

/**
 * @brief  Constructs a new DescribeConfigurationRecordersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConfigurationRecordersRequest::DescribeConfigurationRecordersRequest(const DescribeConfigurationRecordersRequest &other)
    : ConfigServiceRequest(new DescribeConfigurationRecordersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConfigurationRecordersRequest object.
 */
DescribeConfigurationRecordersRequest::DescribeConfigurationRecordersRequest()
    : ConfigServiceRequest(new DescribeConfigurationRecordersRequestPrivate(ConfigServiceRequest::DescribeConfigurationRecordersAction, this))
{

}

bool DescribeConfigurationRecordersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConfigurationRecordersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConfigurationRecordersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * DescribeConfigurationRecordersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationRecordersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConfigurationRecordersRequestPrivate
 *
 * @brief  Private implementation for DescribeConfigurationRecordersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationRecordersRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DescribeConfigurationRecordersRequest instance.
 */
DescribeConfigurationRecordersRequestPrivate::DescribeConfigurationRecordersRequestPrivate(
    const ConfigServiceRequest::Action action, DescribeConfigurationRecordersRequest * const q)
    : DescribeConfigurationRecordersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationRecordersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationRecordersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConfigurationRecordersRequest instance.
 */
DescribeConfigurationRecordersRequestPrivate::DescribeConfigurationRecordersRequestPrivate(
    const DescribeConfigurationRecordersRequestPrivate &other, DescribeConfigurationRecordersRequest * const q)
    : DescribeConfigurationRecordersPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace AWS
