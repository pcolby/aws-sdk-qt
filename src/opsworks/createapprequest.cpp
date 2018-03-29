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

#include "createapprequest.h"
#include "createapprequest_p.h"
#include "createappresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  CreateAppRequest
 *
 * @brief  Implements OpsWorks CreateApp requests.
 *
 * @see    OpsWorksClient::createApp
 */

/**
 * @brief  Constructs a new CreateAppRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateAppRequest::CreateAppRequest(const CreateAppRequest &other)
    : OpsWorksRequest(new CreateAppRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateAppRequest object.
 */
CreateAppRequest::CreateAppRequest()
    : OpsWorksRequest(new CreateAppRequestPrivate(OpsWorksRequest::CreateAppAction, this))
{

}

bool CreateAppRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateAppResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateAppResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * CreateAppRequest::response(QNetworkReply * const reply) const
{
    return new CreateAppResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateAppRequestPrivate
 *
 * @brief  Private implementation for CreateAppRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAppRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public CreateAppRequest instance.
 */
CreateAppRequestPrivate::CreateAppRequestPrivate(
    const OpsWorksRequest::Action action, CreateAppRequest * const q)
    : CreateAppPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateAppRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateAppRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateAppRequest instance.
 */
CreateAppRequestPrivate::CreateAppRequestPrivate(
    const CreateAppRequestPrivate &other, CreateAppRequest * const q)
    : CreateAppPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
