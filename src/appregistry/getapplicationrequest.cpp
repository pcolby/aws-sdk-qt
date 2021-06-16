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

#include "getapplicationrequest.h"
#include "getapplicationrequest_p.h"
#include "getapplicationresponse.h"
#include "appregistryrequest_p.h"

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::GetApplicationRequest
 * \brief The GetApplicationRequest class provides an interface for AppRegistry GetApplication requests.
 *
 * \inmodule QtAwsAppRegistry
 *
 *  AWS Service Catalog AppRegistry enables organizations to understand the application context of their AWS resources.
 *  AppRegistry provides a repository of your applications, their resources, and the application metadata that you use
 *  within your
 *
 * \sa AppRegistryClient::getApplication
 */

/*!
 * Constructs a copy of \a other.
 */
GetApplicationRequest::GetApplicationRequest(const GetApplicationRequest &other)
    : AppRegistryRequest(new GetApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApplicationRequest object.
 */
GetApplicationRequest::GetApplicationRequest()
    : AppRegistryRequest(new GetApplicationRequestPrivate(AppRegistryRequest::GetApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool GetApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApplicationRequest::response(QNetworkReply * const reply) const
{
    return new GetApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::AppRegistry::GetApplicationRequestPrivate
 * \brief The GetApplicationRequestPrivate class provides private implementation for GetApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a GetApplicationRequestPrivate object for AppRegistry \a action,
 * with public implementation \a q.
 */
GetApplicationRequestPrivate::GetApplicationRequestPrivate(
    const AppRegistryRequest::Action action, GetApplicationRequest * const q)
    : AppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApplicationRequest
 * class' copy constructor.
 */
GetApplicationRequestPrivate::GetApplicationRequestPrivate(
    const GetApplicationRequestPrivate &other, GetApplicationRequest * const q)
    : AppRegistryRequestPrivate(other, q)
{

}

} // namespace AppRegistry
} // namespace QtAws
