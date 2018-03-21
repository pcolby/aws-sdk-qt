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

#include "submitjobrequest.h"
#include "submitjobrequest_p.h"
#include "submitjobresponse.h"
#include "batchrequest_p.h"

namespace AWS {
namespace Batch {

/**
 * @class  SubmitJobRequest
 *
 * @brief  Implements Batch SubmitJob requests.
 *
 * @see    BatchClient::submitJob
 */

/**
 * @brief  Constructs a new SubmitJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SubmitJobResponse::SubmitJobResponse(

/**
 * @brief  Constructs a new SubmitJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SubmitJobRequest::SubmitJobRequest(const SubmitJobRequest &other)
    : BatchRequest(new SubmitJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SubmitJobRequest object.
 */
SubmitJobRequest::SubmitJobRequest()
    : BatchRequest(new SubmitJobRequestPrivate(BatchRequest::SubmitJobAction, this))
{

}

bool SubmitJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SubmitJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SubmitJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  BatchClient::send
 */
AwsAbstractResponse * SubmitJobRequest::response(QNetworkReply * const reply) const
{
    return new SubmitJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SubmitJobRequestPrivate
 *
 * @brief  Private implementation for SubmitJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SubmitJobRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public SubmitJobRequest instance.
 */
SubmitJobRequestPrivate::SubmitJobRequestPrivate(
    const BatchRequest::Action action, SubmitJobRequest * const q)
    : SubmitJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SubmitJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SubmitJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SubmitJobRequest instance.
 */
SubmitJobRequestPrivate::SubmitJobRequestPrivate(
    const SubmitJobRequestPrivate &other, SubmitJobRequest * const q)
    : SubmitJobPrivate(other, q)
{

}
