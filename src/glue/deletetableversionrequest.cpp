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

#include "deletetableversionrequest.h"
#include "deletetableversionrequest_p.h"
#include "deletetableversionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  DeleteTableVersionRequest
 *
 * @brief  Implements Glue DeleteTableVersion requests.
 *
 * @see    GlueClient::deleteTableVersion
 */

/**
 * @brief  Constructs a new DeleteTableVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTableVersionRequest::DeleteTableVersionRequest(const DeleteTableVersionRequest &other)
    : GlueRequest(new DeleteTableVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteTableVersionRequest object.
 */
DeleteTableVersionRequest::DeleteTableVersionRequest()
    : GlueRequest(new DeleteTableVersionRequestPrivate(GlueRequest::DeleteTableVersionAction, this))
{

}

bool DeleteTableVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteTableVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTableVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * DeleteTableVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTableVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteTableVersionRequestPrivate
 *
 * @brief  Private implementation for DeleteTableVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTableVersionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public DeleteTableVersionRequest instance.
 */
DeleteTableVersionRequestPrivate::DeleteTableVersionRequestPrivate(
    const GlueRequest::Action action, DeleteTableVersionRequest * const q)
    : DeleteTableVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTableVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTableVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTableVersionRequest instance.
 */
DeleteTableVersionRequestPrivate::DeleteTableVersionRequestPrivate(
    const DeleteTableVersionRequestPrivate &other, DeleteTableVersionRequest * const q)
    : DeleteTableVersionPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
