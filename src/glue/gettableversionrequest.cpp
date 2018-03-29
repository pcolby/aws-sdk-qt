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

#include "gettableversionrequest.h"
#include "gettableversionrequest_p.h"
#include "gettableversionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  GetTableVersionRequest
 *
 * @brief  Implements Glue GetTableVersion requests.
 *
 * @see    GlueClient::getTableVersion
 */

/**
 * @brief  Constructs a new GetTableVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTableVersionRequest::GetTableVersionRequest(const GetTableVersionRequest &other)
    : GlueRequest(new GetTableVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTableVersionRequest object.
 */
GetTableVersionRequest::GetTableVersionRequest()
    : GlueRequest(new GetTableVersionRequestPrivate(GlueRequest::GetTableVersionAction, this))
{

}

bool GetTableVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTableVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTableVersionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTableVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetTableVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTableVersionRequestPrivate
 *
 * @brief  Private implementation for GetTableVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTableVersionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetTableVersionRequest instance.
 */
GetTableVersionRequestPrivate::GetTableVersionRequestPrivate(
    const GlueRequest::Action action, GetTableVersionRequest * const q)
    : GetTableVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTableVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTableVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTableVersionRequest instance.
 */
GetTableVersionRequestPrivate::GetTableVersionRequestPrivate(
    const GetTableVersionRequestPrivate &other, GetTableVersionRequest * const q)
    : GetTableVersionPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
