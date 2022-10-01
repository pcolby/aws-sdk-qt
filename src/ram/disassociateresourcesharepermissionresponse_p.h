// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOURCESHAREPERMISSIONRESPONSE_P_H
#define QTAWS_DISASSOCIATERESOURCESHAREPERMISSIONRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class DisassociateResourceSharePermissionResponse;

class DisassociateResourceSharePermissionResponsePrivate : public RamResponsePrivate {

public:

    explicit DisassociateResourceSharePermissionResponsePrivate(DisassociateResourceSharePermissionResponse * const q);

    void parseDisassociateResourceSharePermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateResourceSharePermissionResponse)
    Q_DISABLE_COPY(DisassociateResourceSharePermissionResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
