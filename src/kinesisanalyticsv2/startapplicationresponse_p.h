// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPLICATIONRESPONSE_P_H
#define QTAWS_STARTAPPLICATIONRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class StartApplicationResponse;

class StartApplicationResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit StartApplicationResponsePrivate(StartApplicationResponse * const q);

    void parseStartApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartApplicationResponse)
    Q_DISABLE_COPY(StartApplicationResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
