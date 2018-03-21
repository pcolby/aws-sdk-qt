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

#include "cancelstepsrequest.h"
#include "cancelstepsrequest_p.h"
#include "cancelstepsresponse.h"
#include "emrrequest_p.h"

namespace AWS {
namespace EMR {

/**
 * @class  CancelStepsRequest
 *
 * @brief  Implements EMR CancelSteps requests.
 *
 * @see    EMRClient::cancelSteps
 */

/**
 * @brief  Constructs a new CancelStepsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelStepsResponse::CancelStepsResponse(

/**
 * @brief  Constructs a new CancelStepsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelStepsRequest::CancelStepsRequest(const CancelStepsRequest &other)
    : EMRRequest(new CancelStepsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CancelStepsRequest object.
 */
CancelStepsRequest::CancelStepsRequest()
    : EMRRequest(new CancelStepsRequestPrivate(EMRRequest::CancelStepsAction, this))
{

}

bool CancelStepsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CancelStepsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelStepsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * CancelStepsRequest::response(QNetworkReply * const reply) const
{
    return new CancelStepsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CancelStepsRequestPrivate
 *
 * @brief  Private implementation for CancelStepsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelStepsRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public CancelStepsRequest instance.
 */
CancelStepsRequestPrivate::CancelStepsRequestPrivate(
    const EMRRequest::Action action, CancelStepsRequest * const q)
    : CancelStepsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CancelStepsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelStepsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelStepsRequest instance.
 */
CancelStepsRequestPrivate::CancelStepsRequestPrivate(
    const CancelStepsRequestPrivate &other, CancelStepsRequest * const q)
    : CancelStepsPrivate(other, q)
{

}
