// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMONITORINGMEMBERSRESPONSE_P_H
#define QTAWS_STARTMONITORINGMEMBERSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class StartMonitoringMembersResponse;

class StartMonitoringMembersResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit StartMonitoringMembersResponsePrivate(StartMonitoringMembersResponse * const q);

    void parseStartMonitoringMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartMonitoringMembersResponse)
    Q_DISABLE_COPY(StartMonitoringMembersResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
