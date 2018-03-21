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

#include "associatecreatedartifactrequest.h"
#include "associatecreatedartifactrequest_p.h"
#include "associatecreatedartifactresponse.h"
#include "migrationhubrequest_p.h"

namespace AWS {
namespace MigrationHub {

/**
 * @class  AssociateCreatedArtifactRequest
 *
 * @brief  Implements MigrationHub AssociateCreatedArtifact requests.
 *
 * @see    MigrationHubClient::associateCreatedArtifact
 */

/**
 * @brief  Constructs a new AssociateCreatedArtifactResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateCreatedArtifactResponse::AssociateCreatedArtifactResponse(

/**
 * @brief  Constructs a new AssociateCreatedArtifactRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateCreatedArtifactRequest::AssociateCreatedArtifactRequest(const AssociateCreatedArtifactRequest &other)
    : MigrationHubRequest(new AssociateCreatedArtifactRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateCreatedArtifactRequest object.
 */
AssociateCreatedArtifactRequest::AssociateCreatedArtifactRequest()
    : MigrationHubRequest(new AssociateCreatedArtifactRequestPrivate(MigrationHubRequest::AssociateCreatedArtifactAction, this))
{

}

bool AssociateCreatedArtifactRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateCreatedArtifactResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateCreatedArtifactResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
AwsAbstractResponse * AssociateCreatedArtifactRequest::response(QNetworkReply * const reply) const
{
    return new AssociateCreatedArtifactResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateCreatedArtifactRequestPrivate
 *
 * @brief  Private implementation for AssociateCreatedArtifactRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateCreatedArtifactRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public AssociateCreatedArtifactRequest instance.
 */
AssociateCreatedArtifactRequestPrivate::AssociateCreatedArtifactRequestPrivate(
    const MigrationHubRequest::Action action, AssociateCreatedArtifactRequest * const q)
    : AssociateCreatedArtifactPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateCreatedArtifactRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateCreatedArtifactRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateCreatedArtifactRequest instance.
 */
AssociateCreatedArtifactRequestPrivate::AssociateCreatedArtifactRequestPrivate(
    const AssociateCreatedArtifactRequestPrivate &other, AssociateCreatedArtifactRequest * const q)
    : AssociateCreatedArtifactPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace AWS
