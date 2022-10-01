// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHREATINTELSETRESPONSE_P_H
#define QTAWS_UPDATETHREATINTELSETRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class UpdateThreatIntelSetResponse;

class UpdateThreatIntelSetResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit UpdateThreatIntelSetResponsePrivate(UpdateThreatIntelSetResponse * const q);

    void parseUpdateThreatIntelSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateThreatIntelSetResponse)
    Q_DISABLE_COPY(UpdateThreatIntelSetResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
