// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONGROUPSRESPONSE_P_H
#define QTAWS_LISTPERMISSIONGROUPSRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class ListPermissionGroupsResponse;

class ListPermissionGroupsResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit ListPermissionGroupsResponsePrivate(ListPermissionGroupsResponse * const q);

    void parseListPermissionGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPermissionGroupsResponse)
    Q_DISABLE_COPY(ListPermissionGroupsResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
