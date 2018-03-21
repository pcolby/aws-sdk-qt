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

#include "putconfigurationrecorderrequest.h"
#include "putconfigurationrecorderrequest_p.h"
#include "putconfigurationrecorderresponse.h"
#include "configservicerequest_p.h"

namespace AWS {
namespace ConfigService {

/**
 * @class  PutConfigurationRecorderRequest
 *
 * @brief  Implements ConfigService PutConfigurationRecorder requests.
 *
 * @see    ConfigServiceClient::putConfigurationRecorder
 */

/**
 * @brief  Constructs a new PutConfigurationRecorderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutConfigurationRecorderResponse::PutConfigurationRecorderResponse(

/**
 * @brief  Constructs a new PutConfigurationRecorderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutConfigurationRecorderRequest::PutConfigurationRecorderRequest(const PutConfigurationRecorderRequest &other)
    : ConfigServiceRequest(new PutConfigurationRecorderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutConfigurationRecorderRequest object.
 */
PutConfigurationRecorderRequest::PutConfigurationRecorderRequest()
    : ConfigServiceRequest(new PutConfigurationRecorderRequestPrivate(ConfigServiceRequest::PutConfigurationRecorderAction, this))
{

}

bool PutConfigurationRecorderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutConfigurationRecorderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutConfigurationRecorderResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * PutConfigurationRecorderRequest::response(QNetworkReply * const reply) const
{
    return new PutConfigurationRecorderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutConfigurationRecorderRequestPrivate
 *
 * @brief  Private implementation for PutConfigurationRecorderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutConfigurationRecorderRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public PutConfigurationRecorderRequest instance.
 */
PutConfigurationRecorderRequestPrivate::PutConfigurationRecorderRequestPrivate(
    const ConfigServiceRequest::Action action, PutConfigurationRecorderRequest * const q)
    : PutConfigurationRecorderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutConfigurationRecorderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutConfigurationRecorderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutConfigurationRecorderRequest instance.
 */
PutConfigurationRecorderRequestPrivate::PutConfigurationRecorderRequestPrivate(
    const PutConfigurationRecorderRequestPrivate &other, PutConfigurationRecorderRequest * const q)
    : PutConfigurationRecorderPrivate(other, q)
{

}
