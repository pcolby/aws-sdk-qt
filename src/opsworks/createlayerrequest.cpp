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

#include "createlayerrequest.h"
#include "createlayerrequest_p.h"
#include "createlayerresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  CreateLayerRequest
 *
 * @brief  Implements OpsWorks CreateLayer requests.
 *
 * @see    OpsWorksClient::createLayer
 */

/**
 * @brief  Constructs a new CreateLayerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLayerRequest::CreateLayerRequest(const CreateLayerRequest &other)
    : OpsWorksRequest(new CreateLayerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLayerRequest object.
 */
CreateLayerRequest::CreateLayerRequest()
    : OpsWorksRequest(new CreateLayerRequestPrivate(OpsWorksRequest::CreateLayerAction, this))
{

}

bool CreateLayerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLayerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLayerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLayerRequest::response(QNetworkReply * const reply) const
{
    return new CreateLayerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLayerRequestPrivate
 *
 * @brief  Private implementation for CreateLayerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLayerRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public CreateLayerRequest instance.
 */
CreateLayerRequestPrivate::CreateLayerRequestPrivate(
    const OpsWorksRequest::Action action, CreateLayerRequest * const q)
    : OpsWorksRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLayerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLayerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLayerRequest instance.
 */
CreateLayerRequestPrivate::CreateLayerRequestPrivate(
    const CreateLayerRequestPrivate &other, CreateLayerRequest * const q)
    : OpsWorksRequestPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
