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

#include "getjobrunsrequest.h"
#include "getjobrunsrequest_p.h"
#include "getjobrunsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  GetJobRunsRequest
 *
 * @brief  Implements Glue GetJobRuns requests.
 *
 * @see    GlueClient::getJobRuns
 */

/**
 * @brief  Constructs a new GetJobRunsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetJobRunsRequest::GetJobRunsRequest(const GetJobRunsRequest &other)
    : GlueRequest(new GetJobRunsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetJobRunsRequest object.
 */
GetJobRunsRequest::GetJobRunsRequest()
    : GlueRequest(new GetJobRunsRequestPrivate(GlueRequest::GetJobRunsAction, this))
{

}

bool GetJobRunsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetJobRunsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetJobRunsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobRunsRequest::response(QNetworkReply * const reply) const
{
    return new GetJobRunsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetJobRunsRequestPrivate
 *
 * @brief  Private implementation for GetJobRunsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobRunsRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetJobRunsRequest instance.
 */
GetJobRunsRequestPrivate::GetJobRunsRequestPrivate(
    const GlueRequest::Action action, GetJobRunsRequest * const q)
    : GetJobRunsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetJobRunsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetJobRunsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetJobRunsRequest instance.
 */
GetJobRunsRequestPrivate::GetJobRunsRequestPrivate(
    const GetJobRunsRequestPrivate &other, GetJobRunsRequest * const q)
    : GetJobRunsPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
