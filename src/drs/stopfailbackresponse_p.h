// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFAILBACKRESPONSE_P_H
#define QTAWS_STOPFAILBACKRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class StopFailbackResponse;

class StopFailbackResponsePrivate : public DrsResponsePrivate {

public:

    explicit StopFailbackResponsePrivate(StopFailbackResponse * const q);

    void parseStopFailbackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopFailbackResponse)
    Q_DISABLE_COPY(StopFailbackResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
