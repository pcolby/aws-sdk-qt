// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTMESSAGERESPONSE_P_H
#define QTAWS_BATCHPUTMESSAGERESPONSE_P_H

#include "ioteventsdataresponse_p.h"

namespace QtAws {
namespace IoTEventsData {

class BatchPutMessageResponse;

class BatchPutMessageResponsePrivate : public IoTEventsDataResponsePrivate {

public:

    explicit BatchPutMessageResponsePrivate(BatchPutMessageResponse * const q);

    void parseBatchPutMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchPutMessageResponse)
    Q_DISABLE_COPY(BatchPutMessageResponsePrivate)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
