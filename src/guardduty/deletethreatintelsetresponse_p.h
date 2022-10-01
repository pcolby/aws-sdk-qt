// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHREATINTELSETRESPONSE_P_H
#define QTAWS_DELETETHREATINTELSETRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class DeleteThreatIntelSetResponse;

class DeleteThreatIntelSetResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit DeleteThreatIntelSetResponsePrivate(DeleteThreatIntelSetResponse * const q);

    void parseDeleteThreatIntelSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteThreatIntelSetResponse)
    Q_DISABLE_COPY(DeleteThreatIntelSetResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
