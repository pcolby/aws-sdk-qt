// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlaunchconfigurationrequest.h"
#include "getlaunchconfigurationrequest_p.h"
#include "getlaunchconfigurationresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::GetLaunchConfigurationRequest
 * \brief The GetLaunchConfigurationRequest class provides an interface for Mgn GetLaunchConfiguration requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::getLaunchConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetLaunchConfigurationRequest::GetLaunchConfigurationRequest(const GetLaunchConfigurationRequest &other)
    : MgnRequest(new GetLaunchConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLaunchConfigurationRequest object.
 */
GetLaunchConfigurationRequest::GetLaunchConfigurationRequest()
    : MgnRequest(new GetLaunchConfigurationRequestPrivate(MgnRequest::GetLaunchConfigurationAction, this))
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
 * \class QtAws::Mgn::GetLaunchConfigurationRequestPrivate
 * \brief The GetLaunchConfigurationRequestPrivate class provides private implementation for GetLaunchConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a GetLaunchConfigurationRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
GetLaunchConfigurationRequestPrivate::GetLaunchConfigurationRequestPrivate(
    const MgnRequest::Action action, GetLaunchConfigurationRequest * const q)
    : MgnRequestPrivate(action, q)
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
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
