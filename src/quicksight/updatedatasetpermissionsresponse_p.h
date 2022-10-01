// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETPERMISSIONSRESPONSE_P_H
#define QTAWS_UPDATEDATASETPERMISSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateDataSetPermissionsResponse;

class UpdateDataSetPermissionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateDataSetPermissionsResponsePrivate(UpdateDataSetPermissionsResponse * const q);

    void parseUpdateDataSetPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDataSetPermissionsResponse)
    Q_DISABLE_COPY(UpdateDataSetPermissionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
