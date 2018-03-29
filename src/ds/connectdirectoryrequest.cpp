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

#include "connectdirectoryrequest.h"
#include "connectdirectoryrequest_p.h"
#include "connectdirectoryresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  ConnectDirectoryRequest
 *
 * @brief  Implements DirectoryService ConnectDirectory requests.
 *
 * @see    DirectoryServiceClient::connectDirectory
 */

/**
 * @brief  Constructs a new ConnectDirectoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ConnectDirectoryRequest::ConnectDirectoryRequest(const ConnectDirectoryRequest &other)
    : DirectoryServiceRequest(new ConnectDirectoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ConnectDirectoryRequest object.
 */
ConnectDirectoryRequest::ConnectDirectoryRequest()
    : DirectoryServiceRequest(new ConnectDirectoryRequestPrivate(DirectoryServiceRequest::ConnectDirectoryAction, this))
{

}

bool ConnectDirectoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ConnectDirectoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ConnectDirectoryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * ConnectDirectoryRequest::response(QNetworkReply * const reply) const
{
    return new ConnectDirectoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ConnectDirectoryRequestPrivate
 *
 * @brief  Private implementation for ConnectDirectoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConnectDirectoryRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public ConnectDirectoryRequest instance.
 */
ConnectDirectoryRequestPrivate::ConnectDirectoryRequestPrivate(
    const DirectoryServiceRequest::Action action, ConnectDirectoryRequest * const q)
    : ConnectDirectoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ConnectDirectoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ConnectDirectoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ConnectDirectoryRequest instance.
 */
ConnectDirectoryRequestPrivate::ConnectDirectoryRequestPrivate(
    const ConnectDirectoryRequestPrivate &other, ConnectDirectoryRequest * const q)
    : ConnectDirectoryPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
