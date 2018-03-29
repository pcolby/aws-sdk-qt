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

#include "checkifphonenumberisoptedoutrequest.h"
#include "checkifphonenumberisoptedoutrequest_p.h"
#include "checkifphonenumberisoptedoutresponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  CheckIfPhoneNumberIsOptedOutRequest
 *
 * @brief  Implements SNS CheckIfPhoneNumberIsOptedOut requests.
 *
 * @see    SNSClient::checkIfPhoneNumberIsOptedOut
 */

/**
 * @brief  Constructs a new CheckIfPhoneNumberIsOptedOutRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CheckIfPhoneNumberIsOptedOutRequest::CheckIfPhoneNumberIsOptedOutRequest(const CheckIfPhoneNumberIsOptedOutRequest &other)
    : SNSRequest(new CheckIfPhoneNumberIsOptedOutRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CheckIfPhoneNumberIsOptedOutRequest object.
 */
CheckIfPhoneNumberIsOptedOutRequest::CheckIfPhoneNumberIsOptedOutRequest()
    : SNSRequest(new CheckIfPhoneNumberIsOptedOutRequestPrivate(SNSRequest::CheckIfPhoneNumberIsOptedOutAction, this))
{

}

bool CheckIfPhoneNumberIsOptedOutRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CheckIfPhoneNumberIsOptedOutResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CheckIfPhoneNumberIsOptedOutResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * CheckIfPhoneNumberIsOptedOutRequest::response(QNetworkReply * const reply) const
{
    return new CheckIfPhoneNumberIsOptedOutResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CheckIfPhoneNumberIsOptedOutRequestPrivate
 *
 * @brief  Private implementation for CheckIfPhoneNumberIsOptedOutRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CheckIfPhoneNumberIsOptedOutRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public CheckIfPhoneNumberIsOptedOutRequest instance.
 */
CheckIfPhoneNumberIsOptedOutRequestPrivate::CheckIfPhoneNumberIsOptedOutRequestPrivate(
    const SNSRequest::Action action, CheckIfPhoneNumberIsOptedOutRequest * const q)
    : CheckIfPhoneNumberIsOptedOutPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CheckIfPhoneNumberIsOptedOutRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CheckIfPhoneNumberIsOptedOutRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CheckIfPhoneNumberIsOptedOutRequest instance.
 */
CheckIfPhoneNumberIsOptedOutRequestPrivate::CheckIfPhoneNumberIsOptedOutRequestPrivate(
    const CheckIfPhoneNumberIsOptedOutRequestPrivate &other, CheckIfPhoneNumberIsOptedOutRequest * const q)
    : CheckIfPhoneNumberIsOptedOutPrivate(other, q)
{

}

} // namespace SNS
} // namespace AWS
