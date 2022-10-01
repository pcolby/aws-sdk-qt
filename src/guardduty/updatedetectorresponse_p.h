// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORRESPONSE_P_H
#define QTAWS_UPDATEDETECTORRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class UpdateDetectorResponse;

class UpdateDetectorResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit UpdateDetectorResponsePrivate(UpdateDetectorResponse * const q);

    void parseUpdateDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDetectorResponse)
    Q_DISABLE_COPY(UpdateDetectorResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
