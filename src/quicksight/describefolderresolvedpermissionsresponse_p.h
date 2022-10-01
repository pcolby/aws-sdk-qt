// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERRESOLVEDPERMISSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEFOLDERRESOLVEDPERMISSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeFolderResolvedPermissionsResponse;

class DescribeFolderResolvedPermissionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeFolderResolvedPermissionsResponsePrivate(DescribeFolderResolvedPermissionsResponse * const q);

    void parseDescribeFolderResolvedPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFolderResolvedPermissionsResponse)
    Q_DISABLE_COPY(DescribeFolderResolvedPermissionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
