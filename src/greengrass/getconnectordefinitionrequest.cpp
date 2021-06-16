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

#include "getconnectordefinitionrequest.h"
#include "getconnectordefinitionrequest_p.h"
#include "getconnectordefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetConnectorDefinitionRequest
 * \brief The GetConnectorDefinitionRequest class provides an interface for Greengrass GetConnectorDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getConnectorDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectorDefinitionRequest::GetConnectorDefinitionRequest(const GetConnectorDefinitionRequest &other)
    : GreengrassRequest(new GetConnectorDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectorDefinitionRequest object.
 */
GetConnectorDefinitionRequest::GetConnectorDefinitionRequest()
    : GreengrassRequest(new GetConnectorDefinitionRequestPrivate(GreengrassRequest::GetConnectorDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectorDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectorDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectorDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectorDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetConnectorDefinitionRequestPrivate
 * \brief The GetConnectorDefinitionRequestPrivate class provides private implementation for GetConnectorDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetConnectorDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetConnectorDefinitionRequestPrivate::GetConnectorDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetConnectorDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectorDefinitionRequest
 * class' copy constructor.
 */
GetConnectorDefinitionRequestPrivate::GetConnectorDefinitionRequestPrivate(
    const GetConnectorDefinitionRequestPrivate &other, GetConnectorDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
