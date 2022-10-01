// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONGROUPRESPONSE_P_H
#define QTAWS_GETPERMISSIONGROUPRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class GetPermissionGroupResponse;

class GetPermissionGroupResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit GetPermissionGroupResponsePrivate(GetPermissionGroupResponse * const q);

    void parseGetPermissionGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPermissionGroupResponse)
    Q_DISABLE_COPY(GetPermissionGroupResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
