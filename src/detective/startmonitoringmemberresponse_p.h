// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMONITORINGMEMBERRESPONSE_P_H
#define QTAWS_STARTMONITORINGMEMBERRESPONSE_P_H

#include "detectiveresponse_p.h"

namespace QtAws {
namespace Detective {

class StartMonitoringMemberResponse;

class StartMonitoringMemberResponsePrivate : public DetectiveResponsePrivate {

public:

    explicit StartMonitoringMemberResponsePrivate(StartMonitoringMemberResponse * const q);

    void parseStartMonitoringMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartMonitoringMemberResponse)
    Q_DISABLE_COPY(StartMonitoringMemberResponsePrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
