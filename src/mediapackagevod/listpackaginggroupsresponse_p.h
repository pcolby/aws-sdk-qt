// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGINGGROUPSRESPONSE_P_H
#define QTAWS_LISTPACKAGINGGROUPSRESPONSE_P_H

#include "mediapackagevodresponse_p.h"

namespace QtAws {
namespace MediaPackageVod {

class ListPackagingGroupsResponse;

class ListPackagingGroupsResponsePrivate : public MediaPackageVodResponsePrivate {

public:

    explicit ListPackagingGroupsResponsePrivate(ListPackagingGroupsResponse * const q);

    void parseListPackagingGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPackagingGroupsResponse)
    Q_DISABLE_COPY(ListPackagingGroupsResponsePrivate)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
