// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULESOFIPGROUPRESPONSE_P_H
#define QTAWS_UPDATERULESOFIPGROUPRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateRulesOfIpGroupResponse;

class UpdateRulesOfIpGroupResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit UpdateRulesOfIpGroupResponsePrivate(UpdateRulesOfIpGroupResponse * const q);

    void parseUpdateRulesOfIpGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRulesOfIpGroupResponse)
    Q_DISABLE_COPY(UpdateRulesOfIpGroupResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
