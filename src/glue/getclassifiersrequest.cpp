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

#include "getclassifiersrequest.h"
#include "getclassifiersrequest_p.h"
#include "getclassifiersresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  GetClassifiersRequest
 *
 * @brief  Implements Glue GetClassifiers requests.
 *
 * @see    GlueClient::getClassifiers
 */

/**
 * @brief  Constructs a new GetClassifiersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetClassifiersRequest::GetClassifiersRequest(const GetClassifiersRequest &other)
    : GlueRequest(new GetClassifiersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetClassifiersRequest object.
 */
GetClassifiersRequest::GetClassifiersRequest()
    : GlueRequest(new GetClassifiersRequestPrivate(GlueRequest::GetClassifiersAction, this))
{

}

bool GetClassifiersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetClassifiersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetClassifiersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetClassifiersRequest::response(QNetworkReply * const reply) const
{
    return new GetClassifiersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetClassifiersRequestPrivate
 *
 * @brief  Private implementation for GetClassifiersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetClassifiersRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetClassifiersRequest instance.
 */
GetClassifiersRequestPrivate::GetClassifiersRequestPrivate(
    const GlueRequest::Action action, GetClassifiersRequest * const q)
    : GetClassifiersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetClassifiersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetClassifiersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetClassifiersRequest instance.
 */
GetClassifiersRequestPrivate::GetClassifiersRequestPrivate(
    const GetClassifiersRequestPrivate &other, GetClassifiersRequest * const q)
    : GetClassifiersPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
