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

#include "getlaunchconfigurationrequest.h"
#include "getlaunchconfigurationrequest_p.h"
#include "getlaunchconfigurationresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::GetLaunchConfigurationRequest
 * \brief The GetLaunchConfigurationRequest class provides an interface for mgn GetLaunchConfiguration requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::getLaunchConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetLaunchConfigurationRequest::GetLaunchConfigurationRequest(const GetLaunchConfigurationRequest &other)
    : mgnRequest(new GetLaunchConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLaunchConfigurationRequest object.
 */
GetLaunchConfigurationRequest::GetLaunchConfigurationRequest()
    : mgnRequest(new GetLaunchConfigurationRequestPrivate(mgnRequest::GetLaunchConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetLaunchConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLaunchConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLaunchConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetLaunchConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::GetLaunchConfigurationRequestPrivate
 * \brief The GetLaunchConfigurationRequestPrivate class provides private implementation for GetLaunchConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a GetLaunchConfigurationRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
GetLaunchConfigurationRequestPrivate::GetLaunchConfigurationRequestPrivate(
    const mgnRequest::Action action, GetLaunchConfigurationRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLaunchConfigurationRequest
 * class' copy constructor.
 */
GetLaunchConfigurationRequestPrivate::GetLaunchConfigurationRequestPrivate(
    const GetLaunchConfigurationRequestPrivate &other, GetLaunchConfigurationRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
