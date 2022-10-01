// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHREATINTELSETSRESPONSE_P_H
#define QTAWS_LISTTHREATINTELSETSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class ListThreatIntelSetsResponse;

class ListThreatIntelSetsResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit ListThreatIntelSetsResponsePrivate(ListThreatIntelSetsResponse * const q);

    void parseListThreatIntelSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListThreatIntelSetsResponse)
    Q_DISABLE_COPY(ListThreatIntelSetsResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
