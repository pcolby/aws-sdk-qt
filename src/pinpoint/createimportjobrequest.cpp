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

#include "createimportjobrequest.h"
#include "createimportjobrequest_p.h"
#include "createimportjobresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  CreateImportJobRequest
 *
 * @brief  Implements Pinpoint CreateImportJob requests.
 *
 * @see    PinpointClient::createImportJob
 */

/**
 * @brief  Constructs a new CreateImportJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateImportJobRequest::CreateImportJobRequest(const CreateImportJobRequest &other)
    : PinpointRequest(new CreateImportJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateImportJobRequest object.
 */
CreateImportJobRequest::CreateImportJobRequest()
    : PinpointRequest(new CreateImportJobRequestPrivate(PinpointRequest::CreateImportJobAction, this))
{

}

bool CreateImportJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateImportJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateImportJobResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateImportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateImportJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateImportJobRequestPrivate
 *
 * @brief  Private implementation for CreateImportJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateImportJobRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public CreateImportJobRequest instance.
 */
CreateImportJobRequestPrivate::CreateImportJobRequestPrivate(
    const PinpointRequest::Action action, CreateImportJobRequest * const q)
    : CreateImportJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateImportJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateImportJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateImportJobRequest instance.
 */
CreateImportJobRequestPrivate::CreateImportJobRequestPrivate(
    const CreateImportJobRequestPrivate &other, CreateImportJobRequest * const q)
    : CreateImportJobPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
