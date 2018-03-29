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

#include "getdatabaserequest.h"
#include "getdatabaserequest_p.h"
#include "getdatabaseresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  GetDatabaseRequest
 *
 * @brief  Implements Glue GetDatabase requests.
 *
 * @see    GlueClient::getDatabase
 */

/**
 * @brief  Constructs a new GetDatabaseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDatabaseRequest::GetDatabaseRequest(const GetDatabaseRequest &other)
    : GlueRequest(new GetDatabaseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDatabaseRequest object.
 */
GetDatabaseRequest::GetDatabaseRequest()
    : GlueRequest(new GetDatabaseRequestPrivate(GlueRequest::GetDatabaseAction, this))
{

}

bool GetDatabaseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDatabaseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDatabaseResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDatabaseRequest::response(QNetworkReply * const reply) const
{
    return new GetDatabaseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDatabaseRequestPrivate
 *
 * @brief  Private implementation for GetDatabaseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDatabaseRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetDatabaseRequest instance.
 */
GetDatabaseRequestPrivate::GetDatabaseRequestPrivate(
    const GlueRequest::Action action, GetDatabaseRequest * const q)
    : GetDatabasePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDatabaseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDatabaseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDatabaseRequest instance.
 */
GetDatabaseRequestPrivate::GetDatabaseRequestPrivate(
    const GetDatabaseRequestPrivate &other, GetDatabaseRequest * const q)
    : GetDatabasePrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
