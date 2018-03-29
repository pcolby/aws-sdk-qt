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

#include "associatetargetswithjobrequest.h"
#include "associatetargetswithjobrequest_p.h"
#include "associatetargetswithjobresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  AssociateTargetsWithJobRequest
 *
 * @brief  Implements IoT AssociateTargetsWithJob requests.
 *
 * @see    IoTClient::associateTargetsWithJob
 */

/**
 * @brief  Constructs a new AssociateTargetsWithJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateTargetsWithJobRequest::AssociateTargetsWithJobRequest(const AssociateTargetsWithJobRequest &other)
    : IoTRequest(new AssociateTargetsWithJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateTargetsWithJobRequest object.
 */
AssociateTargetsWithJobRequest::AssociateTargetsWithJobRequest()
    : IoTRequest(new AssociateTargetsWithJobRequestPrivate(IoTRequest::AssociateTargetsWithJobAction, this))
{

}

bool AssociateTargetsWithJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateTargetsWithJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateTargetsWithJobResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateTargetsWithJobRequest::response(QNetworkReply * const reply) const
{
    return new AssociateTargetsWithJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateTargetsWithJobRequestPrivate
 *
 * @brief  Private implementation for AssociateTargetsWithJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateTargetsWithJobRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public AssociateTargetsWithJobRequest instance.
 */
AssociateTargetsWithJobRequestPrivate::AssociateTargetsWithJobRequestPrivate(
    const IoTRequest::Action action, AssociateTargetsWithJobRequest * const q)
    : AssociateTargetsWithJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateTargetsWithJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateTargetsWithJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateTargetsWithJobRequest instance.
 */
AssociateTargetsWithJobRequestPrivate::AssociateTargetsWithJobRequestPrivate(
    const AssociateTargetsWithJobRequestPrivate &other, AssociateTargetsWithJobRequest * const q)
    : AssociateTargetsWithJobPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
