// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTACTIVITYSTREAMRESPONSE_P_H
#define QTAWS_STARTACTIVITYSTREAMRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class StartActivityStreamResponse;

class StartActivityStreamResponsePrivate : public RdsResponsePrivate {

public:

    explicit StartActivityStreamResponsePrivate(StartActivityStreamResponse * const q);

    void parseStartActivityStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartActivityStreamResponse)
    Q_DISABLE_COPY(StartActivityStreamResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
