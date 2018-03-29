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

#include "deletetriggerrequest.h"
#include "deletetriggerrequest_p.h"
#include "deletetriggerresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  DeleteTriggerRequest
 *
 * @brief  Implements Glue DeleteTrigger requests.
 *
 * @see    GlueClient::deleteTrigger
 */

/**
 * @brief  Constructs a new DeleteTriggerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTriggerRequest::DeleteTriggerRequest(const DeleteTriggerRequest &other)
    : GlueRequest(new DeleteTriggerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteTriggerRequest object.
 */
DeleteTriggerRequest::DeleteTriggerRequest()
    : GlueRequest(new DeleteTriggerRequestPrivate(GlueRequest::DeleteTriggerAction, this))
{

}

bool DeleteTriggerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteTriggerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTriggerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * DeleteTriggerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTriggerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteTriggerRequestPrivate
 *
 * @brief  Private implementation for DeleteTriggerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTriggerRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public DeleteTriggerRequest instance.
 */
DeleteTriggerRequestPrivate::DeleteTriggerRequestPrivate(
    const GlueRequest::Action action, DeleteTriggerRequest * const q)
    : DeleteTriggerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTriggerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTriggerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTriggerRequest instance.
 */
DeleteTriggerRequestPrivate::DeleteTriggerRequestPrivate(
    const DeleteTriggerRequestPrivate &other, DeleteTriggerRequest * const q)
    : DeleteTriggerPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
