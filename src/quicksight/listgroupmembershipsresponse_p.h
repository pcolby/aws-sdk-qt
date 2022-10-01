// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPMEMBERSHIPSRESPONSE_P_H
#define QTAWS_LISTGROUPMEMBERSHIPSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class ListGroupMembershipsResponse;

class ListGroupMembershipsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit ListGroupMembershipsResponsePrivate(ListGroupMembershipsResponse * const q);

    void parseListGroupMembershipsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGroupMembershipsResponse)
    Q_DISABLE_COPY(ListGroupMembershipsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
