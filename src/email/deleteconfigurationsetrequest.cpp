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

#include "deleteconfigurationsetrequest.h"
#include "deleteconfigurationsetrequest_p.h"
#include "deleteconfigurationsetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  DeleteConfigurationSetRequest
 *
 * @brief  Implements SES DeleteConfigurationSet requests.
 *
 * @see    SESClient::deleteConfigurationSet
 */

/**
 * @brief  Constructs a new DeleteConfigurationSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteConfigurationSetRequest::DeleteConfigurationSetRequest(const DeleteConfigurationSetRequest &other)
    : SESRequest(new DeleteConfigurationSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteConfigurationSetRequest object.
 */
DeleteConfigurationSetRequest::DeleteConfigurationSetRequest()
    : SESRequest(new DeleteConfigurationSetRequestPrivate(SESRequest::DeleteConfigurationSetAction, this))
{

}

bool DeleteConfigurationSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteConfigurationSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteConfigurationSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * DeleteConfigurationSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConfigurationSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteConfigurationSetRequestPrivate
 *
 * @brief  Private implementation for DeleteConfigurationSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationSetRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DeleteConfigurationSetRequest instance.
 */
DeleteConfigurationSetRequestPrivate::DeleteConfigurationSetRequestPrivate(
    const SESRequest::Action action, DeleteConfigurationSetRequest * const q)
    : DeleteConfigurationSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteConfigurationSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteConfigurationSetRequest instance.
 */
DeleteConfigurationSetRequestPrivate::DeleteConfigurationSetRequestPrivate(
    const DeleteConfigurationSetRequestPrivate &other, DeleteConfigurationSetRequest * const q)
    : DeleteConfigurationSetPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
