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

#include "updateelasticiprequest.h"
#include "updateelasticiprequest_p.h"
#include "updateelasticipresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  UpdateElasticIpRequest
 *
 * @brief  Implements OpsWorks UpdateElasticIp requests.
 *
 * @see    OpsWorksClient::updateElasticIp
 */

/**
 * @brief  Constructs a new UpdateElasticIpRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateElasticIpRequest::UpdateElasticIpRequest(const UpdateElasticIpRequest &other)
    : OpsWorksRequest(new UpdateElasticIpRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateElasticIpRequest object.
 */
UpdateElasticIpRequest::UpdateElasticIpRequest()
    : OpsWorksRequest(new UpdateElasticIpRequestPrivate(OpsWorksRequest::UpdateElasticIpAction, this))
{

}

bool UpdateElasticIpRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateElasticIpResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateElasticIpResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * UpdateElasticIpRequest::response(QNetworkReply * const reply) const
{
    return new UpdateElasticIpResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateElasticIpRequestPrivate
 *
 * @brief  Private implementation for UpdateElasticIpRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateElasticIpRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public UpdateElasticIpRequest instance.
 */
UpdateElasticIpRequestPrivate::UpdateElasticIpRequestPrivate(
    const OpsWorksRequest::Action action, UpdateElasticIpRequest * const q)
    : UpdateElasticIpPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateElasticIpRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateElasticIpRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateElasticIpRequest instance.
 */
UpdateElasticIpRequestPrivate::UpdateElasticIpRequestPrivate(
    const UpdateElasticIpRequestPrivate &other, UpdateElasticIpRequest * const q)
    : UpdateElasticIpPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
