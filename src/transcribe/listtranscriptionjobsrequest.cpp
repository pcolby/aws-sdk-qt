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

#include "listtranscriptionjobsrequest.h"
#include "listtranscriptionjobsrequest_p.h"
#include "listtranscriptionjobsresponse.h"
#include "transcribeservicerequest_p.h"

namespace AWS {
namespace TranscribeService {

/**
 * @class  ListTranscriptionJobsRequest
 *
 * @brief  Implements TranscribeService ListTranscriptionJobs requests.
 *
 * @see    TranscribeServiceClient::listTranscriptionJobs
 */

/**
 * @brief  Constructs a new ListTranscriptionJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTranscriptionJobsResponse::ListTranscriptionJobsResponse(

/**
 * @brief  Constructs a new ListTranscriptionJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTranscriptionJobsRequest::ListTranscriptionJobsRequest(const ListTranscriptionJobsRequest &other)
    : TranscribeServiceRequest(new ListTranscriptionJobsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTranscriptionJobsRequest object.
 */
ListTranscriptionJobsRequest::ListTranscriptionJobsRequest()
    : TranscribeServiceRequest(new ListTranscriptionJobsRequestPrivate(TranscribeServiceRequest::ListTranscriptionJobsAction, this))
{

}

bool ListTranscriptionJobsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTranscriptionJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTranscriptionJobsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  TranscribeServiceClient::send
 */
AwsAbstractResponse * ListTranscriptionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListTranscriptionJobsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTranscriptionJobsRequestPrivate
 *
 * @brief  Private implementation for ListTranscriptionJobsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTranscriptionJobsRequestPrivate object.
 *
 * @param  action  TranscribeService action being performed.
 * @param  q       Pointer to this object's public ListTranscriptionJobsRequest instance.
 */
ListTranscriptionJobsRequestPrivate::ListTranscriptionJobsRequestPrivate(
    const TranscribeServiceRequest::Action action, ListTranscriptionJobsRequest * const q)
    : ListTranscriptionJobsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTranscriptionJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTranscriptionJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTranscriptionJobsRequest instance.
 */
ListTranscriptionJobsRequestPrivate::ListTranscriptionJobsRequestPrivate(
    const ListTranscriptionJobsRequestPrivate &other, ListTranscriptionJobsRequest * const q)
    : ListTranscriptionJobsPrivate(other, q)
{

}

} // namespace TranscribeService
} // namespace AWS
