// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERHIERARCHYGROUPSRESPONSE_P_H
#define QTAWS_LISTUSERHIERARCHYGROUPSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListUserHierarchyGroupsResponse;

class ListUserHierarchyGroupsResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListUserHierarchyGroupsResponsePrivate(ListUserHierarchyGroupsResponse * const q);

    void parseListUserHierarchyGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUserHierarchyGroupsResponse)
    Q_DISABLE_COPY(ListUserHierarchyGroupsResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
