// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRIGGERRESPONSE_P_H
#define QTAWS_STOPTRIGGERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class StopTriggerResponse;

class StopTriggerResponsePrivate : public GlueResponsePrivate {

public:

    explicit StopTriggerResponsePrivate(StopTriggerResponse * const q);

    void parseStopTriggerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopTriggerResponse)
    Q_DISABLE_COPY(StopTriggerResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
