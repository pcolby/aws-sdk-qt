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

#include "listcreatedartifactsrequest.h"
#include "listcreatedartifactsrequest_p.h"
#include "listcreatedartifactsresponse.h"
#include "migrationhubrequest_p.h"

namespace AWS {
namespace MigrationHub {

/**
 * @class  ListCreatedArtifactsRequest
 *
 * @brief  Implements MigrationHub ListCreatedArtifacts requests.
 *
 * @see    MigrationHubClient::listCreatedArtifacts
 */

/**
 * @brief  Constructs a new ListCreatedArtifactsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCreatedArtifactsRequest::ListCreatedArtifactsRequest(const ListCreatedArtifactsRequest &other)
    : MigrationHubRequest(new ListCreatedArtifactsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListCreatedArtifactsRequest object.
 */
ListCreatedArtifactsRequest::ListCreatedArtifactsRequest()
    : MigrationHubRequest(new ListCreatedArtifactsRequestPrivate(MigrationHubRequest::ListCreatedArtifactsAction, this))
{

}

bool ListCreatedArtifactsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListCreatedArtifactsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCreatedArtifactsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
AwsAbstractResponse * ListCreatedArtifactsRequest::response(QNetworkReply * const reply) const
{
    return new ListCreatedArtifactsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListCreatedArtifactsRequestPrivate
 *
 * @brief  Private implementation for ListCreatedArtifactsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCreatedArtifactsRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public ListCreatedArtifactsRequest instance.
 */
ListCreatedArtifactsRequestPrivate::ListCreatedArtifactsRequestPrivate(
    const MigrationHubRequest::Action action, ListCreatedArtifactsRequest * const q)
    : ListCreatedArtifactsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListCreatedArtifactsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCreatedArtifactsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCreatedArtifactsRequest instance.
 */
ListCreatedArtifactsRequestPrivate::ListCreatedArtifactsRequestPrivate(
    const ListCreatedArtifactsRequestPrivate &other, ListCreatedArtifactsRequest * const q)
    : ListCreatedArtifactsPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace AWS
