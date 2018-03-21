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

#include "createapplicationversionrequest.h"
#include "createapplicationversionrequest_p.h"
#include "createapplicationversionresponse.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace AWS {
namespace ServerlessApplicationRepository {

/**
 * @class  CreateApplicationVersionRequest
 *
 * @brief  Implements ServerlessApplicationRepository CreateApplicationVersion requests.
 *
 * @see    ServerlessApplicationRepositoryClient::createApplicationVersion
 */

/**
 * @brief  Constructs a new CreateApplicationVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateApplicationVersionResponse::CreateApplicationVersionResponse(

/**
 * @brief  Constructs a new CreateApplicationVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateApplicationVersionRequest::CreateApplicationVersionRequest(const CreateApplicationVersionRequest &other)
    : ServerlessApplicationRepositoryRequest(new CreateApplicationVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateApplicationVersionRequest object.
 */
CreateApplicationVersionRequest::CreateApplicationVersionRequest()
    : ServerlessApplicationRepositoryRequest(new CreateApplicationVersionRequestPrivate(ServerlessApplicationRepositoryRequest::CreateApplicationVersionAction, this))
{

}

bool CreateApplicationVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateApplicationVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateApplicationVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServerlessApplicationRepositoryClient::send
 */
AwsAbstractResponse * CreateApplicationVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateApplicationVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateApplicationVersionRequestPrivate
 *
 * @brief  Private implementation for CreateApplicationVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateApplicationVersionRequestPrivate object.
 *
 * @param  action  ServerlessApplicationRepository action being performed.
 * @param  q       Pointer to this object's public CreateApplicationVersionRequest instance.
 */
CreateApplicationVersionRequestPrivate::CreateApplicationVersionRequestPrivate(
    const ServerlessApplicationRepositoryRequest::Action action, CreateApplicationVersionRequest * const q)
    : CreateApplicationVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateApplicationVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateApplicationVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateApplicationVersionRequest instance.
 */
CreateApplicationVersionRequestPrivate::CreateApplicationVersionRequestPrivate(
    const CreateApplicationVersionRequestPrivate &other, CreateApplicationVersionRequest * const q)
    : CreateApplicationVersionPrivate(other, q)
{

}

} // namespace ServerlessApplicationRepository
} // namespace AWS
