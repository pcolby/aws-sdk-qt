// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONVERSIONSRESPONSE_P_H
#define QTAWS_LISTPERMISSIONVERSIONSRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class ListPermissionVersionsResponse;

class ListPermissionVersionsResponsePrivate : public RamResponsePrivate {

public:

    explicit ListPermissionVersionsResponsePrivate(ListPermissionVersionsResponse * const q);

    void parseListPermissionVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPermissionVersionsResponse)
    Q_DISABLE_COPY(ListPermissionVersionsResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
