// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNARCHIVEFINDINGSRESPONSE_P_H
#define QTAWS_UNARCHIVEFINDINGSRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class UnarchiveFindingsResponse;

class UnarchiveFindingsResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit UnarchiveFindingsResponsePrivate(UnarchiveFindingsResponse * const q);

    void parseUnarchiveFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnarchiveFindingsResponse)
    Q_DISABLE_COPY(UnarchiveFindingsResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
