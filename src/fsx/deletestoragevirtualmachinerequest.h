// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTORAGEVIRTUALMACHINEREQUEST_H
#define QTAWS_DELETESTORAGEVIRTUALMACHINEREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class DeleteStorageVirtualMachineRequestPrivate;

class QTAWSFSX_EXPORT DeleteStorageVirtualMachineRequest : public FSxRequest {

public:
    DeleteStorageVirtualMachineRequest(const DeleteStorageVirtualMachineRequest &other);
    DeleteStorageVirtualMachineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStorageVirtualMachineRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
