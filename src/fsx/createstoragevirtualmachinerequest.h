// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTORAGEVIRTUALMACHINEREQUEST_H
#define QTAWS_CREATESTORAGEVIRTUALMACHINEREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class CreateStorageVirtualMachineRequestPrivate;

class QTAWSFSX_EXPORT CreateStorageVirtualMachineRequest : public FSxRequest {

public:
    CreateStorageVirtualMachineRequest(const CreateStorageVirtualMachineRequest &other);
    CreateStorageVirtualMachineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStorageVirtualMachineRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
