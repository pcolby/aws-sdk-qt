// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFILTERRESPONSE_P_H
#define QTAWS_GETFILTERRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class GetFilterResponse;

class GetFilterResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit GetFilterResponsePrivate(GetFilterResponse * const q);

    void parseGetFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFilterResponse)
    Q_DISABLE_COPY(GetFilterResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
