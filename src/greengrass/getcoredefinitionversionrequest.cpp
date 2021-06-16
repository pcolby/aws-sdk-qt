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

#include "getcoredefinitionversionrequest.h"
#include "getcoredefinitionversionrequest_p.h"
#include "getcoredefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetCoreDefinitionVersionRequest
 * \brief The GetCoreDefinitionVersionRequest class provides an interface for Greengrass GetCoreDefinitionVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getCoreDefinitionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetCoreDefinitionVersionRequest::GetCoreDefinitionVersionRequest(const GetCoreDefinitionVersionRequest &other)
    : GreengrassRequest(new GetCoreDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCoreDefinitionVersionRequest object.
 */
GetCoreDefinitionVersionRequest::GetCoreDefinitionVersionRequest()
    : GreengrassRequest(new GetCoreDefinitionVersionRequestPrivate(GreengrassRequest::GetCoreDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetCoreDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCoreDefinitionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCoreDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetCoreDefinitionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetCoreDefinitionVersionRequestPrivate
 * \brief The GetCoreDefinitionVersionRequestPrivate class provides private implementation for GetCoreDefinitionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetCoreDefinitionVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetCoreDefinitionVersionRequestPrivate::GetCoreDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetCoreDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCoreDefinitionVersionRequest
 * class' copy constructor.
 */
GetCoreDefinitionVersionRequestPrivate::GetCoreDefinitionVersionRequestPrivate(
    const GetCoreDefinitionVersionRequestPrivate &other, GetCoreDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
