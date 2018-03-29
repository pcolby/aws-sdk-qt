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

#include "listhsmsrequest.h"
#include "listhsmsrequest_p.h"
#include "listhsmsresponse.h"
#include "cloudhsmrequest_p.h"

namespace AWS {
namespace CloudHSM {

/**
 * @class  ListHsmsRequest
 *
 * @brief  Implements CloudHSM ListHsms requests.
 *
 * @see    CloudHSMClient::listHsms
 */

/**
 * @brief  Constructs a new ListHsmsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListHsmsRequest::ListHsmsRequest(const ListHsmsRequest &other)
    : CloudHSMRequest(new ListHsmsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListHsmsRequest object.
 */
ListHsmsRequest::ListHsmsRequest()
    : CloudHSMRequest(new ListHsmsRequestPrivate(CloudHSMRequest::ListHsmsAction, this))
{

}

bool ListHsmsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListHsmsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListHsmsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
AwsAbstractResponse * ListHsmsRequest::response(QNetworkReply * const reply) const
{
    return new ListHsmsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListHsmsRequestPrivate
 *
 * @brief  Private implementation for ListHsmsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHsmsRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public ListHsmsRequest instance.
 */
ListHsmsRequestPrivate::ListHsmsRequestPrivate(
    const CloudHSMRequest::Action action, ListHsmsRequest * const q)
    : ListHsmsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListHsmsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListHsmsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListHsmsRequest instance.
 */
ListHsmsRequestPrivate::ListHsmsRequestPrivate(
    const ListHsmsRequestPrivate &other, ListHsmsRequest * const q)
    : ListHsmsPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace AWS
