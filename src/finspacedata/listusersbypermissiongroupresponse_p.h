// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSBYPERMISSIONGROUPRESPONSE_P_H
#define QTAWS_LISTUSERSBYPERMISSIONGROUPRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class ListUsersByPermissionGroupResponse;

class ListUsersByPermissionGroupResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit ListUsersByPermissionGroupResponsePrivate(ListUsersByPermissionGroupResponse * const q);

    void parseListUsersByPermissionGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUsersByPermissionGroupResponse)
    Q_DISABLE_COPY(ListUsersByPermissionGroupResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
