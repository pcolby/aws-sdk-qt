// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORRESPONSE_P_H
#define QTAWS_GETDETECTORRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class GetDetectorResponse;

class GetDetectorResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit GetDetectorResponsePrivate(GetDetectorResponse * const q);

    void parseGetDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDetectorResponse)
    Q_DISABLE_COPY(GetDetectorResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
