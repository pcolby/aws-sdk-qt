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

#include "describehsmconfigurationsrequest.h"
#include "describehsmconfigurationsrequest_p.h"
#include "describehsmconfigurationsresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeHsmConfigurationsRequest
 *
 * @brief  Implements Redshift DescribeHsmConfigurations requests.
 *
 * @see    RedshiftClient::describeHsmConfigurations
 */

/**
 * @brief  Constructs a new DescribeHsmConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeHsmConfigurationsRequest::DescribeHsmConfigurationsRequest(const DescribeHsmConfigurationsRequest &other)
    : RedshiftRequest(new DescribeHsmConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeHsmConfigurationsRequest object.
 */
DescribeHsmConfigurationsRequest::DescribeHsmConfigurationsRequest()
    : RedshiftRequest(new DescribeHsmConfigurationsRequestPrivate(RedshiftRequest::DescribeHsmConfigurationsAction, this))
{

}

bool DescribeHsmConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeHsmConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeHsmConfigurationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeHsmConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHsmConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeHsmConfigurationsRequestPrivate
 *
 * @brief  Private implementation for DescribeHsmConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHsmConfigurationsRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeHsmConfigurationsRequest instance.
 */
DescribeHsmConfigurationsRequestPrivate::DescribeHsmConfigurationsRequestPrivate(
    const RedshiftRequest::Action action, DescribeHsmConfigurationsRequest * const q)
    : DescribeHsmConfigurationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHsmConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeHsmConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeHsmConfigurationsRequest instance.
 */
DescribeHsmConfigurationsRequestPrivate::DescribeHsmConfigurationsRequestPrivate(
    const DescribeHsmConfigurationsRequestPrivate &other, DescribeHsmConfigurationsRequest * const q)
    : DescribeHsmConfigurationsPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
