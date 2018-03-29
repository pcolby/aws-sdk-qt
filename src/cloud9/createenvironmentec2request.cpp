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

#include "createenvironmentec2request.h"
#include "createenvironmentec2request_p.h"
#include "createenvironmentec2response.h"
#include "cloud9request_p.h"

namespace QtAws {
namespace Cloud9 {

/**
 * @class  CreateEnvironmentEC2Request
 *
 * @brief  Implements Cloud9 CreateEnvironmentEC2 requests.
 *
 * @see    Cloud9Client::createEnvironmentEC2
 */

/**
 * @brief  Constructs a new CreateEnvironmentEC2Request object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateEnvironmentEC2Request::CreateEnvironmentEC2Request(const CreateEnvironmentEC2Request &other)
    : Cloud9Request(new CreateEnvironmentEC2RequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateEnvironmentEC2Request object.
 */
CreateEnvironmentEC2Request::CreateEnvironmentEC2Request()
    : Cloud9Request(new CreateEnvironmentEC2RequestPrivate(Cloud9Request::CreateEnvironmentEC2Action, this))
{

}

bool CreateEnvironmentEC2Request::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateEnvironmentEC2Response object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateEnvironmentEC2Response instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Cloud9Client::send
 */
QtAws::Core::AwsAbstractResponse * CreateEnvironmentEC2Request::response(QNetworkReply * const reply) const
{
    return new CreateEnvironmentEC2Response(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateEnvironmentEC2RequestPrivate
 *
 * @brief  Private implementation for CreateEnvironmentEC2Request.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEnvironmentEC2RequestPrivate object.
 *
 * @param  action  Cloud9 action being performed.
 * @param  q       Pointer to this object's public CreateEnvironmentEC2Request instance.
 */
CreateEnvironmentEC2RequestPrivate::CreateEnvironmentEC2RequestPrivate(
    const Cloud9Request::Action action, CreateEnvironmentEC2Request * const q)
    : Cloud9RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateEnvironmentEC2RequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateEnvironmentEC2Request
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateEnvironmentEC2Request instance.
 */
CreateEnvironmentEC2RequestPrivate::CreateEnvironmentEC2RequestPrivate(
    const CreateEnvironmentEC2RequestPrivate &other, CreateEnvironmentEC2Request * const q)
    : Cloud9RequestPrivate(other, q)
{

}

} // namespace Cloud9
} // namespace QtAws
