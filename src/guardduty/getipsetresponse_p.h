// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPSETRESPONSE_P_H
#define QTAWS_GETIPSETRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class GetIPSetResponse;

class GetIPSetResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit GetIPSetResponsePrivate(GetIPSetResponse * const q);

    void parseGetIPSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIPSetResponse)
    Q_DISABLE_COPY(GetIPSetResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
