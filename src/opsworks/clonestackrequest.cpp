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

#include "clonestackrequest.h"
#include "clonestackrequest_p.h"
#include "clonestackresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  CloneStackRequest
 *
 * @brief  Implements OpsWorks CloneStack requests.
 *
 * @see    OpsWorksClient::cloneStack
 */

/**
 * @brief  Constructs a new CloneStackResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CloneStackResponse::CloneStackResponse(

/**
 * @brief  Constructs a new CloneStackRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CloneStackRequest::CloneStackRequest(const CloneStackRequest &other)
    : OpsWorksRequest(new CloneStackRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CloneStackRequest object.
 */
CloneStackRequest::CloneStackRequest()
    : OpsWorksRequest(new CloneStackRequestPrivate(OpsWorksRequest::CloneStackAction, this))
{

}

bool CloneStackRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CloneStackResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CloneStackResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * CloneStackRequest::response(QNetworkReply * const reply) const
{
    return new CloneStackResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CloneStackRequestPrivate
 *
 * @brief  Private implementation for CloneStackRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloneStackRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public CloneStackRequest instance.
 */
CloneStackRequestPrivate::CloneStackRequestPrivate(
    const OpsWorksRequest::Action action, CloneStackRequest * const q)
    : CloneStackPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CloneStackRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CloneStackRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CloneStackRequest instance.
 */
CloneStackRequestPrivate::CloneStackRequestPrivate(
    const CloneStackRequestPrivate &other, CloneStackRequest * const q)
    : CloneStackPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
