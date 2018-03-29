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

#include "describeconfigurationsetrequest.h"
#include "describeconfigurationsetrequest_p.h"
#include "describeconfigurationsetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  DescribeConfigurationSetRequest
 *
 * @brief  Implements SES DescribeConfigurationSet requests.
 *
 * @see    SESClient::describeConfigurationSet
 */

/**
 * @brief  Constructs a new DescribeConfigurationSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConfigurationSetRequest::DescribeConfigurationSetRequest(const DescribeConfigurationSetRequest &other)
    : SESRequest(new DescribeConfigurationSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConfigurationSetRequest object.
 */
DescribeConfigurationSetRequest::DescribeConfigurationSetRequest()
    : SESRequest(new DescribeConfigurationSetRequestPrivate(SESRequest::DescribeConfigurationSetAction, this))
{

}

bool DescribeConfigurationSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConfigurationSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConfigurationSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConfigurationSetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConfigurationSetRequestPrivate
 *
 * @brief  Private implementation for DescribeConfigurationSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationSetRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DescribeConfigurationSetRequest instance.
 */
DescribeConfigurationSetRequestPrivate::DescribeConfigurationSetRequestPrivate(
    const SESRequest::Action action, DescribeConfigurationSetRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConfigurationSetRequest instance.
 */
DescribeConfigurationSetRequestPrivate::DescribeConfigurationSetRequestPrivate(
    const DescribeConfigurationSetRequestPrivate &other, DescribeConfigurationSetRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
