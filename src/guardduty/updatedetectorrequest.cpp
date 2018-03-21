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

#include "updatedetectorrequest.h"
#include "updatedetectorrequest_p.h"
#include "updatedetectorresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  UpdateDetectorRequest
 *
 * @brief  Implements GuardDuty UpdateDetector requests.
 *
 * @see    GuardDutyClient::updateDetector
 */

/**
 * @brief  Constructs a new UpdateDetectorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDetectorResponse::UpdateDetectorResponse(

/**
 * @brief  Constructs a new UpdateDetectorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDetectorRequest::UpdateDetectorRequest(const UpdateDetectorRequest &other)
    : GuardDutyRequest(new UpdateDetectorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDetectorRequest object.
 */
UpdateDetectorRequest::UpdateDetectorRequest()
    : GuardDutyRequest(new UpdateDetectorRequestPrivate(GuardDutyRequest::UpdateDetectorAction, this))
{

}

bool UpdateDetectorRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDetectorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDetectorResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * UpdateDetectorRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDetectorResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDetectorRequestPrivate
 *
 * @brief  Private implementation for UpdateDetectorRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDetectorRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public UpdateDetectorRequest instance.
 */
UpdateDetectorRequestPrivate::UpdateDetectorRequestPrivate(
    const GuardDutyRequest::Action action, UpdateDetectorRequest * const q)
    : UpdateDetectorPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDetectorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDetectorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDetectorRequest instance.
 */
UpdateDetectorRequestPrivate::UpdateDetectorRequestPrivate(
    const UpdateDetectorRequestPrivate &other, UpdateDetectorRequest * const q)
    : UpdateDetectorPrivate(other, q)
{

}
