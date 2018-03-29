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

#include "grantaccessrequest.h"
#include "grantaccessrequest_p.h"
#include "grantaccessresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  GrantAccessRequest
 *
 * @brief  Implements OpsWorks GrantAccess requests.
 *
 * @see    OpsWorksClient::grantAccess
 */

/**
 * @brief  Constructs a new GrantAccessRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GrantAccessRequest::GrantAccessRequest(const GrantAccessRequest &other)
    : OpsWorksRequest(new GrantAccessRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GrantAccessRequest object.
 */
GrantAccessRequest::GrantAccessRequest()
    : OpsWorksRequest(new GrantAccessRequestPrivate(OpsWorksRequest::GrantAccessAction, this))
{

}

bool GrantAccessRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GrantAccessResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GrantAccessResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * GrantAccessRequest::response(QNetworkReply * const reply) const
{
    return new GrantAccessResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GrantAccessRequestPrivate
 *
 * @brief  Private implementation for GrantAccessRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GrantAccessRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public GrantAccessRequest instance.
 */
GrantAccessRequestPrivate::GrantAccessRequestPrivate(
    const OpsWorksRequest::Action action, GrantAccessRequest * const q)
    : GrantAccessPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GrantAccessRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GrantAccessRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GrantAccessRequest instance.
 */
GrantAccessRequestPrivate::GrantAccessRequestPrivate(
    const GrantAccessRequestPrivate &other, GrantAccessRequest * const q)
    : GrantAccessPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
