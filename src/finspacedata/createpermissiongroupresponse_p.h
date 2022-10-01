// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPERMISSIONGROUPRESPONSE_P_H
#define QTAWS_CREATEPERMISSIONGROUPRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class CreatePermissionGroupResponse;

class CreatePermissionGroupResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit CreatePermissionGroupResponsePrivate(CreatePermissionGroupResponse * const q);

    void parseCreatePermissionGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePermissionGroupResponse)
    Q_DISABLE_COPY(CreatePermissionGroupResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
