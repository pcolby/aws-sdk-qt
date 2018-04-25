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

#include "getserviceroleforaccountrequest.h"
#include "getserviceroleforaccountrequest_p.h"
#include "getserviceroleforaccountresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetServiceRoleForAccountRequest
 * \brief The GetServiceRoleForAccountRequest class provides an interface for Greengrass GetServiceRoleForAccount requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getServiceRoleForAccount
 */

/*!
 * Constructs a copy of \a other.
 */
GetServiceRoleForAccountRequest::GetServiceRoleForAccountRequest(const GetServiceRoleForAccountRequest &other)
    : GreengrassRequest(new GetServiceRoleForAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServiceRoleForAccountRequest object.
 */
GetServiceRoleForAccountRequest::GetServiceRoleForAccountRequest()
    : GreengrassRequest(new GetServiceRoleForAccountRequestPrivate(GreengrassRequest::GetServiceRoleForAccountAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceRoleForAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServiceRoleForAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceRoleForAccountRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceRoleForAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetServiceRoleForAccountRequestPrivate
 * \brief The GetServiceRoleForAccountRequestPrivate class provides private implementation for GetServiceRoleForAccountRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetServiceRoleForAccountRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetServiceRoleForAccountRequestPrivate::GetServiceRoleForAccountRequestPrivate(
    const GreengrassRequest::Action action, GetServiceRoleForAccountRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServiceRoleForAccountRequest
 * class' copy constructor.
 */
GetServiceRoleForAccountRequestPrivate::GetServiceRoleForAccountRequestPrivate(
    const GetServiceRoleForAccountRequestPrivate &other, GetServiceRoleForAccountRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
