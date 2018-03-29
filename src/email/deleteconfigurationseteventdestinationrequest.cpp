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

#include "deleteconfigurationseteventdestinationrequest.h"
#include "deleteconfigurationseteventdestinationrequest_p.h"
#include "deleteconfigurationseteventdestinationresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  DeleteConfigurationSetEventDestinationRequest
 *
 * @brief  Implements SES DeleteConfigurationSetEventDestination requests.
 *
 * @see    SESClient::deleteConfigurationSetEventDestination
 */

/**
 * @brief  Constructs a new DeleteConfigurationSetEventDestinationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteConfigurationSetEventDestinationRequest::DeleteConfigurationSetEventDestinationRequest(const DeleteConfigurationSetEventDestinationRequest &other)
    : SESRequest(new DeleteConfigurationSetEventDestinationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteConfigurationSetEventDestinationRequest object.
 */
DeleteConfigurationSetEventDestinationRequest::DeleteConfigurationSetEventDestinationRequest()
    : SESRequest(new DeleteConfigurationSetEventDestinationRequestPrivate(SESRequest::DeleteConfigurationSetEventDestinationAction, this))
{

}

bool DeleteConfigurationSetEventDestinationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteConfigurationSetEventDestinationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteConfigurationSetEventDestinationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConfigurationSetEventDestinationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConfigurationSetEventDestinationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteConfigurationSetEventDestinationRequestPrivate
 *
 * @brief  Private implementation for DeleteConfigurationSetEventDestinationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationSetEventDestinationRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DeleteConfigurationSetEventDestinationRequest instance.
 */
DeleteConfigurationSetEventDestinationRequestPrivate::DeleteConfigurationSetEventDestinationRequestPrivate(
    const SESRequest::Action action, DeleteConfigurationSetEventDestinationRequest * const q)
    : DeleteConfigurationSetEventDestinationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationSetEventDestinationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteConfigurationSetEventDestinationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteConfigurationSetEventDestinationRequest instance.
 */
DeleteConfigurationSetEventDestinationRequestPrivate::DeleteConfigurationSetEventDestinationRequestPrivate(
    const DeleteConfigurationSetEventDestinationRequestPrivate &other, DeleteConfigurationSetEventDestinationRequest * const q)
    : DeleteConfigurationSetEventDestinationPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
