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

#include "deletequalificationtyperequest.h"
#include "deletequalificationtyperequest_p.h"
#include "deletequalificationtyperesponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  DeleteQualificationTypeRequest
 *
 * @brief  Implements MTurk DeleteQualificationType requests.
 *
 * @see    MTurkClient::deleteQualificationType
 */

/**
 * @brief  Constructs a new DeleteQualificationTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteQualificationTypeResponse::DeleteQualificationTypeResponse(

/**
 * @brief  Constructs a new DeleteQualificationTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteQualificationTypeRequest::DeleteQualificationTypeRequest(const DeleteQualificationTypeRequest &other)
    : MTurkRequest(new DeleteQualificationTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteQualificationTypeRequest object.
 */
DeleteQualificationTypeRequest::DeleteQualificationTypeRequest()
    : MTurkRequest(new DeleteQualificationTypeRequestPrivate(MTurkRequest::DeleteQualificationTypeAction, this))
{

}

bool DeleteQualificationTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteQualificationTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteQualificationTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * DeleteQualificationTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteQualificationTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteQualificationTypeRequestPrivate
 *
 * @brief  Private implementation for DeleteQualificationTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteQualificationTypeRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public DeleteQualificationTypeRequest instance.
 */
DeleteQualificationTypeRequestPrivate::DeleteQualificationTypeRequestPrivate(
    const MTurkRequest::Action action, DeleteQualificationTypeRequest * const q)
    : DeleteQualificationTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteQualificationTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteQualificationTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteQualificationTypeRequest instance.
 */
DeleteQualificationTypeRequestPrivate::DeleteQualificationTypeRequestPrivate(
    const DeleteQualificationTypeRequestPrivate &other, DeleteQualificationTypeRequest * const q)
    : DeleteQualificationTypePrivate(other, q)
{

}

} // namespace MTurk
} // namespace AWS
