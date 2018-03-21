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

#include "createcloudformationchangesetrequest.h"
#include "createcloudformationchangesetrequest_p.h"
#include "createcloudformationchangesetresponse.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace AWS {
namespace ServerlessApplicationRepository {

/**
 * @class  CreateCloudFormationChangeSetRequest
 *
 * @brief  Implements ServerlessApplicationRepository CreateCloudFormationChangeSet requests.
 *
 * @see    ServerlessApplicationRepositoryClient::createCloudFormationChangeSet
 */

/**
 * @brief  Constructs a new CreateCloudFormationChangeSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCloudFormationChangeSetResponse::CreateCloudFormationChangeSetResponse(

/**
 * @brief  Constructs a new CreateCloudFormationChangeSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCloudFormationChangeSetRequest::CreateCloudFormationChangeSetRequest(const CreateCloudFormationChangeSetRequest &other)
    : ServerlessApplicationRepositoryRequest(new CreateCloudFormationChangeSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCloudFormationChangeSetRequest object.
 */
CreateCloudFormationChangeSetRequest::CreateCloudFormationChangeSetRequest()
    : ServerlessApplicationRepositoryRequest(new CreateCloudFormationChangeSetRequestPrivate(ServerlessApplicationRepositoryRequest::CreateCloudFormationChangeSetAction, this))
{

}

bool CreateCloudFormationChangeSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCloudFormationChangeSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCloudFormationChangeSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServerlessApplicationRepositoryClient::send
 */
AwsAbstractResponse * CreateCloudFormationChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateCloudFormationChangeSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCloudFormationChangeSetRequestPrivate
 *
 * @brief  Private implementation for CreateCloudFormationChangeSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCloudFormationChangeSetRequestPrivate object.
 *
 * @param  action  ServerlessApplicationRepository action being performed.
 * @param  q       Pointer to this object's public CreateCloudFormationChangeSetRequest instance.
 */
CreateCloudFormationChangeSetRequestPrivate::CreateCloudFormationChangeSetRequestPrivate(
    const ServerlessApplicationRepositoryRequest::Action action, CreateCloudFormationChangeSetRequest * const q)
    : CreateCloudFormationChangeSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCloudFormationChangeSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCloudFormationChangeSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCloudFormationChangeSetRequest instance.
 */
CreateCloudFormationChangeSetRequestPrivate::CreateCloudFormationChangeSetRequestPrivate(
    const CreateCloudFormationChangeSetRequestPrivate &other, CreateCloudFormationChangeSetRequest * const q)
    : CreateCloudFormationChangeSetPrivate(other, q)
{

}
