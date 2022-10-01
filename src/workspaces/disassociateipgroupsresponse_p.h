// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEIPGROUPSRESPONSE_P_H
#define QTAWS_DISASSOCIATEIPGROUPSRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DisassociateIpGroupsResponse;

class DisassociateIpGroupsResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DisassociateIpGroupsResponsePrivate(DisassociateIpGroupsResponse * const q);

    void parseDisassociateIpGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateIpGroupsResponse)
    Q_DISABLE_COPY(DisassociateIpGroupsResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
