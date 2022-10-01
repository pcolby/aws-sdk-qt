// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTORAGEVIRTUALMACHINERESPONSE_H
#define QTAWS_UPDATESTORAGEVIRTUALMACHINERESPONSE_H

#include "fsxresponse.h"
#include "updatestoragevirtualmachinerequest.h"

namespace QtAws {
namespace FSx {

class UpdateStorageVirtualMachineResponsePrivate;

class QTAWSFSX_EXPORT UpdateStorageVirtualMachineResponse : public FSxResponse {
    Q_OBJECT

public:
    UpdateStorageVirtualMachineResponse(const UpdateStorageVirtualMachineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateStorageVirtualMachineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStorageVirtualMachineResponse)
    Q_DISABLE_COPY(UpdateStorageVirtualMachineResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
