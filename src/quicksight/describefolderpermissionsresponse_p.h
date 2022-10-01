// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERPERMISSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEFOLDERPERMISSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeFolderPermissionsResponse;

class DescribeFolderPermissionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeFolderPermissionsResponsePrivate(DescribeFolderPermissionsResponse * const q);

    void parseDescribeFolderPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFolderPermissionsResponse)
    Q_DISABLE_COPY(DescribeFolderPermissionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
