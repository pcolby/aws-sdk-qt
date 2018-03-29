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

#include "createexportjobrequest.h"
#include "createexportjobrequest_p.h"
#include "createexportjobresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  CreateExportJobRequest
 *
 * @brief  Implements Pinpoint CreateExportJob requests.
 *
 * @see    PinpointClient::createExportJob
 */

/**
 * @brief  Constructs a new CreateExportJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateExportJobRequest::CreateExportJobRequest(const CreateExportJobRequest &other)
    : PinpointRequest(new CreateExportJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateExportJobRequest object.
 */
CreateExportJobRequest::CreateExportJobRequest()
    : PinpointRequest(new CreateExportJobRequestPrivate(PinpointRequest::CreateExportJobAction, this))
{

}

bool CreateExportJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateExportJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateExportJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * CreateExportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateExportJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateExportJobRequestPrivate
 *
 * @brief  Private implementation for CreateExportJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateExportJobRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public CreateExportJobRequest instance.
 */
CreateExportJobRequestPrivate::CreateExportJobRequestPrivate(
    const PinpointRequest::Action action, CreateExportJobRequest * const q)
    : CreateExportJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateExportJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateExportJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateExportJobRequest instance.
 */
CreateExportJobRequestPrivate::CreateExportJobRequestPrivate(
    const CreateExportJobRequestPrivate &other, CreateExportJobRequest * const q)
    : CreateExportJobPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
