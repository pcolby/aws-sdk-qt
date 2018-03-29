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

#include "updatetablerequest.h"
#include "updatetablerequest_p.h"
#include "updatetableresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  UpdateTableRequest
 *
 * @brief  Implements Glue UpdateTable requests.
 *
 * @see    GlueClient::updateTable
 */

/**
 * @brief  Constructs a new UpdateTableRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateTableRequest::UpdateTableRequest(const UpdateTableRequest &other)
    : GlueRequest(new UpdateTableRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateTableRequest object.
 */
UpdateTableRequest::UpdateTableRequest()
    : GlueRequest(new UpdateTableRequestPrivate(GlueRequest::UpdateTableAction, this))
{

}

bool UpdateTableRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateTableResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateTableResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTableRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTableResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateTableRequestPrivate
 *
 * @brief  Private implementation for UpdateTableRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTableRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public UpdateTableRequest instance.
 */
UpdateTableRequestPrivate::UpdateTableRequestPrivate(
    const GlueRequest::Action action, UpdateTableRequest * const q)
    : UpdateTablePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTableRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateTableRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateTableRequest instance.
 */
UpdateTableRequestPrivate::UpdateTableRequestPrivate(
    const UpdateTableRequestPrivate &other, UpdateTableRequest * const q)
    : UpdateTablePrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
