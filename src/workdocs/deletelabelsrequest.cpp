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

#include "deletelabelsrequest.h"
#include "deletelabelsrequest_p.h"
#include "deletelabelsresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  DeleteLabelsRequest
 *
 * @brief  Implements WorkDocs DeleteLabels requests.
 *
 * @see    WorkDocsClient::deleteLabels
 */

/**
 * @brief  Constructs a new DeleteLabelsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLabelsRequest::DeleteLabelsRequest(const DeleteLabelsRequest &other)
    : WorkDocsRequest(new DeleteLabelsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteLabelsRequest object.
 */
DeleteLabelsRequest::DeleteLabelsRequest()
    : WorkDocsRequest(new DeleteLabelsRequestPrivate(WorkDocsRequest::DeleteLabelsAction, this))
{

}

bool DeleteLabelsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteLabelsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLabelsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * DeleteLabelsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLabelsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteLabelsRequestPrivate
 *
 * @brief  Private implementation for DeleteLabelsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLabelsRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public DeleteLabelsRequest instance.
 */
DeleteLabelsRequestPrivate::DeleteLabelsRequestPrivate(
    const WorkDocsRequest::Action action, DeleteLabelsRequest * const q)
    : DeleteLabelsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLabelsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLabelsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLabelsRequest instance.
 */
DeleteLabelsRequestPrivate::DeleteLabelsRequestPrivate(
    const DeleteLabelsRequestPrivate &other, DeleteLabelsRequest * const q)
    : DeleteLabelsPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace AWS
