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

#include "gettranscriptionjobrequest.h"
#include "gettranscriptionjobrequest_p.h"
#include "gettranscriptionjobresponse.h"
#include "transcribeservicerequest_p.h"

namespace AWS {
namespace TranscribeService {

/**
 * @class  GetTranscriptionJobRequest
 *
 * @brief  Implements TranscribeService GetTranscriptionJob requests.
 *
 * @see    TranscribeServiceClient::getTranscriptionJob
 */

/**
 * @brief  Constructs a new GetTranscriptionJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTranscriptionJobResponse::GetTranscriptionJobResponse(

/**
 * @brief  Constructs a new GetTranscriptionJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTranscriptionJobRequest::GetTranscriptionJobRequest(const GetTranscriptionJobRequest &other)
    : TranscribeServiceRequest(new GetTranscriptionJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTranscriptionJobRequest object.
 */
GetTranscriptionJobRequest::GetTranscriptionJobRequest()
    : TranscribeServiceRequest(new GetTranscriptionJobRequestPrivate(TranscribeServiceRequest::GetTranscriptionJobAction, this))
{

}

bool GetTranscriptionJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTranscriptionJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTranscriptionJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  TranscribeServiceClient::send
 */
AwsAbstractResponse * GetTranscriptionJobRequest::response(QNetworkReply * const reply) const
{
    return new GetTranscriptionJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTranscriptionJobRequestPrivate
 *
 * @brief  Private implementation for GetTranscriptionJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTranscriptionJobRequestPrivate object.
 *
 * @param  action  TranscribeService action being performed.
 * @param  q       Pointer to this object's public GetTranscriptionJobRequest instance.
 */
GetTranscriptionJobRequestPrivate::GetTranscriptionJobRequestPrivate(
    const TranscribeServiceRequest::Action action, GetTranscriptionJobRequest * const q)
    : GetTranscriptionJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTranscriptionJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTranscriptionJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTranscriptionJobRequest instance.
 */
GetTranscriptionJobRequestPrivate::GetTranscriptionJobRequestPrivate(
    const GetTranscriptionJobRequestPrivate &other, GetTranscriptionJobRequest * const q)
    : GetTranscriptionJobPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace AWS
