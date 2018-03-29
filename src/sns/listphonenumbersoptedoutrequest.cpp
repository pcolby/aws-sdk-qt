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

#include "listphonenumbersoptedoutrequest.h"
#include "listphonenumbersoptedoutrequest_p.h"
#include "listphonenumbersoptedoutresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/**
 * @class  ListPhoneNumbersOptedOutRequest
 *
 * @brief  Implements SNS ListPhoneNumbersOptedOut requests.
 *
 * @see    SNSClient::listPhoneNumbersOptedOut
 */

/**
 * @brief  Constructs a new ListPhoneNumbersOptedOutRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPhoneNumbersOptedOutRequest::ListPhoneNumbersOptedOutRequest(const ListPhoneNumbersOptedOutRequest &other)
    : SNSRequest(new ListPhoneNumbersOptedOutRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPhoneNumbersOptedOutRequest object.
 */
ListPhoneNumbersOptedOutRequest::ListPhoneNumbersOptedOutRequest()
    : SNSRequest(new ListPhoneNumbersOptedOutRequestPrivate(SNSRequest::ListPhoneNumbersOptedOutAction, this))
{

}

bool ListPhoneNumbersOptedOutRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPhoneNumbersOptedOutResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPhoneNumbersOptedOutResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * ListPhoneNumbersOptedOutRequest::response(QNetworkReply * const reply) const
{
    return new ListPhoneNumbersOptedOutResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPhoneNumbersOptedOutRequestPrivate
 *
 * @brief  Private implementation for ListPhoneNumbersOptedOutRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPhoneNumbersOptedOutRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public ListPhoneNumbersOptedOutRequest instance.
 */
ListPhoneNumbersOptedOutRequestPrivate::ListPhoneNumbersOptedOutRequestPrivate(
    const SNSRequest::Action action, ListPhoneNumbersOptedOutRequest * const q)
    : ListPhoneNumbersOptedOutPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPhoneNumbersOptedOutRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPhoneNumbersOptedOutRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPhoneNumbersOptedOutRequest instance.
 */
ListPhoneNumbersOptedOutRequestPrivate::ListPhoneNumbersOptedOutRequestPrivate(
    const ListPhoneNumbersOptedOutRequestPrivate &other, ListPhoneNumbersOptedOutRequest * const q)
    : ListPhoneNumbersOptedOutPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
