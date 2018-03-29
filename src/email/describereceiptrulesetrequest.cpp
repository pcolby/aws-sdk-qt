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

#include "describereceiptrulesetrequest.h"
#include "describereceiptrulesetrequest_p.h"
#include "describereceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  DescribeReceiptRuleSetRequest
 *
 * @brief  Implements SES DescribeReceiptRuleSet requests.
 *
 * @see    SESClient::describeReceiptRuleSet
 */

/**
 * @brief  Constructs a new DescribeReceiptRuleSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReceiptRuleSetRequest::DescribeReceiptRuleSetRequest(const DescribeReceiptRuleSetRequest &other)
    : SESRequest(new DescribeReceiptRuleSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeReceiptRuleSetRequest object.
 */
DescribeReceiptRuleSetRequest::DescribeReceiptRuleSetRequest()
    : SESRequest(new DescribeReceiptRuleSetRequestPrivate(SESRequest::DescribeReceiptRuleSetAction, this))
{

}

bool DescribeReceiptRuleSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeReceiptRuleSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReceiptRuleSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * DescribeReceiptRuleSetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReceiptRuleSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeReceiptRuleSetRequestPrivate
 *
 * @brief  Private implementation for DescribeReceiptRuleSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReceiptRuleSetRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DescribeReceiptRuleSetRequest instance.
 */
DescribeReceiptRuleSetRequestPrivate::DescribeReceiptRuleSetRequestPrivate(
    const SESRequest::Action action, DescribeReceiptRuleSetRequest * const q)
    : DescribeReceiptRuleSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReceiptRuleSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReceiptRuleSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReceiptRuleSetRequest instance.
 */
DescribeReceiptRuleSetRequestPrivate::DescribeReceiptRuleSetRequestPrivate(
    const DescribeReceiptRuleSetRequestPrivate &other, DescribeReceiptRuleSetRequest * const q)
    : DescribeReceiptRuleSetPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
