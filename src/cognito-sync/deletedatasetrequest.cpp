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

#include "deletedatasetrequest.h"
#include "deletedatasetrequest_p.h"
#include "deletedatasetresponse.h"
#include "cognitosyncrequest_p.h"

namespace QtAws {
namespace CognitoSync {

/**
 * @class  DeleteDatasetRequest
 *
 * @brief  Implements CognitoSync DeleteDataset requests.
 *
 * @see    CognitoSyncClient::deleteDataset
 */

/**
 * @brief  Constructs a new DeleteDatasetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDatasetRequest::DeleteDatasetRequest(const DeleteDatasetRequest &other)
    : CognitoSyncRequest(new DeleteDatasetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDatasetRequest object.
 */
DeleteDatasetRequest::DeleteDatasetRequest()
    : CognitoSyncRequest(new DeleteDatasetRequestPrivate(CognitoSyncRequest::DeleteDatasetAction, this))
{

}

bool DeleteDatasetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDatasetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDatasetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDatasetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDatasetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDatasetRequestPrivate
 *
 * @brief  Private implementation for DeleteDatasetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDatasetRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public DeleteDatasetRequest instance.
 */
DeleteDatasetRequestPrivate::DeleteDatasetRequestPrivate(
    const CognitoSyncRequest::Action action, DeleteDatasetRequest * const q)
    : DeleteDatasetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDatasetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDatasetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDatasetRequest instance.
 */
DeleteDatasetRequestPrivate::DeleteDatasetRequestPrivate(
    const DeleteDatasetRequestPrivate &other, DeleteDatasetRequest * const q)
    : DeleteDatasetPrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace QtAws
