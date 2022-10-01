// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTARTRESPONSE_P_H
#define QTAWS_BATCHSTARTRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class BatchStartResponse;

class BatchStartResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit BatchStartResponsePrivate(BatchStartResponse * const q);

    void parseBatchStartResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchStartResponse)
    Q_DISABLE_COPY(BatchStartResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
