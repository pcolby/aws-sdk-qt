// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFOLDERPERMISSIONSRESPONSE_P_H
#define QTAWS_UPDATEFOLDERPERMISSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateFolderPermissionsResponse;

class UpdateFolderPermissionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateFolderPermissionsResponsePrivate(UpdateFolderPermissionsResponse * const q);

    void parseUpdateFolderPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFolderPermissionsResponse)
    Q_DISABLE_COPY(UpdateFolderPermissionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
