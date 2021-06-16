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

#include "startstudiossoconfigurationrepairrequest.h"
#include "startstudiossoconfigurationrepairrequest_p.h"
#include "startstudiossoconfigurationrepairresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::StartStudioSSOConfigurationRepairRequest
 * \brief The StartStudioSSOConfigurationRepairRequest class provides an interface for NimbleStudio StartStudioSSOConfigurationRepair requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::startStudioSSOConfigurationRepair
 */

/*!
 * Constructs a copy of \a other.
 */
StartStudioSSOConfigurationRepairRequest::StartStudioSSOConfigurationRepairRequest(const StartStudioSSOConfigurationRepairRequest &other)
    : NimbleStudioRequest(new StartStudioSSOConfigurationRepairRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartStudioSSOConfigurationRepairRequest object.
 */
StartStudioSSOConfigurationRepairRequest::StartStudioSSOConfigurationRepairRequest()
    : NimbleStudioRequest(new StartStudioSSOConfigurationRepairRequestPrivate(NimbleStudioRequest::StartStudioSSOConfigurationRepairAction, this))
{

}

/*!
 * \reimp
 */
bool StartStudioSSOConfigurationRepairRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartStudioSSOConfigurationRepairResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartStudioSSOConfigurationRepairRequest::response(QNetworkReply * const reply) const
{
    return new StartStudioSSOConfigurationRepairResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::StartStudioSSOConfigurationRepairRequestPrivate
 * \brief The StartStudioSSOConfigurationRepairRequestPrivate class provides private implementation for StartStudioSSOConfigurationRepairRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a StartStudioSSOConfigurationRepairRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
StartStudioSSOConfigurationRepairRequestPrivate::StartStudioSSOConfigurationRepairRequestPrivate(
    const NimbleStudioRequest::Action action, StartStudioSSOConfigurationRepairRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartStudioSSOConfigurationRepairRequest
 * class' copy constructor.
 */
StartStudioSSOConfigurationRepairRequestPrivate::StartStudioSSOConfigurationRepairRequestPrivate(
    const StartStudioSSOConfigurationRepairRequestPrivate &other, StartStudioSSOConfigurationRepairRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
