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

#include "updatelaunchconfigurationrequest.h"
#include "updatelaunchconfigurationrequest_p.h"
#include "updatelaunchconfigurationresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::UpdateLaunchConfigurationRequest
 * \brief The UpdateLaunchConfigurationRequest class provides an interface for mgn UpdateLaunchConfiguration requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::updateLaunchConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLaunchConfigurationRequest::UpdateLaunchConfigurationRequest(const UpdateLaunchConfigurationRequest &other)
    : mgnRequest(new UpdateLaunchConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLaunchConfigurationRequest object.
 */
UpdateLaunchConfigurationRequest::UpdateLaunchConfigurationRequest()
    : mgnRequest(new UpdateLaunchConfigurationRequestPrivate(mgnRequest::UpdateLaunchConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLaunchConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLaunchConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLaunchConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLaunchConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::UpdateLaunchConfigurationRequestPrivate
 * \brief The UpdateLaunchConfigurationRequestPrivate class provides private implementation for UpdateLaunchConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a UpdateLaunchConfigurationRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
UpdateLaunchConfigurationRequestPrivate::UpdateLaunchConfigurationRequestPrivate(
    const mgnRequest::Action action, UpdateLaunchConfigurationRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLaunchConfigurationRequest
 * class' copy constructor.
 */
UpdateLaunchConfigurationRequestPrivate::UpdateLaunchConfigurationRequestPrivate(
    const UpdateLaunchConfigurationRequestPrivate &other, UpdateLaunchConfigurationRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
