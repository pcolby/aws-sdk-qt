// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONGROUPRESPONSE_P_H
#define QTAWS_DELETEPERMISSIONGROUPRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class DeletePermissionGroupResponse;

class DeletePermissionGroupResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit DeletePermissionGroupResponsePrivate(DeletePermissionGroupResponse * const q);

    void parseDeletePermissionGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePermissionGroupResponse)
    Q_DISABLE_COPY(DeletePermissionGroupResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
