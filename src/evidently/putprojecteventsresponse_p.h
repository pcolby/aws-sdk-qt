// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROJECTEVENTSRESPONSE_P_H
#define QTAWS_PUTPROJECTEVENTSRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class PutProjectEventsResponse;

class PutProjectEventsResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit PutProjectEventsResponsePrivate(PutProjectEventsResponse * const q);

    void parsePutProjectEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutProjectEventsResponse)
    Q_DISABLE_COPY(PutProjectEventsResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
