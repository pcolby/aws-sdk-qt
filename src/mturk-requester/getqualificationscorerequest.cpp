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

#include "getqualificationscorerequest.h"
#include "getqualificationscorerequest_p.h"
#include "getqualificationscoreresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  GetQualificationScoreRequest
 *
 * @brief  Implements MTurk GetQualificationScore requests.
 *
 * @see    MTurkClient::getQualificationScore
 */

/**
 * @brief  Constructs a new GetQualificationScoreResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetQualificationScoreResponse::GetQualificationScoreResponse(

/**
 * @brief  Constructs a new GetQualificationScoreRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetQualificationScoreRequest::GetQualificationScoreRequest(const GetQualificationScoreRequest &other)
    : MTurkRequest(new GetQualificationScoreRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetQualificationScoreRequest object.
 */
GetQualificationScoreRequest::GetQualificationScoreRequest()
    : MTurkRequest(new GetQualificationScoreRequestPrivate(MTurkRequest::GetQualificationScoreAction, this))
{

}

bool GetQualificationScoreRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetQualificationScoreResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetQualificationScoreResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * GetQualificationScoreRequest::response(QNetworkReply * const reply) const
{
    return new GetQualificationScoreResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetQualificationScoreRequestPrivate
 *
 * @brief  Private implementation for GetQualificationScoreRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQualificationScoreRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public GetQualificationScoreRequest instance.
 */
GetQualificationScoreRequestPrivate::GetQualificationScoreRequestPrivate(
    const MTurkRequest::Action action, GetQualificationScoreRequest * const q)
    : GetQualificationScorePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetQualificationScoreRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetQualificationScoreRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetQualificationScoreRequest instance.
 */
GetQualificationScoreRequestPrivate::GetQualificationScoreRequestPrivate(
    const GetQualificationScoreRequestPrivate &other, GetQualificationScoreRequest * const q)
    : GetQualificationScorePrivate(other, q)
{

}

} // namespace MTurk
} // namespace AWS
