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

#include "getconnectionrequest.h"
#include "getconnectionrequest_p.h"
#include "getconnectionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  GetConnectionRequest
 *
 * @brief  Implements Glue GetConnection requests.
 *
 * @see    GlueClient::getConnection
 */

/**
 * @brief  Constructs a new GetConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetConnectionRequest::GetConnectionRequest(const GetConnectionRequest &other)
    : GlueRequest(new GetConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetConnectionRequest object.
 */
GetConnectionRequest::GetConnectionRequest()
    : GlueRequest(new GetConnectionRequestPrivate(GlueRequest::GetConnectionAction, this))
{

}

bool GetConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetConnectionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectionRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetConnectionRequestPrivate
 *
 * @brief  Private implementation for GetConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetConnectionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetConnectionRequest instance.
 */
GetConnectionRequestPrivate::GetConnectionRequestPrivate(
    const GlueRequest::Action action, GetConnectionRequest * const q)
    : GetConnectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetConnectionRequest instance.
 */
GetConnectionRequestPrivate::GetConnectionRequestPrivate(
    const GetConnectionRequestPrivate &other, GetConnectionRequest * const q)
    : GetConnectionPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
