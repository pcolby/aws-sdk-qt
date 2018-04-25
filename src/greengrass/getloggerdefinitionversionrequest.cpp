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

#include "getloggerdefinitionversionrequest.h"
#include "getloggerdefinitionversionrequest_p.h"
#include "getloggerdefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetLoggerDefinitionVersionRequest
 * \brief The GetLoggerDefinitionVersionRequest class provides an interface for Greengrass GetLoggerDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getLoggerDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetLoggerDefinitionVersionRequest::GetLoggerDefinitionVersionRequest(const GetLoggerDefinitionVersionRequest &other)
    : GreengrassRequest(new GetLoggerDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLoggerDefinitionVersionRequest object.
 */
GetLoggerDefinitionVersionRequest::GetLoggerDefinitionVersionRequest()
    : GreengrassRequest(new GetLoggerDefinitionVersionRequestPrivate(GreengrassRequest::GetLoggerDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetLoggerDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLoggerDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLoggerDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetLoggerDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetLoggerDefinitionVersionRequestPrivate
 * \brief The GetLoggerDefinitionVersionRequestPrivate class provides private implementation for GetLoggerDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetLoggerDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetLoggerDefinitionVersionRequestPrivate::GetLoggerDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetLoggerDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLoggerDefinitionVersionRequest
 * class' copy constructor.
 */
GetLoggerDefinitionVersionRequestPrivate::GetLoggerDefinitionVersionRequestPrivate(
    const GetLoggerDefinitionVersionRequestPrivate &other, GetLoggerDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
