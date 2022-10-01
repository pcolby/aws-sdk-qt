// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSRESPONSE_P_H
#define QTAWS_GETFINDINGSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class GetFindingsResponse;

class GetFindingsResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit GetFindingsResponsePrivate(GetFindingsResponse * const q);

    void parseGetFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFindingsResponse)
    Q_DISABLE_COPY(GetFindingsResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
