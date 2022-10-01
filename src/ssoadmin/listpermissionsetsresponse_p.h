// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONSETSRESPONSE_P_H
#define QTAWS_LISTPERMISSIONSETSRESPONSE_P_H

#include "ssoadminresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class ListPermissionSetsResponse;

class ListPermissionSetsResponsePrivate : public SsoAdminResponsePrivate {

public:

    explicit ListPermissionSetsResponsePrivate(ListPermissionSetsResponse * const q);

    void parseListPermissionSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPermissionSetsResponse)
    Q_DISABLE_COPY(ListPermissionSetsResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
