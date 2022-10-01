// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPGROUPRESPONSE_P_H
#define QTAWS_CREATEIPGROUPRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class CreateIpGroupResponse;

class CreateIpGroupResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit CreateIpGroupResponsePrivate(CreateIpGroupResponse * const q);

    void parseCreateIpGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateIpGroupResponse)
    Q_DISABLE_COPY(CreateIpGroupResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
