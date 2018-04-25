/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletesubscriptiondefinitionrequest.h"
#include "deletesubscriptiondefinitionrequest_p.h"
#include "deletesubscriptiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteSubscriptionDefinitionRequest
 * \brief The DeleteSubscriptionDefinitionRequest class provides an interface for Greengrass DeleteSubscriptionDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::deleteSubscriptionDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSubscriptionDefinitionRequest::DeleteSubscriptionDefinitionRequest(const DeleteSubscriptionDefinitionRequest &other)
    : GreengrassRequest(new DeleteSubscriptionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSubscriptionDefinitionRequest object.
 */
DeleteSubscriptionDefinitionRequest::DeleteSubscriptionDefinitionRequest()
    : GreengrassRequest(new DeleteSubscriptionDefinitionRequestPrivate(GreengrassRequest::DeleteSubscriptionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSubscriptionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSubscriptionDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSubscriptionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSubscriptionDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::DeleteSubscriptionDefinitionRequestPrivate
 * \brief The DeleteSubscriptionDefinitionRequestPrivate class provides private implementation for DeleteSubscriptionDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteSubscriptionDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
DeleteSubscriptionDefinitionRequestPrivate::DeleteSubscriptionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSubscriptionDefinitionRequest
 * class' copy constructor.
 */
DeleteSubscriptionDefinitionRequestPrivate::DeleteSubscriptionDefinitionRequestPrivate(
    const DeleteSubscriptionDefinitionRequestPrivate &other, DeleteSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
