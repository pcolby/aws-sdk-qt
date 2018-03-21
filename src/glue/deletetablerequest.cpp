/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletetablerequest.h"
#include "deletetablerequest_p.h"
#include "deletetableresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  DeleteTableRequest
 *
 * @brief  Implements Glue DeleteTable requests.
 *
 * @see    GlueClient::deleteTable
 */

/**
 * @brief  Constructs a new DeleteTableResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTableResponse::DeleteTableResponse(

/**
 * @brief  Constructs a new DeleteTableRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTableRequest::DeleteTableRequest(const DeleteTableRequest &other)
    : GlueRequest(new DeleteTableRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteTableRequest object.
 */
DeleteTableRequest::DeleteTableRequest()
    : GlueRequest(new DeleteTableRequestPrivate(GlueRequest::DeleteTableAction, this))
{

}

bool DeleteTableRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteTableResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTableResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * DeleteTableRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTableResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteTableRequestPrivate
 *
 * @brief  Private implementation for DeleteTableRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTableRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public DeleteTableRequest instance.
 */
DeleteTableRequestPrivate::DeleteTableRequestPrivate(
    const GlueRequest::Action action, DeleteTableRequest * const q)
    : DeleteTablePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTableRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTableRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTableRequest instance.
 */
DeleteTableRequestPrivate::DeleteTableRequestPrivate(
    const DeleteTableRequestPrivate &other, DeleteTableRequest * const q)
    : DeleteTablePrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
