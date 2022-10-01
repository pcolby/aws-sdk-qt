// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRUMEVENTSRESPONSE_P_H
#define QTAWS_PUTRUMEVENTSRESPONSE_P_H

#include "rumresponse_p.h"

namespace QtAws {
namespace Rum {

class PutRumEventsResponse;

class PutRumEventsResponsePrivate : public RumResponsePrivate {

public:

    explicit PutRumEventsResponsePrivate(PutRumEventsResponse * const q);

    void parsePutRumEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRumEventsResponse)
    Q_DISABLE_COPY(PutRumEventsResponsePrivate)

};

} // namespace Rum
} // namespace QtAws

#endif
