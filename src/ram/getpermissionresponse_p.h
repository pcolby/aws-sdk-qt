// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONRESPONSE_P_H
#define QTAWS_GETPERMISSIONRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class GetPermissionResponse;

class GetPermissionResponsePrivate : public RamResponsePrivate {

public:

    explicit GetPermissionResponsePrivate(GetPermissionResponse * const q);

    void parseGetPermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPermissionResponse)
    Q_DISABLE_COPY(GetPermissionResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
