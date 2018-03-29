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

#include "gettablerequest.h"
#include "gettablerequest_p.h"
#include "gettableresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  GetTableRequest
 *
 * @brief  Implements Glue GetTable requests.
 *
 * @see    GlueClient::getTable
 */

/**
 * @brief  Constructs a new GetTableRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTableRequest::GetTableRequest(const GetTableRequest &other)
    : GlueRequest(new GetTableRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTableRequest object.
 */
GetTableRequest::GetTableRequest()
    : GlueRequest(new GetTableRequestPrivate(GlueRequest::GetTableAction, this))
{

}

bool GetTableRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTableResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTableResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTableRequest::response(QNetworkReply * const reply) const
{
    return new GetTableResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTableRequestPrivate
 *
 * @brief  Private implementation for GetTableRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTableRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetTableRequest instance.
 */
GetTableRequestPrivate::GetTableRequestPrivate(
    const GlueRequest::Action action, GetTableRequest * const q)
    : GetTablePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTableRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTableRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTableRequest instance.
 */
GetTableRequestPrivate::GetTableRequestPrivate(
    const GetTableRequestPrivate &other, GetTableRequest * const q)
    : GetTablePrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
