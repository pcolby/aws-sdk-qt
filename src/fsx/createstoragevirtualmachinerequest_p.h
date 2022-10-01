// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTORAGEVIRTUALMACHINEREQUEST_P_H
#define QTAWS_CREATESTORAGEVIRTUALMACHINEREQUEST_P_H

#include "fsxrequest_p.h"
#include "createstoragevirtualmachinerequest.h"

namespace QtAws {
namespace FSx {

class CreateStorageVirtualMachineRequest;

class CreateStorageVirtualMachineRequestPrivate : public FSxRequestPrivate {

public:
    CreateStorageVirtualMachineRequestPrivate(const FSxRequest::Action action,
                                   CreateStorageVirtualMachineRequest * const q);
    CreateStorageVirtualMachineRequestPrivate(const CreateStorageVirtualMachineRequestPrivate &other,
                                   CreateStorageVirtualMachineRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStorageVirtualMachineRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
