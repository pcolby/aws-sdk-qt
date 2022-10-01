// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTORAGEVIRTUALMACHINERESPONSE_P_H
#define QTAWS_DELETESTORAGEVIRTUALMACHINERESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class DeleteStorageVirtualMachineResponse;

class DeleteStorageVirtualMachineResponsePrivate : public FSxResponsePrivate {

public:

    explicit DeleteStorageVirtualMachineResponsePrivate(DeleteStorageVirtualMachineResponse * const q);

    void parseDeleteStorageVirtualMachineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStorageVirtualMachineResponse)
    Q_DISABLE_COPY(DeleteStorageVirtualMachineResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
