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

#include "createbackuprequest.h"
#include "createbackuprequest_p.h"
#include "createbackupresponse.h"
#include "opsworkscmrequest_p.h"

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  CreateBackupRequest
 *
 * @brief  Implements OpsWorksCM CreateBackup requests.
 *
 * @see    OpsWorksCMClient::createBackup
 */

/**
 * @brief  Constructs a new CreateBackupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateBackupResponse::CreateBackupResponse(

/**
 * @brief  Constructs a new CreateBackupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateBackupRequest::CreateBackupRequest(const CreateBackupRequest &other)
    : OpsWorksCMRequest(new CreateBackupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateBackupRequest object.
 */
CreateBackupRequest::CreateBackupRequest()
    : OpsWorksCMRequest(new CreateBackupRequestPrivate(OpsWorksCMRequest::CreateBackupAction, this))
{

}

bool CreateBackupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateBackupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateBackupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksCMClient::send
 */
AwsAbstractResponse * CreateBackupRequest::response(QNetworkReply * const reply) const
{
    return new CreateBackupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateBackupRequestPrivate
 *
 * @brief  Private implementation for CreateBackupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBackupRequestPrivate object.
 *
 * @param  action  OpsWorksCM action being performed.
 * @param  q       Pointer to this object's public CreateBackupRequest instance.
 */
CreateBackupRequestPrivate::CreateBackupRequestPrivate(
    const OpsWorksCMRequest::Action action, CreateBackupRequest * const q)
    : CreateBackupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateBackupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateBackupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateBackupRequest instance.
 */
CreateBackupRequestPrivate::CreateBackupRequestPrivate(
    const CreateBackupRequestPrivate &other, CreateBackupRequest * const q)
    : CreateBackupPrivate(other, q)
{

}
