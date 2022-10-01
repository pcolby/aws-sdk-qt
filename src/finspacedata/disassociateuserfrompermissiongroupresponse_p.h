// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEUSERFROMPERMISSIONGROUPRESPONSE_P_H
#define QTAWS_DISASSOCIATEUSERFROMPERMISSIONGROUPRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class DisassociateUserFromPermissionGroupResponse;

class DisassociateUserFromPermissionGroupResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit DisassociateUserFromPermissionGroupResponsePrivate(DisassociateUserFromPermissionGroupResponse * const q);

    void parseDisassociateUserFromPermissionGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateUserFromPermissionGroupResponse)
    Q_DISABLE_COPY(DisassociateUserFromPermissionGroupResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
