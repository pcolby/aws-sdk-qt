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

#include "getresourcedefinitionrequest.h"
#include "getresourcedefinitionrequest_p.h"
#include "getresourcedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetResourceDefinitionRequest
 * \brief The GetResourceDefinitionRequest class provides an interface for Greengrass GetResourceDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getResourceDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceDefinitionRequest::GetResourceDefinitionRequest(const GetResourceDefinitionRequest &other)
    : GreengrassRequest(new GetResourceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceDefinitionRequest object.
 */
GetResourceDefinitionRequest::GetResourceDefinitionRequest()
    : GreengrassRequest(new GetResourceDefinitionRequestPrivate(GreengrassRequest::GetResourceDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetResourceDefinitionRequestPrivate
 * \brief The GetResourceDefinitionRequestPrivate class provides private implementation for GetResourceDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetResourceDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetResourceDefinitionRequestPrivate::GetResourceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetResourceDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceDefinitionRequest
 * class' copy constructor.
 */
GetResourceDefinitionRequestPrivate::GetResourceDefinitionRequestPrivate(
    const GetResourceDefinitionRequestPrivate &other, GetResourceDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
