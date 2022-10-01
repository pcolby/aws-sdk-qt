// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTORAGEVIRTUALMACHINERESPONSE_P_H
#define QTAWS_UPDATESTORAGEVIRTUALMACHINERESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class UpdateStorageVirtualMachineResponse;

class UpdateStorageVirtualMachineResponsePrivate : public FSxResponsePrivate {

public:

    explicit UpdateStorageVirtualMachineResponsePrivate(UpdateStorageVirtualMachineResponse * const q);

    void parseUpdateStorageVirtualMachineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStorageVirtualMachineResponse)
    Q_DISABLE_COPY(UpdateStorageVirtualMachineResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
