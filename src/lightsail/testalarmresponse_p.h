// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTALARMRESPONSE_P_H
#define QTAWS_TESTALARMRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class TestAlarmResponse;

class TestAlarmResponsePrivate : public LightsailResponsePrivate {

public:

    explicit TestAlarmResponsePrivate(TestAlarmResponse * const q);

    void parseTestAlarmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestAlarmResponse)
    Q_DISABLE_COPY(TestAlarmResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
