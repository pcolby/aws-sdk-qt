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

#include "createconfigurationseteventdestinationrequest.h"
#include "createconfigurationseteventdestinationrequest_p.h"
#include "createconfigurationseteventdestinationresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  CreateConfigurationSetEventDestinationRequest
 *
 * @brief  Implements SES CreateConfigurationSetEventDestination requests.
 *
 * @see    SESClient::createConfigurationSetEventDestination
 */

/**
 * @brief  Constructs a new CreateConfigurationSetEventDestinationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateConfigurationSetEventDestinationRequest::CreateConfigurationSetEventDestinationRequest(const CreateConfigurationSetEventDestinationRequest &other)
    : SESRequest(new CreateConfigurationSetEventDestinationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateConfigurationSetEventDestinationRequest object.
 */
CreateConfigurationSetEventDestinationRequest::CreateConfigurationSetEventDestinationRequest()
    : SESRequest(new CreateConfigurationSetEventDestinationRequestPrivate(SESRequest::CreateConfigurationSetEventDestinationAction, this))
{

}

bool CreateConfigurationSetEventDestinationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateConfigurationSetEventDestinationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateConfigurationSetEventDestinationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConfigurationSetEventDestinationRequest::response(QNetworkReply * const reply) const
{
    return new CreateConfigurationSetEventDestinationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateConfigurationSetEventDestinationRequestPrivate
 *
 * @brief  Private implementation for CreateConfigurationSetEventDestinationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateConfigurationSetEventDestinationRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public CreateConfigurationSetEventDestinationRequest instance.
 */
CreateConfigurationSetEventDestinationRequestPrivate::CreateConfigurationSetEventDestinationRequestPrivate(
    const SESRequest::Action action, CreateConfigurationSetEventDestinationRequest * const q)
    : CreateConfigurationSetEventDestinationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateConfigurationSetEventDestinationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateConfigurationSetEventDestinationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateConfigurationSetEventDestinationRequest instance.
 */
CreateConfigurationSetEventDestinationRequestPrivate::CreateConfigurationSetEventDestinationRequestPrivate(
    const CreateConfigurationSetEventDestinationRequestPrivate &other, CreateConfigurationSetEventDestinationRequest * const q)
    : CreateConfigurationSetEventDestinationPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
