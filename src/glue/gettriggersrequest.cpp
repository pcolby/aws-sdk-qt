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

#include "gettriggersrequest.h"
#include "gettriggersrequest_p.h"
#include "gettriggersresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  GetTriggersRequest
 *
 * @brief  Implements Glue GetTriggers requests.
 *
 * @see    GlueClient::getTriggers
 */

/**
 * @brief  Constructs a new GetTriggersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTriggersRequest::GetTriggersRequest(const GetTriggersRequest &other)
    : GlueRequest(new GetTriggersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTriggersRequest object.
 */
GetTriggersRequest::GetTriggersRequest()
    : GlueRequest(new GetTriggersRequestPrivate(GlueRequest::GetTriggersAction, this))
{

}

bool GetTriggersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTriggersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTriggersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTriggersRequest::response(QNetworkReply * const reply) const
{
    return new GetTriggersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTriggersRequestPrivate
 *
 * @brief  Private implementation for GetTriggersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTriggersRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetTriggersRequest instance.
 */
GetTriggersRequestPrivate::GetTriggersRequestPrivate(
    const GlueRequest::Action action, GetTriggersRequest * const q)
    : GetTriggersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTriggersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTriggersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTriggersRequest instance.
 */
GetTriggersRequestPrivate::GetTriggersRequestPrivate(
    const GetTriggersRequestPrivate &other, GetTriggersRequest * const q)
    : GetTriggersPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
