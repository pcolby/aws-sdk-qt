// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelaunchconfigurationrequest.h"
#include "updatelaunchconfigurationrequest_p.h"
#include "updatelaunchconfigurationresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::UpdateLaunchConfigurationRequest
 * \brief The UpdateLaunchConfigurationRequest class provides an interface for Drs UpdateLaunchConfiguration requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::updateLaunchConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLaunchConfigurationRequest::UpdateLaunchConfigurationRequest(const UpdateLaunchConfigurationRequest &other)
    : DrsRequest(new UpdateLaunchConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLaunchConfigurationRequest object.
 */
UpdateLaunchConfigurationRequest::UpdateLaunchConfigurationRequest()
    : DrsRequest(new UpdateLaunchConfigurationRequestPrivate(DrsRequest::UpdateLaunchConfigurationAction, this))
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
 * \class QtAws::Drs::UpdateLaunchConfigurationRequestPrivate
 * \brief The UpdateLaunchConfigurationRequestPrivate class provides private implementation for UpdateLaunchConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a UpdateLaunchConfigurationRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
UpdateLaunchConfigurationRequestPrivate::UpdateLaunchConfigurationRequestPrivate(
    const DrsRequest::Action action, UpdateLaunchConfigurationRequest * const q)
    : DrsRequestPrivate(action, q)
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
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
