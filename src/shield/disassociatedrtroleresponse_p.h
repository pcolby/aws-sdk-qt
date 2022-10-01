// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDRTROLERESPONSE_P_H
#define QTAWS_DISASSOCIATEDRTROLERESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class DisassociateDRTRoleResponse;

class DisassociateDRTRoleResponsePrivate : public ShieldResponsePrivate {

public:

    explicit DisassociateDRTRoleResponsePrivate(DisassociateDRTRoleResponse * const q);

    void parseDisassociateDRTRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateDRTRoleResponse)
    Q_DISABLE_COPY(DisassociateDRTRoleResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
