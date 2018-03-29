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

#include "deletetrustrequest.h"
#include "deletetrustrequest_p.h"
#include "deletetrustresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  DeleteTrustRequest
 *
 * @brief  Implements DirectoryService DeleteTrust requests.
 *
 * @see    DirectoryServiceClient::deleteTrust
 */

/**
 * @brief  Constructs a new DeleteTrustRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTrustRequest::DeleteTrustRequest(const DeleteTrustRequest &other)
    : DirectoryServiceRequest(new DeleteTrustRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteTrustRequest object.
 */
DeleteTrustRequest::DeleteTrustRequest()
    : DirectoryServiceRequest(new DeleteTrustRequestPrivate(DirectoryServiceRequest::DeleteTrustAction, this))
{

}

bool DeleteTrustRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteTrustResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTrustResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTrustRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTrustResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteTrustRequestPrivate
 *
 * @brief  Private implementation for DeleteTrustRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTrustRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public DeleteTrustRequest instance.
 */
DeleteTrustRequestPrivate::DeleteTrustRequestPrivate(
    const DirectoryServiceRequest::Action action, DeleteTrustRequest * const q)
    : DeleteTrustPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTrustRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTrustRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTrustRequest instance.
 */
DeleteTrustRequestPrivate::DeleteTrustRequestPrivate(
    const DeleteTrustRequestPrivate &other, DeleteTrustRequest * const q)
    : DeleteTrustPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
