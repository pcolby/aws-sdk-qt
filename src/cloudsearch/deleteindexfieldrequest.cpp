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

#include "deleteindexfieldrequest.h"
#include "deleteindexfieldrequest_p.h"
#include "deleteindexfieldresponse.h"
#include "cloudsearchrequest_p.h"

namespace AWS {
namespace CloudSearch {

/**
 * @class  DeleteIndexFieldRequest
 *
 * @brief  Implements CloudSearch DeleteIndexField requests.
 *
 * @see    CloudSearchClient::deleteIndexField
 */

/**
 * @brief  Constructs a new DeleteIndexFieldResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteIndexFieldResponse::DeleteIndexFieldResponse(

/**
 * @brief  Constructs a new DeleteIndexFieldRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteIndexFieldRequest::DeleteIndexFieldRequest(const DeleteIndexFieldRequest &other)
    : CloudSearchRequest(new DeleteIndexFieldRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteIndexFieldRequest object.
 */
DeleteIndexFieldRequest::DeleteIndexFieldRequest()
    : CloudSearchRequest(new DeleteIndexFieldRequestPrivate(CloudSearchRequest::DeleteIndexFieldAction, this))
{

}

bool DeleteIndexFieldRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteIndexFieldResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteIndexFieldResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * DeleteIndexFieldRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIndexFieldResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteIndexFieldRequestPrivate
 *
 * @brief  Private implementation for DeleteIndexFieldRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIndexFieldRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public DeleteIndexFieldRequest instance.
 */
DeleteIndexFieldRequestPrivate::DeleteIndexFieldRequestPrivate(
    const CloudSearchRequest::Action action, DeleteIndexFieldRequest * const q)
    : DeleteIndexFieldPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIndexFieldRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteIndexFieldRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteIndexFieldRequest instance.
 */
DeleteIndexFieldRequestPrivate::DeleteIndexFieldRequestPrivate(
    const DeleteIndexFieldRequestPrivate &other, DeleteIndexFieldRequest * const q)
    : DeleteIndexFieldPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace AWS
