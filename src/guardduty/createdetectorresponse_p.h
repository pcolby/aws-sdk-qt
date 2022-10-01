// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDETECTORRESPONSE_P_H
#define QTAWS_CREATEDETECTORRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class CreateDetectorResponse;

class CreateDetectorResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit CreateDetectorResponsePrivate(CreateDetectorResponse * const q);

    void parseCreateDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDetectorResponse)
    Q_DISABLE_COPY(CreateDetectorResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
