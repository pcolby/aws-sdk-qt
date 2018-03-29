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

#include "getplanrequest.h"
#include "getplanrequest_p.h"
#include "getplanresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  GetPlanRequest
 *
 * @brief  Implements Glue GetPlan requests.
 *
 * @see    GlueClient::getPlan
 */

/**
 * @brief  Constructs a new GetPlanRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPlanRequest::GetPlanRequest(const GetPlanRequest &other)
    : GlueRequest(new GetPlanRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPlanRequest object.
 */
GetPlanRequest::GetPlanRequest()
    : GlueRequest(new GetPlanRequestPrivate(GlueRequest::GetPlanAction, this))
{

}

bool GetPlanRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPlanResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPlanResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetPlanRequest::response(QNetworkReply * const reply) const
{
    return new GetPlanResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPlanRequestPrivate
 *
 * @brief  Private implementation for GetPlanRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPlanRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetPlanRequest instance.
 */
GetPlanRequestPrivate::GetPlanRequestPrivate(
    const GlueRequest::Action action, GetPlanRequest * const q)
    : GetPlanPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPlanRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPlanRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPlanRequest instance.
 */
GetPlanRequestPrivate::GetPlanRequestPrivate(
    const GetPlanRequestPrivate &other, GetPlanRequest * const q)
    : GetPlanPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
