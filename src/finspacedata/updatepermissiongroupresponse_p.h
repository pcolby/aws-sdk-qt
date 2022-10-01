// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPERMISSIONGROUPRESPONSE_P_H
#define QTAWS_UPDATEPERMISSIONGROUPRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class UpdatePermissionGroupResponse;

class UpdatePermissionGroupResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit UpdatePermissionGroupResponsePrivate(UpdatePermissionGroupResponse * const q);

    void parseUpdatePermissionGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePermissionGroupResponse)
    Q_DISABLE_COPY(UpdatePermissionGroupResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
