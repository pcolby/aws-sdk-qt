/*
    Copyright 2013-2019 Paul Colby

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

#include "getsubscriptiondefinitionversionrequest.h"
#include "getsubscriptiondefinitionversionrequest_p.h"
#include "getsubscriptiondefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetSubscriptionDefinitionVersionRequest
 * \brief The GetSubscriptionDefinitionVersionRequest class provides an interface for Greengrass GetSubscriptionDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getSubscriptionDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetSubscriptionDefinitionVersionRequest::GetSubscriptionDefinitionVersionRequest(const GetSubscriptionDefinitionVersionRequest &other)
    : GreengrassRequest(new GetSubscriptionDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSubscriptionDefinitionVersionRequest object.
 */
GetSubscriptionDefinitionVersionRequest::GetSubscriptionDefinitionVersionRequest()
    : GreengrassRequest(new GetSubscriptionDefinitionVersionRequestPrivate(GreengrassRequest::GetSubscriptionDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetSubscriptionDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSubscriptionDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSubscriptionDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetSubscriptionDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetSubscriptionDefinitionVersionRequestPrivate
 * \brief The GetSubscriptionDefinitionVersionRequestPrivate class provides private implementation for GetSubscriptionDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetSubscriptionDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetSubscriptionDefinitionVersionRequestPrivate::GetSubscriptionDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetSubscriptionDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSubscriptionDefinitionVersionRequest
 * class' copy constructor.
 */
GetSubscriptionDefinitionVersionRequestPrivate::GetSubscriptionDefinitionVersionRequestPrivate(
    const GetSubscriptionDefinitionVersionRequestPrivate &other, GetSubscriptionDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
