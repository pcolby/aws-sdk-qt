// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlaunchconfigurationrequest.h"
#include "getlaunchconfigurationrequest_p.h"
#include "getlaunchconfigurationresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::GetLaunchConfigurationRequest
 * \brief The GetLaunchConfigurationRequest class provides an interface for Drs GetLaunchConfiguration requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::getLaunchConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetLaunchConfigurationRequest::GetLaunchConfigurationRequest(const GetLaunchConfigurationRequest &other)
    : DrsRequest(new GetLaunchConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLaunchConfigurationRequest object.
 */
GetLaunchConfigurationRequest::GetLaunchConfigurationRequest()
    : DrsRequest(new GetLaunchConfigurationRequestPrivate(DrsRequest::GetLaunchConfigurationAction, this))
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
 * \class QtAws::Drs::GetLaunchConfigurationRequestPrivate
 * \brief The GetLaunchConfigurationRequestPrivate class provides private implementation for GetLaunchConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a GetLaunchConfigurationRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
GetLaunchConfigurationRequestPrivate::GetLaunchConfigurationRequestPrivate(
    const DrsRequest::Action action, GetLaunchConfigurationRequest * const q)
    : DrsRequestPrivate(action, q)
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
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
