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

#include "updategroupcertificateconfigurationrequest.h"
#include "updategroupcertificateconfigurationrequest_p.h"
#include "updategroupcertificateconfigurationresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  UpdateGroupCertificateConfigurationRequest
 *
 * @brief  Implements Greengrass UpdateGroupCertificateConfiguration requests.
 *
 * @see    GreengrassClient::updateGroupCertificateConfiguration
 */

/**
 * @brief  Constructs a new UpdateGroupCertificateConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateGroupCertificateConfigurationRequest::UpdateGroupCertificateConfigurationRequest(const UpdateGroupCertificateConfigurationRequest &other)
    : GreengrassRequest(new UpdateGroupCertificateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateGroupCertificateConfigurationRequest object.
 */
UpdateGroupCertificateConfigurationRequest::UpdateGroupCertificateConfigurationRequest()
    : GreengrassRequest(new UpdateGroupCertificateConfigurationRequestPrivate(GreengrassRequest::UpdateGroupCertificateConfigurationAction, this))
{

}

bool UpdateGroupCertificateConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateGroupCertificateConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateGroupCertificateConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGroupCertificateConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGroupCertificateConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateGroupCertificateConfigurationRequestPrivate
 *
 * @brief  Private implementation for UpdateGroupCertificateConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGroupCertificateConfigurationRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public UpdateGroupCertificateConfigurationRequest instance.
 */
UpdateGroupCertificateConfigurationRequestPrivate::UpdateGroupCertificateConfigurationRequestPrivate(
    const GreengrassRequest::Action action, UpdateGroupCertificateConfigurationRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGroupCertificateConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateGroupCertificateConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateGroupCertificateConfigurationRequest instance.
 */
UpdateGroupCertificateConfigurationRequestPrivate::UpdateGroupCertificateConfigurationRequestPrivate(
    const UpdateGroupCertificateConfigurationRequestPrivate &other, UpdateGroupCertificateConfigurationRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
