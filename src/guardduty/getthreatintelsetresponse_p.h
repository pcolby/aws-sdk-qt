// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHREATINTELSETRESPONSE_P_H
#define QTAWS_GETTHREATINTELSETRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class GetThreatIntelSetResponse;

class GetThreatIntelSetResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit GetThreatIntelSetResponsePrivate(GetThreatIntelSetResponse * const q);

    void parseGetThreatIntelSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetThreatIntelSetResponse)
    Q_DISABLE_COPY(GetThreatIntelSetResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
