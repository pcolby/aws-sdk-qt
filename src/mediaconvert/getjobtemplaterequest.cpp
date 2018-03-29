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

#include "getjobtemplaterequest.h"
#include "getjobtemplaterequest_p.h"
#include "getjobtemplateresponse.h"
#include "mediaconvertrequest_p.h"

namespace AWS {
namespace MediaConvert {

/**
 * @class  GetJobTemplateRequest
 *
 * @brief  Implements MediaConvert GetJobTemplate requests.
 *
 * @see    MediaConvertClient::getJobTemplate
 */

/**
 * @brief  Constructs a new GetJobTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetJobTemplateRequest::GetJobTemplateRequest(const GetJobTemplateRequest &other)
    : MediaConvertRequest(new GetJobTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetJobTemplateRequest object.
 */
GetJobTemplateRequest::GetJobTemplateRequest()
    : MediaConvertRequest(new GetJobTemplateRequestPrivate(MediaConvertRequest::GetJobTemplateAction, this))
{

}

bool GetJobTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetJobTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetJobTemplateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
AwsAbstractResponse * GetJobTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetJobTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetJobTemplateRequestPrivate
 *
 * @brief  Private implementation for GetJobTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobTemplateRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public GetJobTemplateRequest instance.
 */
GetJobTemplateRequestPrivate::GetJobTemplateRequestPrivate(
    const MediaConvertRequest::Action action, GetJobTemplateRequest * const q)
    : GetJobTemplatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetJobTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetJobTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetJobTemplateRequest instance.
 */
GetJobTemplateRequestPrivate::GetJobTemplateRequestPrivate(
    const GetJobTemplateRequestPrivate &other, GetJobTemplateRequest * const q)
    : GetJobTemplatePrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace AWS
