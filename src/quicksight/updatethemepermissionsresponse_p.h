// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHEMEPERMISSIONSRESPONSE_P_H
#define QTAWS_UPDATETHEMEPERMISSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateThemePermissionsResponse;

class UpdateThemePermissionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateThemePermissionsResponsePrivate(UpdateThemePermissionsResponse * const q);

    void parseUpdateThemePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateThemePermissionsResponse)
    Q_DISABLE_COPY(UpdateThemePermissionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
