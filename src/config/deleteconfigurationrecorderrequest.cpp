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

#include "deleteconfigurationrecorderrequest.h"
#include "deleteconfigurationrecorderrequest_p.h"
#include "deleteconfigurationrecorderresponse.h"
#include "configservicerequest_p.h"

namespace AWS {
namespace ConfigService {

/**
 * @class  DeleteConfigurationRecorderRequest
 *
 * @brief  Implements ConfigService DeleteConfigurationRecorder requests.
 *
 * @see    ConfigServiceClient::deleteConfigurationRecorder
 */

/**
 * @brief  Constructs a new DeleteConfigurationRecorderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteConfigurationRecorderResponse::DeleteConfigurationRecorderResponse(

/**
 * @brief  Constructs a new DeleteConfigurationRecorderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteConfigurationRecorderRequest::DeleteConfigurationRecorderRequest(const DeleteConfigurationRecorderRequest &other)
    : ConfigServiceRequest(new DeleteConfigurationRecorderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteConfigurationRecorderRequest object.
 */
DeleteConfigurationRecorderRequest::DeleteConfigurationRecorderRequest()
    : ConfigServiceRequest(new DeleteConfigurationRecorderRequestPrivate(ConfigServiceRequest::DeleteConfigurationRecorderAction, this))
{

}

bool DeleteConfigurationRecorderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteConfigurationRecorderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteConfigurationRecorderResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * DeleteConfigurationRecorderRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConfigurationRecorderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteConfigurationRecorderRequestPrivate
 *
 * @brief  Private implementation for DeleteConfigurationRecorderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationRecorderRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DeleteConfigurationRecorderRequest instance.
 */
DeleteConfigurationRecorderRequestPrivate::DeleteConfigurationRecorderRequestPrivate(
    const ConfigServiceRequest::Action action, DeleteConfigurationRecorderRequest * const q)
    : DeleteConfigurationRecorderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationRecorderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteConfigurationRecorderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteConfigurationRecorderRequest instance.
 */
DeleteConfigurationRecorderRequestPrivate::DeleteConfigurationRecorderRequestPrivate(
    const DeleteConfigurationRecorderRequestPrivate &other, DeleteConfigurationRecorderRequest * const q)
    : DeleteConfigurationRecorderPrivate(other, q)
{

}
