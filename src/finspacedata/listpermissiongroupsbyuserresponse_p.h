// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONGROUPSBYUSERRESPONSE_P_H
#define QTAWS_LISTPERMISSIONGROUPSBYUSERRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class ListPermissionGroupsByUserResponse;

class ListPermissionGroupsByUserResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit ListPermissionGroupsByUserResponsePrivate(ListPermissionGroupsByUserResponse * const q);

    void parseListPermissionGroupsByUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPermissionGroupsByUserResponse)
    Q_DISABLE_COPY(ListPermissionGroupsByUserResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
