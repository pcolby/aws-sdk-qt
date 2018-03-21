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

#include "createsoftwareupdatejobrequest.h"
#include "createsoftwareupdatejobrequest_p.h"
#include "createsoftwareupdatejobresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateSoftwareUpdateJobRequest
 *
 * @brief  Implements Greengrass CreateSoftwareUpdateJob requests.
 *
 * @see    GreengrassClient::createSoftwareUpdateJob
 */

/**
 * @brief  Constructs a new CreateSoftwareUpdateJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSoftwareUpdateJobRequest::CreateSoftwareUpdateJobRequest(const CreateSoftwareUpdateJobRequest &other)
    : GreengrassRequest(new CreateSoftwareUpdateJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSoftwareUpdateJobRequest object.
 */
CreateSoftwareUpdateJobRequest::CreateSoftwareUpdateJobRequest()
    : GreengrassRequest(new CreateSoftwareUpdateJobRequestPrivate(GreengrassRequest::CreateSoftwareUpdateJobAction, this))
{

}

bool CreateSoftwareUpdateJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSoftwareUpdateJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSoftwareUpdateJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * CreateSoftwareUpdateJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateSoftwareUpdateJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSoftwareUpdateJobRequestPrivate
 *
 * @brief  Private implementation for CreateSoftwareUpdateJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSoftwareUpdateJobRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateSoftwareUpdateJobRequest instance.
 */
CreateSoftwareUpdateJobRequestPrivate::CreateSoftwareUpdateJobRequestPrivate(
    const GreengrassRequest::Action action, CreateSoftwareUpdateJobRequest * const q)
    : CreateSoftwareUpdateJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSoftwareUpdateJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSoftwareUpdateJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSoftwareUpdateJobRequest instance.
 */
CreateSoftwareUpdateJobRequestPrivate::CreateSoftwareUpdateJobRequestPrivate(
    const CreateSoftwareUpdateJobRequestPrivate &other, CreateSoftwareUpdateJobRequest * const q)
    : CreateSoftwareUpdateJobPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
