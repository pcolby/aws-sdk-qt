// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDGROUPSRESPONSE_P_H
#define QTAWS_LISTASSOCIATEDGROUPSRESPONSE_P_H

#include "syntheticsresponse_p.h"

namespace QtAws {
namespace Synthetics {

class ListAssociatedGroupsResponse;

class ListAssociatedGroupsResponsePrivate : public SyntheticsResponsePrivate {

public:

    explicit ListAssociatedGroupsResponsePrivate(ListAssociatedGroupsResponse * const q);

    void parseListAssociatedGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssociatedGroupsResponse)
    Q_DISABLE_COPY(ListAssociatedGroupsResponsePrivate)

};

} // namespace Synthetics
} // namespace QtAws

#endif
