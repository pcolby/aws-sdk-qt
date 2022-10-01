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

#include "updatestoragevirtualmachinerequest.h"
#include "updatestoragevirtualmachinerequest_p.h"
#include "updatestoragevirtualmachineresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::UpdateStorageVirtualMachineRequest
 * \brief The UpdateStorageVirtualMachineRequest class provides an interface for FSx UpdateStorageVirtualMachine requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::updateStorageVirtualMachine
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStorageVirtualMachineRequest::UpdateStorageVirtualMachineRequest(const UpdateStorageVirtualMachineRequest &other)
    : FSxRequest(new UpdateStorageVirtualMachineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStorageVirtualMachineRequest object.
 */
UpdateStorageVirtualMachineRequest::UpdateStorageVirtualMachineRequest()
    : FSxRequest(new UpdateStorageVirtualMachineRequestPrivate(FSxRequest::UpdateStorageVirtualMachineAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStorageVirtualMachineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStorageVirtualMachineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStorageVirtualMachineRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStorageVirtualMachineResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::UpdateStorageVirtualMachineRequestPrivate
 * \brief The UpdateStorageVirtualMachineRequestPrivate class provides private implementation for UpdateStorageVirtualMachineRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a UpdateStorageVirtualMachineRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
UpdateStorageVirtualMachineRequestPrivate::UpdateStorageVirtualMachineRequestPrivate(
    const FSxRequest::Action action, UpdateStorageVirtualMachineRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStorageVirtualMachineRequest
 * class' copy constructor.
 */
UpdateStorageVirtualMachineRequestPrivate::UpdateStorageVirtualMachineRequestPrivate(
    const UpdateStorageVirtualMachineRequestPrivate &other, UpdateStorageVirtualMachineRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
