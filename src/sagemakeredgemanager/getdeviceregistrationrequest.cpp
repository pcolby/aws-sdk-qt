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

#include "getdeviceregistrationrequest.h"
#include "getdeviceregistrationrequest_p.h"
#include "getdeviceregistrationresponse.h"
#include "sagemakeredgemanagerrequest_p.h"

namespace QtAws {
namespace SagemakerEdgeManager {

/*!
 * \class QtAws::SagemakerEdgeManager::GetDeviceRegistrationRequest
 * \brief The GetDeviceRegistrationRequest class provides an interface for SagemakerEdgeManager GetDeviceRegistration requests.
 *
 * \inmodule QtAwsSagemakerEdgeManager
 *
 *  SageMaker Edge Manager dataplane service for communicating with active
 *
 * \sa SagemakerEdgeManagerClient::getDeviceRegistration
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeviceRegistrationRequest::GetDeviceRegistrationRequest(const GetDeviceRegistrationRequest &other)
    : SagemakerEdgeManagerRequest(new GetDeviceRegistrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeviceRegistrationRequest object.
 */
GetDeviceRegistrationRequest::GetDeviceRegistrationRequest()
    : SagemakerEdgeManagerRequest(new GetDeviceRegistrationRequestPrivate(SagemakerEdgeManagerRequest::GetDeviceRegistrationAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeviceRegistrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeviceRegistrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceRegistrationRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceRegistrationResponse(*this, reply);
}

/*!
 * \class QtAws::SagemakerEdgeManager::GetDeviceRegistrationRequestPrivate
 * \brief The GetDeviceRegistrationRequestPrivate class provides private implementation for GetDeviceRegistrationRequest.
 * \internal
 *
 * \inmodule QtAwsSagemakerEdgeManager
 */

/*!
 * Constructs a GetDeviceRegistrationRequestPrivate object for SagemakerEdgeManager \a action,
 * with public implementation \a q.
 */
GetDeviceRegistrationRequestPrivate::GetDeviceRegistrationRequestPrivate(
    const SagemakerEdgeManagerRequest::Action action, GetDeviceRegistrationRequest * const q)
    : SagemakerEdgeManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceRegistrationRequest
 * class' copy constructor.
 */
GetDeviceRegistrationRequestPrivate::GetDeviceRegistrationRequestPrivate(
    const GetDeviceRegistrationRequestPrivate &other, GetDeviceRegistrationRequest * const q)
    : SagemakerEdgeManagerRequestPrivate(other, q)
{

}

} // namespace SagemakerEdgeManager
} // namespace QtAws
