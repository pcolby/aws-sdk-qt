// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASOURCEPERMISSIONSRESPONSE_P_H
#define QTAWS_UPDATEDATASOURCEPERMISSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateDataSourcePermissionsResponse;

class UpdateDataSourcePermissionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateDataSourcePermissionsResponsePrivate(UpdateDataSourcePermissionsResponse * const q);

    void parseUpdateDataSourcePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDataSourcePermissionsResponse)
    Q_DISABLE_COPY(UpdateDataSourcePermissionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
