// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTMESSAGERESPONSE_P_H
#define QTAWS_BATCHPUTMESSAGERESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class BatchPutMessageResponse;

class BatchPutMessageResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit BatchPutMessageResponsePrivate(BatchPutMessageResponse * const q);

    void parseBatchPutMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchPutMessageResponse)
    Q_DISABLE_COPY(BatchPutMessageResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
