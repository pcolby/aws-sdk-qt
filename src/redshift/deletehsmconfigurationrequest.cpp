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

#include "deletehsmconfigurationrequest.h"
#include "deletehsmconfigurationrequest_p.h"
#include "deletehsmconfigurationresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  DeleteHsmConfigurationRequest
 *
 * @brief  Implements Redshift DeleteHsmConfiguration requests.
 *
 * @see    RedshiftClient::deleteHsmConfiguration
 */

/**
 * @brief  Constructs a new DeleteHsmConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteHsmConfigurationRequest::DeleteHsmConfigurationRequest(const DeleteHsmConfigurationRequest &other)
    : RedshiftRequest(new DeleteHsmConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteHsmConfigurationRequest object.
 */
DeleteHsmConfigurationRequest::DeleteHsmConfigurationRequest()
    : RedshiftRequest(new DeleteHsmConfigurationRequestPrivate(RedshiftRequest::DeleteHsmConfigurationAction, this))
{

}

bool DeleteHsmConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteHsmConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteHsmConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DeleteHsmConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHsmConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteHsmConfigurationRequestPrivate
 *
 * @brief  Private implementation for DeleteHsmConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHsmConfigurationRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DeleteHsmConfigurationRequest instance.
 */
DeleteHsmConfigurationRequestPrivate::DeleteHsmConfigurationRequestPrivate(
    const RedshiftRequest::Action action, DeleteHsmConfigurationRequest * const q)
    : DeleteHsmConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteHsmConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteHsmConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteHsmConfigurationRequest instance.
 */
DeleteHsmConfigurationRequestPrivate::DeleteHsmConfigurationRequestPrivate(
    const DeleteHsmConfigurationRequestPrivate &other, DeleteHsmConfigurationRequest * const q)
    : DeleteHsmConfigurationPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
