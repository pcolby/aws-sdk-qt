// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERGROUPSRESPONSE_P_H
#define QTAWS_LISTUSERGROUPSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListUserGroupsResponse;

class ListUserGroupsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListUserGroupsResponsePrivate(ListUserGroupsResponse * const q);

    void parseListUserGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUserGroupsResponse)
    Q_DISABLE_COPY(ListUserGroupsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
