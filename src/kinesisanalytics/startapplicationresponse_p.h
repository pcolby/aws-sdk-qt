// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPLICATIONRESPONSE_P_H
#define QTAWS_STARTAPPLICATIONRESPONSE_P_H

#include "kinesisanalyticsresponse_p.h"

namespace QtAws {
namespace KinesisAnalytics {

class StartApplicationResponse;

class StartApplicationResponsePrivate : public KinesisAnalyticsResponsePrivate {

public:

    explicit StartApplicationResponsePrivate(StartApplicationResponse * const q);

    void parseStartApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartApplicationResponse)
    Q_DISABLE_COPY(StartApplicationResponsePrivate)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
