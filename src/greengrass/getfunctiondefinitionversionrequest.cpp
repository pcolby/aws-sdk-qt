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

#include "getfunctiondefinitionversionrequest.h"
#include "getfunctiondefinitionversionrequest_p.h"
#include "getfunctiondefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionVersionRequest
 * \brief The GetFunctionDefinitionVersionRequest class provides an interface for Greengrass GetFunctionDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getFunctionDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetFunctionDefinitionVersionRequest::GetFunctionDefinitionVersionRequest(const GetFunctionDefinitionVersionRequest &other)
    : GreengrassRequest(new GetFunctionDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFunctionDefinitionVersionRequest object.
 */
GetFunctionDefinitionVersionRequest::GetFunctionDefinitionVersionRequest()
    : GreengrassRequest(new GetFunctionDefinitionVersionRequestPrivate(GreengrassRequest::GetFunctionDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetFunctionDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFunctionDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFunctionDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetFunctionDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionVersionRequestPrivate
 * \brief The GetFunctionDefinitionVersionRequestPrivate class provides private implementation for GetFunctionDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetFunctionDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetFunctionDefinitionVersionRequestPrivate::GetFunctionDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetFunctionDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFunctionDefinitionVersionRequest
 * class' copy constructor.
 */
GetFunctionDefinitionVersionRequestPrivate::GetFunctionDefinitionVersionRequestPrivate(
    const GetFunctionDefinitionVersionRequestPrivate &other, GetFunctionDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
