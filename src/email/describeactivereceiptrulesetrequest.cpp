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

#include "describeactivereceiptrulesetrequest.h"
#include "describeactivereceiptrulesetrequest_p.h"
#include "describeactivereceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  DescribeActiveReceiptRuleSetRequest
 *
 * @brief  Implements SES DescribeActiveReceiptRuleSet requests.
 *
 * @see    SESClient::describeActiveReceiptRuleSet
 */

/**
 * @brief  Constructs a new DescribeActiveReceiptRuleSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeActiveReceiptRuleSetRequest::DescribeActiveReceiptRuleSetRequest(const DescribeActiveReceiptRuleSetRequest &other)
    : SESRequest(new DescribeActiveReceiptRuleSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeActiveReceiptRuleSetRequest object.
 */
DescribeActiveReceiptRuleSetRequest::DescribeActiveReceiptRuleSetRequest()
    : SESRequest(new DescribeActiveReceiptRuleSetRequestPrivate(SESRequest::DescribeActiveReceiptRuleSetAction, this))
{

}

bool DescribeActiveReceiptRuleSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeActiveReceiptRuleSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeActiveReceiptRuleSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * DescribeActiveReceiptRuleSetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeActiveReceiptRuleSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeActiveReceiptRuleSetRequestPrivate
 *
 * @brief  Private implementation for DescribeActiveReceiptRuleSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeActiveReceiptRuleSetRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DescribeActiveReceiptRuleSetRequest instance.
 */
DescribeActiveReceiptRuleSetRequestPrivate::DescribeActiveReceiptRuleSetRequestPrivate(
    const SESRequest::Action action, DescribeActiveReceiptRuleSetRequest * const q)
    : DescribeActiveReceiptRuleSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeActiveReceiptRuleSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeActiveReceiptRuleSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeActiveReceiptRuleSetRequest instance.
 */
DescribeActiveReceiptRuleSetRequestPrivate::DescribeActiveReceiptRuleSetRequestPrivate(
    const DescribeActiveReceiptRuleSetRequestPrivate &other, DescribeActiveReceiptRuleSetRequest * const q)
    : DescribeActiveReceiptRuleSetPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
