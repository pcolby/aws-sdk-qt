// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTORAGEVIRTUALMACHINERESPONSE_H
#define QTAWS_DELETESTORAGEVIRTUALMACHINERESPONSE_H

#include "fsxresponse.h"
#include "deletestoragevirtualmachinerequest.h"

namespace QtAws {
namespace FSx {

class DeleteStorageVirtualMachineResponsePrivate;

class QTAWSFSX_EXPORT DeleteStorageVirtualMachineResponse : public FSxResponse {
    Q_OBJECT

public:
    DeleteStorageVirtualMachineResponse(const DeleteStorageVirtualMachineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStorageVirtualMachineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStorageVirtualMachineResponse)
    Q_DISABLE_COPY(DeleteStorageVirtualMachineResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
