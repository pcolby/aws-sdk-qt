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

#include "getjoboutputrequest.h"
#include "getjoboutputrequest_p.h"
#include "getjoboutputresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  GetJobOutputRequest
 *
 * @brief  Implements Glacier GetJobOutput requests.
 *
 * @see    GlacierClient::getJobOutput
 */

/**
 * @brief  Constructs a new GetJobOutputRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetJobOutputRequest::GetJobOutputRequest(const GetJobOutputRequest &other)
    : GlacierRequest(new GetJobOutputRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetJobOutputRequest object.
 */
GetJobOutputRequest::GetJobOutputRequest()
    : GlacierRequest(new GetJobOutputRequestPrivate(GlacierRequest::GetJobOutputAction, this))
{

}

bool GetJobOutputRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetJobOutputResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetJobOutputResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * GetJobOutputRequest::response(QNetworkReply * const reply) const
{
    return new GetJobOutputResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetJobOutputRequestPrivate
 *
 * @brief  Private implementation for GetJobOutputRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobOutputRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public GetJobOutputRequest instance.
 */
GetJobOutputRequestPrivate::GetJobOutputRequestPrivate(
    const GlacierRequest::Action action, GetJobOutputRequest * const q)
    : GetJobOutputPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetJobOutputRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetJobOutputRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetJobOutputRequest instance.
 */
GetJobOutputRequestPrivate::GetJobOutputRequestPrivate(
    const GetJobOutputRequestPrivate &other, GetJobOutputRequest * const q)
    : GetJobOutputPrivate(other, q)
{

}

} // namespace Glacier
} // namespace AWS
