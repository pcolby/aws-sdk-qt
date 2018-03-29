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

#include "describelunaclientrequest.h"
#include "describelunaclientrequest_p.h"
#include "describelunaclientresponse.h"
#include "cloudhsmrequest_p.h"

namespace AWS {
namespace CloudHSM {

/**
 * @class  DescribeLunaClientRequest
 *
 * @brief  Implements CloudHSM DescribeLunaClient requests.
 *
 * @see    CloudHSMClient::describeLunaClient
 */

/**
 * @brief  Constructs a new DescribeLunaClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLunaClientRequest::DescribeLunaClientRequest(const DescribeLunaClientRequest &other)
    : CloudHSMRequest(new DescribeLunaClientRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLunaClientRequest object.
 */
DescribeLunaClientRequest::DescribeLunaClientRequest()
    : CloudHSMRequest(new DescribeLunaClientRequestPrivate(CloudHSMRequest::DescribeLunaClientAction, this))
{

}

bool DescribeLunaClientRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLunaClientResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLunaClientResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
AwsAbstractResponse * DescribeLunaClientRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLunaClientResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLunaClientRequestPrivate
 *
 * @brief  Private implementation for DescribeLunaClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLunaClientRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public DescribeLunaClientRequest instance.
 */
DescribeLunaClientRequestPrivate::DescribeLunaClientRequestPrivate(
    const CloudHSMRequest::Action action, DescribeLunaClientRequest * const q)
    : DescribeLunaClientPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLunaClientRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLunaClientRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLunaClientRequest instance.
 */
DescribeLunaClientRequestPrivate::DescribeLunaClientRequestPrivate(
    const DescribeLunaClientRequestPrivate &other, DescribeLunaClientRequest * const q)
    : DescribeLunaClientPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace AWS
