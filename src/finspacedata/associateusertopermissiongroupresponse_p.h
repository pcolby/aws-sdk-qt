// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEUSERTOPERMISSIONGROUPRESPONSE_P_H
#define QTAWS_ASSOCIATEUSERTOPERMISSIONGROUPRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class AssociateUserToPermissionGroupResponse;

class AssociateUserToPermissionGroupResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit AssociateUserToPermissionGroupResponsePrivate(AssociateUserToPermissionGroupResponse * const q);

    void parseAssociateUserToPermissionGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateUserToPermissionGroupResponse)
    Q_DISABLE_COPY(AssociateUserToPermissionGroupResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
