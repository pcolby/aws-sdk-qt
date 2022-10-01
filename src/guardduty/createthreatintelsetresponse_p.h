// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHREATINTELSETRESPONSE_P_H
#define QTAWS_CREATETHREATINTELSETRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class CreateThreatIntelSetResponse;

class CreateThreatIntelSetResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit CreateThreatIntelSetResponsePrivate(CreateThreatIntelSetResponse * const q);

    void parseCreateThreatIntelSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateThreatIntelSetResponse)
    Q_DISABLE_COPY(CreateThreatIntelSetResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
