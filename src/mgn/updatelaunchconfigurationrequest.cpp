// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelaunchconfigurationrequest.h"
#include "updatelaunchconfigurationrequest_p.h"
#include "updatelaunchconfigurationresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::UpdateLaunchConfigurationRequest
 * \brief The UpdateLaunchConfigurationRequest class provides an interface for Mgn UpdateLaunchConfiguration requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::updateLaunchConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLaunchConfigurationRequest::UpdateLaunchConfigurationRequest(const UpdateLaunchConfigurationRequest &other)
    : MgnRequest(new UpdateLaunchConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLaunchConfigurationRequest object.
 */
UpdateLaunchConfigurationRequest::UpdateLaunchConfigurationRequest()
    : MgnRequest(new UpdateLaunchConfigurationRequestPrivate(MgnRequest::UpdateLaunchConfigurationAction, this))
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
 * \class QtAws::Mgn::UpdateLaunchConfigurationRequestPrivate
 * \brief The UpdateLaunchConfigurationRequestPrivate class provides private implementation for UpdateLaunchConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a UpdateLaunchConfigurationRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
UpdateLaunchConfigurationRequestPrivate::UpdateLaunchConfigurationRequestPrivate(
    const MgnRequest::Action action, UpdateLaunchConfigurationRequest * const q)
    : MgnRequestPrivate(action, q)
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
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
