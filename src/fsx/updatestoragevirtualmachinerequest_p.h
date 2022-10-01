// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTORAGEVIRTUALMACHINEREQUEST_P_H
#define QTAWS_UPDATESTORAGEVIRTUALMACHINEREQUEST_P_H

#include "fsxrequest_p.h"
#include "updatestoragevirtualmachinerequest.h"

namespace QtAws {
namespace FSx {

class UpdateStorageVirtualMachineRequest;

class UpdateStorageVirtualMachineRequestPrivate : public FSxRequestPrivate {

public:
    UpdateStorageVirtualMachineRequestPrivate(const FSxRequest::Action action,
                                   UpdateStorageVirtualMachineRequest * const q);
    UpdateStorageVirtualMachineRequestPrivate(const UpdateStorageVirtualMachineRequestPrivate &other,
                                   UpdateStorageVirtualMachineRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStorageVirtualMachineRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
