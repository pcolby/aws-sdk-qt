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

#include "getfunctiondefinitionrequest.h"
#include "getfunctiondefinitionrequest_p.h"
#include "getfunctiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionRequest
 * \brief The GetFunctionDefinitionRequest class provides an interface for Greengrass GetFunctionDefinition requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getFunctionDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
GetFunctionDefinitionRequest::GetFunctionDefinitionRequest(const GetFunctionDefinitionRequest &other)
    : GreengrassRequest(new GetFunctionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFunctionDefinitionRequest object.
 */
GetFunctionDefinitionRequest::GetFunctionDefinitionRequest()
    : GreengrassRequest(new GetFunctionDefinitionRequestPrivate(GreengrassRequest::GetFunctionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetFunctionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFunctionDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFunctionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetFunctionDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionRequestPrivate
 * \brief The GetFunctionDefinitionRequestPrivate class provides private implementation for GetFunctionDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetFunctionDefinitionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetFunctionDefinitionRequestPrivate::GetFunctionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFunctionDefinitionRequest
 * class' copy constructor.
 */
GetFunctionDefinitionRequestPrivate::GetFunctionDefinitionRequestPrivate(
    const GetFunctionDefinitionRequestPrivate &other, GetFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
