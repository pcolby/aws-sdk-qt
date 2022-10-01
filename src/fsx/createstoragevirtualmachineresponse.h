// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTORAGEVIRTUALMACHINERESPONSE_H
#define QTAWS_CREATESTORAGEVIRTUALMACHINERESPONSE_H

#include "fsxresponse.h"
#include "createstoragevirtualmachinerequest.h"

namespace QtAws {
namespace FSx {

class CreateStorageVirtualMachineResponsePrivate;

class QTAWSFSX_EXPORT CreateStorageVirtualMachineResponse : public FSxResponse {
    Q_OBJECT

public:
    CreateStorageVirtualMachineResponse(const CreateStorageVirtualMachineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStorageVirtualMachineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStorageVirtualMachineResponse)
    Q_DISABLE_COPY(CreateStorageVirtualMachineResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
