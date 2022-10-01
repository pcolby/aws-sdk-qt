// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTORAGEVIRTUALMACHINEREQUEST_P_H
#define QTAWS_DELETESTORAGEVIRTUALMACHINEREQUEST_P_H

#include "fsxrequest_p.h"
#include "deletestoragevirtualmachinerequest.h"

namespace QtAws {
namespace FSx {

class DeleteStorageVirtualMachineRequest;

class DeleteStorageVirtualMachineRequestPrivate : public FSxRequestPrivate {

public:
    DeleteStorageVirtualMachineRequestPrivate(const FSxRequest::Action action,
                                   DeleteStorageVirtualMachineRequest * const q);
    DeleteStorageVirtualMachineRequestPrivate(const DeleteStorageVirtualMachineRequestPrivate &other,
                                   DeleteStorageVirtualMachineRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStorageVirtualMachineRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
