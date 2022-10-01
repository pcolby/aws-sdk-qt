// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTORAGEVIRTUALMACHINERESPONSE_P_H
#define QTAWS_CREATESTORAGEVIRTUALMACHINERESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class CreateStorageVirtualMachineResponse;

class CreateStorageVirtualMachineResponsePrivate : public FSxResponsePrivate {

public:

    explicit CreateStorageVirtualMachineResponsePrivate(CreateStorageVirtualMachineResponse * const q);

    void parseCreateStorageVirtualMachineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStorageVirtualMachineResponse)
    Q_DISABLE_COPY(CreateStorageVirtualMachineResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
