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

#include "optinphonenumberrequest.h"
#include "optinphonenumberrequest_p.h"
#include "optinphonenumberresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/**
 * @class  OptInPhoneNumberRequest
 *
 * @brief  Implements SNS OptInPhoneNumber requests.
 *
 * @see    SNSClient::optInPhoneNumber
 */

/**
 * @brief  Constructs a new OptInPhoneNumberRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
OptInPhoneNumberRequest::OptInPhoneNumberRequest(const OptInPhoneNumberRequest &other)
    : SNSRequest(new OptInPhoneNumberRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new OptInPhoneNumberRequest object.
 */
OptInPhoneNumberRequest::OptInPhoneNumberRequest()
    : SNSRequest(new OptInPhoneNumberRequestPrivate(SNSRequest::OptInPhoneNumberAction, this))
{

}

bool OptInPhoneNumberRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an OptInPhoneNumberResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An OptInPhoneNumberResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SNSClient::send
 */
QtAws::Core::AwsAbstractResponse * OptInPhoneNumberRequest::response(QNetworkReply * const reply) const
{
    return new OptInPhoneNumberResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  OptInPhoneNumberRequestPrivate
 *
 * @brief  Private implementation for OptInPhoneNumberRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new OptInPhoneNumberRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public OptInPhoneNumberRequest instance.
 */
OptInPhoneNumberRequestPrivate::OptInPhoneNumberRequestPrivate(
    const SNSRequest::Action action, OptInPhoneNumberRequest * const q)
    : OptInPhoneNumberPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new OptInPhoneNumberRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the OptInPhoneNumberRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public OptInPhoneNumberRequest instance.
 */
OptInPhoneNumberRequestPrivate::OptInPhoneNumberRequestPrivate(
    const OptInPhoneNumberRequestPrivate &other, OptInPhoneNumberRequest * const q)
    : OptInPhoneNumberPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
