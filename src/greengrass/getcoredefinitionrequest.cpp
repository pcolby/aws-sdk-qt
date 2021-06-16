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

#include "getcoredefinitionrequest.h"
#include "getcoredefinitionrequest_p.h"
#include "getcoredefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetCoreDefinitionRequest
 * \brief The GetCoreDefinitionRequest class provides an interface for Greengrass GetCoreDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getCoreDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
GetCoreDefinitionRequest::GetCoreDefinitionRequest(const GetCoreDefinitionRequest &other)
    : GreengrassRequest(new GetCoreDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCoreDefinitionRequest object.
 */
GetCoreDefinitionRequest::GetCoreDefinitionRequest()
    : GreengrassRequest(new GetCoreDefinitionRequestPrivate(GreengrassRequest::GetCoreDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetCoreDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCoreDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCoreDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetCoreDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetCoreDefinitionRequestPrivate
 * \brief The GetCoreDefinitionRequestPrivate class provides private implementation for GetCoreDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetCoreDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetCoreDefinitionRequestPrivate::GetCoreDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetCoreDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCoreDefinitionRequest
 * class' copy constructor.
 */
GetCoreDefinitionRequestPrivate::GetCoreDefinitionRequestPrivate(
    const GetCoreDefinitionRequestPrivate &other, GetCoreDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
