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

#include "deletesecurityconfigurationrequest.h"
#include "deletesecurityconfigurationrequest_p.h"
#include "deletesecurityconfigurationresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/**
 * @class  DeleteSecurityConfigurationRequest
 *
 * @brief  Implements EMR DeleteSecurityConfiguration requests.
 *
 * @see    EMRClient::deleteSecurityConfiguration
 */

/**
 * @brief  Constructs a new DeleteSecurityConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSecurityConfigurationRequest::DeleteSecurityConfigurationRequest(const DeleteSecurityConfigurationRequest &other)
    : EMRRequest(new DeleteSecurityConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSecurityConfigurationRequest object.
 */
DeleteSecurityConfigurationRequest::DeleteSecurityConfigurationRequest()
    : EMRRequest(new DeleteSecurityConfigurationRequestPrivate(EMRRequest::DeleteSecurityConfigurationAction, this))
{

}

bool DeleteSecurityConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSecurityConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSecurityConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EMRClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSecurityConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSecurityConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSecurityConfigurationRequestPrivate
 *
 * @brief  Private implementation for DeleteSecurityConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSecurityConfigurationRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public DeleteSecurityConfigurationRequest instance.
 */
DeleteSecurityConfigurationRequestPrivate::DeleteSecurityConfigurationRequestPrivate(
    const EMRRequest::Action action, DeleteSecurityConfigurationRequest * const q)
    : DeleteSecurityConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSecurityConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSecurityConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSecurityConfigurationRequest instance.
 */
DeleteSecurityConfigurationRequestPrivate::DeleteSecurityConfigurationRequestPrivate(
    const DeleteSecurityConfigurationRequestPrivate &other, DeleteSecurityConfigurationRequest * const q)
    : DeleteSecurityConfigurationPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
