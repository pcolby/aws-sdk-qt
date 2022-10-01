// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSRESPONSE_P_H
#define QTAWS_LISTGROUPSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListGroupsResponse;

class ListGroupsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListGroupsResponsePrivate(ListGroupsResponse * const q);

    void parseListGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGroupsResponse)
    Q_DISABLE_COPY(ListGroupsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
