/*
    Copyright 2013-2021 Paul Colby

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

#include "updatesubscriptiondefinitionrequest.h"
#include "updatesubscriptiondefinitionrequest_p.h"
#include "updatesubscriptiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateSubscriptionDefinitionRequest
 * \brief The UpdateSubscriptionDefinitionRequest class provides an interface for Greengrass UpdateSubscriptionDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateSubscriptionDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSubscriptionDefinitionRequest::UpdateSubscriptionDefinitionRequest(const UpdateSubscriptionDefinitionRequest &other)
    : GreengrassRequest(new UpdateSubscriptionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSubscriptionDefinitionRequest object.
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
 * Returns a UpdateSubscriptionDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSubscriptionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSubscriptionDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::UpdateSubscriptionDefinitionRequestPrivate
 * \brief The UpdateSubscriptionDefinitionRequestPrivate class provides private implementation for UpdateSubscriptionDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateSubscriptionDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
UpdateSubscriptionDefinitionRequestPrivate::UpdateSubscriptionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSubscriptionDefinitionRequest
 * class' copy constructor.
 */
UpdateSubscriptionDefinitionRequestPrivate::UpdateSubscriptionDefinitionRequestPrivate(
    const UpdateSubscriptionDefinitionRequestPrivate &other, UpdateSubscriptionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
