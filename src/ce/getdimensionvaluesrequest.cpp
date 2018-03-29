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

#include "getdimensionvaluesrequest.h"
#include "getdimensionvaluesrequest_p.h"
#include "getdimensionvaluesresponse.h"
#include "costexplorerrequest_p.h"

namespace QtAws {
namespace CostExplorer {

/**
 * @class  GetDimensionValuesRequest
 *
 * @brief  Implements CostExplorer GetDimensionValues requests.
 *
 * @see    CostExplorerClient::getDimensionValues
 */

/**
 * @brief  Constructs a new GetDimensionValuesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDimensionValuesRequest::GetDimensionValuesRequest(const GetDimensionValuesRequest &other)
    : CostExplorerRequest(new GetDimensionValuesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDimensionValuesRequest object.
 */
GetDimensionValuesRequest::GetDimensionValuesRequest()
    : CostExplorerRequest(new GetDimensionValuesRequestPrivate(CostExplorerRequest::GetDimensionValuesAction, this))
{

}

bool GetDimensionValuesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDimensionValuesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDimensionValuesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CostExplorerClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDimensionValuesRequest::response(QNetworkReply * const reply) const
{
    return new GetDimensionValuesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDimensionValuesRequestPrivate
 *
 * @brief  Private implementation for GetDimensionValuesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDimensionValuesRequestPrivate object.
 *
 * @param  action  CostExplorer action being performed.
 * @param  q       Pointer to this object's public GetDimensionValuesRequest instance.
 */
GetDimensionValuesRequestPrivate::GetDimensionValuesRequestPrivate(
    const CostExplorerRequest::Action action, GetDimensionValuesRequest * const q)
    : GetDimensionValuesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDimensionValuesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDimensionValuesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDimensionValuesRequest instance.
 */
GetDimensionValuesRequestPrivate::GetDimensionValuesRequestPrivate(
    const GetDimensionValuesRequestPrivate &other, GetDimensionValuesRequest * const q)
    : GetDimensionValuesPrivate(other, q)
{

}

} // namespace CostExplorer
} // namespace QtAws
