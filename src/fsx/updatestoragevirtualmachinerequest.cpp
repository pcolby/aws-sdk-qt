// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
