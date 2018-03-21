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

#include "getclustercredentialsrequest.h"
#include "getclustercredentialsrequest_p.h"
#include "getclustercredentialsresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  GetClusterCredentialsRequest
 *
 * @brief  Implements Redshift GetClusterCredentials requests.
 *
 * @see    RedshiftClient::getClusterCredentials
 */

/**
 * @brief  Constructs a new GetClusterCredentialsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetClusterCredentialsResponse::GetClusterCredentialsResponse(

/**
 * @brief  Constructs a new GetClusterCredentialsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetClusterCredentialsRequest::GetClusterCredentialsRequest(const GetClusterCredentialsRequest &other)
    : RedshiftRequest(new GetClusterCredentialsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetClusterCredentialsRequest object.
 */
GetClusterCredentialsRequest::GetClusterCredentialsRequest()
    : RedshiftRequest(new GetClusterCredentialsRequestPrivate(RedshiftRequest::GetClusterCredentialsAction, this))
{

}

bool GetClusterCredentialsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetClusterCredentialsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetClusterCredentialsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * GetClusterCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new GetClusterCredentialsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetClusterCredentialsRequestPrivate
 *
 * @brief  Private implementation for GetClusterCredentialsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetClusterCredentialsRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public GetClusterCredentialsRequest instance.
 */
GetClusterCredentialsRequestPrivate::GetClusterCredentialsRequestPrivate(
    const RedshiftRequest::Action action, GetClusterCredentialsRequest * const q)
    : GetClusterCredentialsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetClusterCredentialsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetClusterCredentialsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetClusterCredentialsRequest instance.
 */
GetClusterCredentialsRequestPrivate::GetClusterCredentialsRequestPrivate(
    const GetClusterCredentialsRequestPrivate &other, GetClusterCredentialsRequest * const q)
    : GetClusterCredentialsPrivate(other, q)
{

}
