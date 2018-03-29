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

#include "createworkerblockrequest.h"
#include "createworkerblockrequest_p.h"
#include "createworkerblockresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  CreateWorkerBlockRequest
 *
 * @brief  Implements MTurk CreateWorkerBlock requests.
 *
 * @see    MTurkClient::createWorkerBlock
 */

/**
 * @brief  Constructs a new CreateWorkerBlockRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateWorkerBlockRequest::CreateWorkerBlockRequest(const CreateWorkerBlockRequest &other)
    : MTurkRequest(new CreateWorkerBlockRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateWorkerBlockRequest object.
 */
CreateWorkerBlockRequest::CreateWorkerBlockRequest()
    : MTurkRequest(new CreateWorkerBlockRequestPrivate(MTurkRequest::CreateWorkerBlockAction, this))
{

}

bool CreateWorkerBlockRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateWorkerBlockResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateWorkerBlockResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * CreateWorkerBlockRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkerBlockResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateWorkerBlockRequestPrivate
 *
 * @brief  Private implementation for CreateWorkerBlockRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateWorkerBlockRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public CreateWorkerBlockRequest instance.
 */
CreateWorkerBlockRequestPrivate::CreateWorkerBlockRequestPrivate(
    const MTurkRequest::Action action, CreateWorkerBlockRequest * const q)
    : CreateWorkerBlockPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateWorkerBlockRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkerBlockRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateWorkerBlockRequest instance.
 */
CreateWorkerBlockRequestPrivate::CreateWorkerBlockRequestPrivate(
    const CreateWorkerBlockRequestPrivate &other, CreateWorkerBlockRequest * const q)
    : CreateWorkerBlockPrivate(other, q)
{

}

} // namespace MTurk
} // namespace AWS
