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

#include "getapplicationrequest.h"
#include "getapplicationrequest_p.h"
#include "getapplicationresponse.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

/**
 * @class  GetApplicationRequest
 *
 * @brief  Implements ServerlessApplicationRepository GetApplication requests.
 *
 * @see    ServerlessApplicationRepositoryClient::getApplication
 */

/**
 * @brief  Constructs a new GetApplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetApplicationRequest::GetApplicationRequest(const GetApplicationRequest &other)
    : ServerlessApplicationRepositoryRequest(new GetApplicationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetApplicationRequest object.
 */
GetApplicationRequest::GetApplicationRequest()
    : ServerlessApplicationRepositoryRequest(new GetApplicationRequestPrivate(ServerlessApplicationRepositoryRequest::GetApplicationAction, this))
{

}

bool GetApplicationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetApplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetApplicationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServerlessApplicationRepositoryClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApplicationRequest::response(QNetworkReply * const reply) const
{
    return new GetApplicationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetApplicationRequestPrivate
 *
 * @brief  Private implementation for GetApplicationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetApplicationRequestPrivate object.
 *
 * @param  action  ServerlessApplicationRepository action being performed.
 * @param  q       Pointer to this object's public GetApplicationRequest instance.
 */
GetApplicationRequestPrivate::GetApplicationRequestPrivate(
    const ServerlessApplicationRepositoryRequest::Action action, GetApplicationRequest * const q)
    : GetApplicationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetApplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetApplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetApplicationRequest instance.
 */
GetApplicationRequestPrivate::GetApplicationRequestPrivate(
    const GetApplicationRequestPrivate &other, GetApplicationRequest * const q)
    : GetApplicationPrivate(other, q)
{

}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
