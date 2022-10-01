// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEDETECTORRESPONSE_P_H
#define QTAWS_BATCHUPDATEDETECTORRESPONSE_P_H

#include "ioteventsdataresponse_p.h"

namespace QtAws {
namespace IoTEventsData {

class BatchUpdateDetectorResponse;

class BatchUpdateDetectorResponsePrivate : public IoTEventsDataResponsePrivate {

public:

    explicit BatchUpdateDetectorResponsePrivate(BatchUpdateDetectorResponse * const q);

    void parseBatchUpdateDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchUpdateDetectorResponse)
    Q_DISABLE_COPY(BatchUpdateDetectorResponsePrivate)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
