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

#include "startondemandreplicationrunrequest.h"
#include "startondemandreplicationrunrequest_p.h"
#include "startondemandreplicationrunresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/**
 * @class  StartOnDemandReplicationRunRequest
 *
 * @brief  Implements SMS StartOnDemandReplicationRun requests.
 *
 * @see    SMSClient::startOnDemandReplicationRun
 */

/**
 * @brief  Constructs a new StartOnDemandReplicationRunRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartOnDemandReplicationRunRequest::StartOnDemandReplicationRunRequest(const StartOnDemandReplicationRunRequest &other)
    : SMSRequest(new StartOnDemandReplicationRunRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartOnDemandReplicationRunRequest object.
 */
StartOnDemandReplicationRunRequest::StartOnDemandReplicationRunRequest()
    : SMSRequest(new StartOnDemandReplicationRunRequestPrivate(SMSRequest::StartOnDemandReplicationRunAction, this))
{

}

bool StartOnDemandReplicationRunRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartOnDemandReplicationRunResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartOnDemandReplicationRunResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SMSClient::send
 */
QtAws::Core::AwsAbstractResponse * StartOnDemandReplicationRunRequest::response(QNetworkReply * const reply) const
{
    return new StartOnDemandReplicationRunResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartOnDemandReplicationRunRequestPrivate
 *
 * @brief  Private implementation for StartOnDemandReplicationRunRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartOnDemandReplicationRunRequestPrivate object.
 *
 * @param  action  SMS action being performed.
 * @param  q       Pointer to this object's public StartOnDemandReplicationRunRequest instance.
 */
StartOnDemandReplicationRunRequestPrivate::StartOnDemandReplicationRunRequestPrivate(
    const SMSRequest::Action action, StartOnDemandReplicationRunRequest * const q)
    : SMSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartOnDemandReplicationRunRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartOnDemandReplicationRunRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartOnDemandReplicationRunRequest instance.
 */
StartOnDemandReplicationRunRequestPrivate::StartOnDemandReplicationRunRequestPrivate(
    const StartOnDemandReplicationRunRequestPrivate &other, StartOnDemandReplicationRunRequest * const q)
    : SMSRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
