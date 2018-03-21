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

#include "getjobrequest.h"
#include "getjobrequest_p.h"
#include "getjobresponse.h"
#include "mediaconvertrequest_p.h"

namespace AWS {
namespace MediaConvert {

/**
 * @class  GetJobRequest
 *
 * @brief  Implements MediaConvert GetJob requests.
 *
 * @see    MediaConvertClient::getJob
 */

/**
 * @brief  Constructs a new GetJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobResponse::GetJobResponse(

/**
 * @brief  Constructs a new GetJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetJobRequest::GetJobRequest(const GetJobRequest &other)
    : MediaConvertRequest(new GetJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetJobRequest object.
 */
GetJobRequest::GetJobRequest()
    : MediaConvertRequest(new GetJobRequestPrivate(MediaConvertRequest::GetJobAction, this))
{

}

bool GetJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
AwsAbstractResponse * GetJobRequest::response(QNetworkReply * const reply) const
{
    return new GetJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetJobRequestPrivate
 *
 * @brief  Private implementation for GetJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public GetJobRequest instance.
 */
GetJobRequestPrivate::GetJobRequestPrivate(
    const MediaConvertRequest::Action action, GetJobRequest * const q)
    : GetJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetJobRequest instance.
 */
GetJobRequestPrivate::GetJobRequestPrivate(
    const GetJobRequestPrivate &other, GetJobRequest * const q)
    : GetJobPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace AWS
