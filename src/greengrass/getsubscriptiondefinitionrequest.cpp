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

#include "getsubscriptiondefinitionrequest.h"
#include "getsubscriptiondefinitionrequest_p.h"
#include "getsubscriptiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetSubscriptionDefinitionRequest
 * \brief The GetSubscriptionDefinitionRequest class provides an interface for Greengrass GetSubscriptionDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getSubscriptionDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
GetSubscriptionDefinitionRequest::GetSubscriptionDefinitionRequest(const GetSubscriptionDefinitionRequest &other)
    : GreengrassRequest(new GetSubscriptionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSubscriptionDefinitionRequest object.
 */
GetSubscriptionDefinitionRequest::GetSubscriptionDefinitionRequest()
    : GreengrassRequest(new GetSubscriptionDefinitionRequestPrivate(GreengrassRequest::GetSubscriptionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetSubscriptionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSubscriptionDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSubscriptionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetSubscriptionDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetSubscriptionDefinitionRequestPrivate
 * \brief The GetSubscriptionDefinitionRequestPrivate class provides private implementation for GetSubscriptionDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetSubscriptionDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetSubscriptionDefinitionRequestPrivate::GetSubscriptionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSubscriptionDefinitionRequest
 * class' copy constructor.
 */
GetSubscriptionDefinitionRequestPrivate::GetSubscriptionDefinitionRequestPrivate(
    const GetSubscriptionDefinitionRequestPrivate &other, GetSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
