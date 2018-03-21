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

#include "createreplicationjobrequest.h"
#include "createreplicationjobrequest_p.h"
#include "createreplicationjobresponse.h"
#include "smsrequest_p.h"

namespace AWS {
namespace SMS {

/**
 * @class  CreateReplicationJobRequest
 *
 * @brief  Implements SMS CreateReplicationJob requests.
 *
 * @see    SMSClient::createReplicationJob
 */

/**
 * @brief  Constructs a new CreateReplicationJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateReplicationJobRequest::CreateReplicationJobRequest(const CreateReplicationJobRequest &other)
    : SMSRequest(new CreateReplicationJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateReplicationJobRequest object.
 */
CreateReplicationJobRequest::CreateReplicationJobRequest()
    : SMSRequest(new CreateReplicationJobRequestPrivate(SMSRequest::CreateReplicationJobAction, this))
{

}

bool CreateReplicationJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateReplicationJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateReplicationJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SMSClient::send
 */
AwsAbstractResponse * CreateReplicationJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateReplicationJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateReplicationJobRequestPrivate
 *
 * @brief  Private implementation for CreateReplicationJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReplicationJobRequestPrivate object.
 *
 * @param  action  SMS action being performed.
 * @param  q       Pointer to this object's public CreateReplicationJobRequest instance.
 */
CreateReplicationJobRequestPrivate::CreateReplicationJobRequestPrivate(
    const SMSRequest::Action action, CreateReplicationJobRequest * const q)
    : CreateReplicationJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateReplicationJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateReplicationJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateReplicationJobRequest instance.
 */
CreateReplicationJobRequestPrivate::CreateReplicationJobRequestPrivate(
    const CreateReplicationJobRequestPrivate &other, CreateReplicationJobRequest * const q)
    : CreateReplicationJobPrivate(other, q)
{

}

} // namespace SMS
} // namespace AWS
