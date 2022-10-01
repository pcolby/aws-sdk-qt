// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSTOPRESPONSE_P_H
#define QTAWS_BATCHSTOPRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class BatchStopResponse;

class BatchStopResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit BatchStopResponsePrivate(BatchStopResponse * const q);

    void parseBatchStopResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchStopResponse)
    Q_DISABLE_COPY(BatchStopResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
