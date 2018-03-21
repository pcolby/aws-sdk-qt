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

#include "authorizesnapshotaccessrequest.h"
#include "authorizesnapshotaccessrequest_p.h"
#include "authorizesnapshotaccessresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  AuthorizeSnapshotAccessRequest
 *
 * @brief  Implements Redshift AuthorizeSnapshotAccess requests.
 *
 * @see    RedshiftClient::authorizeSnapshotAccess
 */

/**
 * @brief  Constructs a new AuthorizeSnapshotAccessResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AuthorizeSnapshotAccessResponse::AuthorizeSnapshotAccessResponse(

/**
 * @brief  Constructs a new AuthorizeSnapshotAccessRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AuthorizeSnapshotAccessRequest::AuthorizeSnapshotAccessRequest(const AuthorizeSnapshotAccessRequest &other)
    : RedshiftRequest(new AuthorizeSnapshotAccessRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AuthorizeSnapshotAccessRequest object.
 */
AuthorizeSnapshotAccessRequest::AuthorizeSnapshotAccessRequest()
    : RedshiftRequest(new AuthorizeSnapshotAccessRequestPrivate(RedshiftRequest::AuthorizeSnapshotAccessAction, this))
{

}

bool AuthorizeSnapshotAccessRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AuthorizeSnapshotAccessResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AuthorizeSnapshotAccessResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * AuthorizeSnapshotAccessRequest::response(QNetworkReply * const reply) const
{
    return new AuthorizeSnapshotAccessResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AuthorizeSnapshotAccessRequestPrivate
 *
 * @brief  Private implementation for AuthorizeSnapshotAccessRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeSnapshotAccessRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public AuthorizeSnapshotAccessRequest instance.
 */
AuthorizeSnapshotAccessRequestPrivate::AuthorizeSnapshotAccessRequestPrivate(
    const RedshiftRequest::Action action, AuthorizeSnapshotAccessRequest * const q)
    : AuthorizeSnapshotAccessPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeSnapshotAccessRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AuthorizeSnapshotAccessRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AuthorizeSnapshotAccessRequest instance.
 */
AuthorizeSnapshotAccessRequestPrivate::AuthorizeSnapshotAccessRequestPrivate(
    const AuthorizeSnapshotAccessRequestPrivate &other, AuthorizeSnapshotAccessRequest * const q)
    : AuthorizeSnapshotAccessPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
