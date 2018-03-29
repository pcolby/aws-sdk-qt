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

#include "resetdeploymentsrequest.h"
#include "resetdeploymentsrequest_p.h"
#include "resetdeploymentsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  ResetDeploymentsRequest
 *
 * @brief  Implements Greengrass ResetDeployments requests.
 *
 * @see    GreengrassClient::resetDeployments
 */

/**
 * @brief  Constructs a new ResetDeploymentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResetDeploymentsRequest::ResetDeploymentsRequest(const ResetDeploymentsRequest &other)
    : GreengrassRequest(new ResetDeploymentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResetDeploymentsRequest object.
 */
ResetDeploymentsRequest::ResetDeploymentsRequest()
    : GreengrassRequest(new ResetDeploymentsRequestPrivate(GreengrassRequest::ResetDeploymentsAction, this))
{

}

bool ResetDeploymentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResetDeploymentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResetDeploymentsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetDeploymentsRequest::response(QNetworkReply * const reply) const
{
    return new ResetDeploymentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResetDeploymentsRequestPrivate
 *
 * @brief  Private implementation for ResetDeploymentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetDeploymentsRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ResetDeploymentsRequest instance.
 */
ResetDeploymentsRequestPrivate::ResetDeploymentsRequestPrivate(
    const GreengrassRequest::Action action, ResetDeploymentsRequest * const q)
    : ResetDeploymentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResetDeploymentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResetDeploymentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResetDeploymentsRequest instance.
 */
ResetDeploymentsRequestPrivate::ResetDeploymentsRequestPrivate(
    const ResetDeploymentsRequestPrivate &other, ResetDeploymentsRequest * const q)
    : ResetDeploymentsPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
