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

#include "updatesubscriptiondefinitionrequest.h"
#include "updatesubscriptiondefinitionrequest_p.h"
#include "updatesubscriptiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateSubscriptionDefinitionRequest
 *
 * \brief The UpdateSubscriptionDefinitionRequest class provides an interface for Greengrass UpdateSubscriptionDefinition requests.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::updateSubscriptionDefinition
 */

/*!
 * @brief  Constructs a new UpdateSubscriptionDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSubscriptionDefinitionRequest::UpdateSubscriptionDefinitionRequest(const UpdateSubscriptionDefinitionRequest &other)
    : GreengrassRequest(new UpdateSubscriptionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateSubscriptionDefinitionRequest object.
 */
UpdateSubscriptionDefinitionRequest::UpdateSubscriptionDefinitionRequest()
    : GreengrassRequest(new UpdateSubscriptionDefinitionRequestPrivate(GreengrassRequest::UpdateSubscriptionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSubscriptionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateSubscriptionDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSubscriptionDefinitionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSubscriptionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSubscriptionDefinitionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateSubscriptionDefinitionRequestPrivate
 *
 * @brief  Private implementation for UpdateSubscriptionDefinitionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateSubscriptionDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public UpdateSubscriptionDefinitionRequest instance.
 */
UpdateSubscriptionDefinitionRequestPrivate::UpdateSubscriptionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateSubscriptionDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSubscriptionDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSubscriptionDefinitionRequest instance.
 */
UpdateSubscriptionDefinitionRequestPrivate::UpdateSubscriptionDefinitionRequestPrivate(
    const UpdateSubscriptionDefinitionRequestPrivate &other, UpdateSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
