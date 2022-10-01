// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEIPGROUPSRESPONSE_P_H
#define QTAWS_ASSOCIATEIPGROUPSRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class AssociateIpGroupsResponse;

class AssociateIpGroupsResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit AssociateIpGroupsResponsePrivate(AssociateIpGroupsResponse * const q);

    void parseAssociateIpGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateIpGroupsResponse)
    Q_DISABLE_COPY(AssociateIpGroupsResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
