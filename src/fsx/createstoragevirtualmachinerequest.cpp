// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstoragevirtualmachinerequest.h"
#include "createstoragevirtualmachinerequest_p.h"
#include "createstoragevirtualmachineresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateStorageVirtualMachineRequest
 * \brief The CreateStorageVirtualMachineRequest class provides an interface for FSx CreateStorageVirtualMachine requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createStorageVirtualMachine
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStorageVirtualMachineRequest::CreateStorageVirtualMachineRequest(const CreateStorageVirtualMachineRequest &other)
    : FSxRequest(new CreateStorageVirtualMachineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStorageVirtualMachineRequest object.
 */
CreateStorageVirtualMachineRequest::CreateStorageVirtualMachineRequest()
    : FSxRequest(new CreateStorageVirtualMachineRequestPrivate(FSxRequest::CreateStorageVirtualMachineAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStorageVirtualMachineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStorageVirtualMachineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStorageVirtualMachineRequest::response(QNetworkReply * const reply) const
{
    return new CreateStorageVirtualMachineResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::CreateStorageVirtualMachineRequestPrivate
 * \brief The CreateStorageVirtualMachineRequestPrivate class provides private implementation for CreateStorageVirtualMachineRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateStorageVirtualMachineRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
CreateStorageVirtualMachineRequestPrivate::CreateStorageVirtualMachineRequestPrivate(
    const FSxRequest::Action action, CreateStorageVirtualMachineRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStorageVirtualMachineRequest
 * class' copy constructor.
 */
CreateStorageVirtualMachineRequestPrivate::CreateStorageVirtualMachineRequestPrivate(
    const CreateStorageVirtualMachineRequestPrivate &other, CreateStorageVirtualMachineRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
