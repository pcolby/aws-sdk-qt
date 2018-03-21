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

#include "getgroupcertificateconfigurationrequest.h"
#include "getgroupcertificateconfigurationrequest_p.h"
#include "getgroupcertificateconfigurationresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  GetGroupCertificateConfigurationRequest
 *
 * @brief  Implements Greengrass GetGroupCertificateConfiguration requests.
 *
 * @see    GreengrassClient::getGroupCertificateConfiguration
 */

/**
 * @brief  Constructs a new GetGroupCertificateConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGroupCertificateConfigurationResponse::GetGroupCertificateConfigurationResponse(

/**
 * @brief  Constructs a new GetGroupCertificateConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetGroupCertificateConfigurationRequest::GetGroupCertificateConfigurationRequest(const GetGroupCertificateConfigurationRequest &other)
    : GreengrassRequest(new GetGroupCertificateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetGroupCertificateConfigurationRequest object.
 */
GetGroupCertificateConfigurationRequest::GetGroupCertificateConfigurationRequest()
    : GreengrassRequest(new GetGroupCertificateConfigurationRequestPrivate(GreengrassRequest::GetGroupCertificateConfigurationAction, this))
{

}

bool GetGroupCertificateConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetGroupCertificateConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetGroupCertificateConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * GetGroupCertificateConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupCertificateConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetGroupCertificateConfigurationRequestPrivate
 *
 * @brief  Private implementation for GetGroupCertificateConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupCertificateConfigurationRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetGroupCertificateConfigurationRequest instance.
 */
GetGroupCertificateConfigurationRequestPrivate::GetGroupCertificateConfigurationRequestPrivate(
    const GreengrassRequest::Action action, GetGroupCertificateConfigurationRequest * const q)
    : GetGroupCertificateConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupCertificateConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetGroupCertificateConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetGroupCertificateConfigurationRequest instance.
 */
GetGroupCertificateConfigurationRequestPrivate::GetGroupCertificateConfigurationRequestPrivate(
    const GetGroupCertificateConfigurationRequestPrivate &other, GetGroupCertificateConfigurationRequest * const q)
    : GetGroupCertificateConfigurationPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
