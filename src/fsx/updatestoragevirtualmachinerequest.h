// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTORAGEVIRTUALMACHINEREQUEST_H
#define QTAWS_UPDATESTORAGEVIRTUALMACHINEREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class UpdateStorageVirtualMachineRequestPrivate;

class QTAWSFSX_EXPORT UpdateStorageVirtualMachineRequest : public FSxRequest {

public:
    UpdateStorageVirtualMachineRequest(const UpdateStorageVirtualMachineRequest &other);
    UpdateStorageVirtualMachineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStorageVirtualMachineRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
