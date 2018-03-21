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

#include "resetjobbookmarkrequest.h"
#include "resetjobbookmarkrequest_p.h"
#include "resetjobbookmarkresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  ResetJobBookmarkRequest
 *
 * @brief  Implements Glue ResetJobBookmark requests.
 *
 * @see    GlueClient::resetJobBookmark
 */

/**
 * @brief  Constructs a new ResetJobBookmarkResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetJobBookmarkResponse::ResetJobBookmarkResponse(

/**
 * @brief  Constructs a new ResetJobBookmarkRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResetJobBookmarkRequest::ResetJobBookmarkRequest(const ResetJobBookmarkRequest &other)
    : GlueRequest(new ResetJobBookmarkRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResetJobBookmarkRequest object.
 */
ResetJobBookmarkRequest::ResetJobBookmarkRequest()
    : GlueRequest(new ResetJobBookmarkRequestPrivate(GlueRequest::ResetJobBookmarkAction, this))
{

}

bool ResetJobBookmarkRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResetJobBookmarkResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResetJobBookmarkResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * ResetJobBookmarkRequest::response(QNetworkReply * const reply) const
{
    return new ResetJobBookmarkResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResetJobBookmarkRequestPrivate
 *
 * @brief  Private implementation for ResetJobBookmarkRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetJobBookmarkRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public ResetJobBookmarkRequest instance.
 */
ResetJobBookmarkRequestPrivate::ResetJobBookmarkRequestPrivate(
    const GlueRequest::Action action, ResetJobBookmarkRequest * const q)
    : ResetJobBookmarkPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResetJobBookmarkRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResetJobBookmarkRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResetJobBookmarkRequest instance.
 */
ResetJobBookmarkRequestPrivate::ResetJobBookmarkRequestPrivate(
    const ResetJobBookmarkRequestPrivate &other, ResetJobBookmarkRequest * const q)
    : ResetJobBookmarkPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
