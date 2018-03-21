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

#include "updatedocumentdefaultversionrequest.h"
#include "updatedocumentdefaultversionrequest_p.h"
#include "updatedocumentdefaultversionresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  UpdateDocumentDefaultVersionRequest
 *
 * @brief  Implements SSM UpdateDocumentDefaultVersion requests.
 *
 * @see    SSMClient::updateDocumentDefaultVersion
 */

/**
 * @brief  Constructs a new UpdateDocumentDefaultVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDocumentDefaultVersionResponse::UpdateDocumentDefaultVersionResponse(

/**
 * @brief  Constructs a new UpdateDocumentDefaultVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDocumentDefaultVersionRequest::UpdateDocumentDefaultVersionRequest(const UpdateDocumentDefaultVersionRequest &other)
    : SSMRequest(new UpdateDocumentDefaultVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDocumentDefaultVersionRequest object.
 */
UpdateDocumentDefaultVersionRequest::UpdateDocumentDefaultVersionRequest()
    : SSMRequest(new UpdateDocumentDefaultVersionRequestPrivate(SSMRequest::UpdateDocumentDefaultVersionAction, this))
{

}

bool UpdateDocumentDefaultVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDocumentDefaultVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDocumentDefaultVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * UpdateDocumentDefaultVersionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDocumentDefaultVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDocumentDefaultVersionRequestPrivate
 *
 * @brief  Private implementation for UpdateDocumentDefaultVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDocumentDefaultVersionRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public UpdateDocumentDefaultVersionRequest instance.
 */
UpdateDocumentDefaultVersionRequestPrivate::UpdateDocumentDefaultVersionRequestPrivate(
    const SSMRequest::Action action, UpdateDocumentDefaultVersionRequest * const q)
    : UpdateDocumentDefaultVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDocumentDefaultVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDocumentDefaultVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDocumentDefaultVersionRequest instance.
 */
UpdateDocumentDefaultVersionRequestPrivate::UpdateDocumentDefaultVersionRequestPrivate(
    const UpdateDocumentDefaultVersionRequestPrivate &other, UpdateDocumentDefaultVersionRequest * const q)
    : UpdateDocumentDefaultVersionPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
