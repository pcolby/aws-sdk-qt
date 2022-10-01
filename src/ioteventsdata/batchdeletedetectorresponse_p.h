// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEDETECTORRESPONSE_P_H
#define QTAWS_BATCHDELETEDETECTORRESPONSE_P_H

#include "ioteventsdataresponse_p.h"

namespace QtAws {
namespace IoTEventsData {

class BatchDeleteDetectorResponse;

class BatchDeleteDetectorResponsePrivate : public IoTEventsDataResponsePrivate {

public:

    explicit BatchDeleteDetectorResponsePrivate(BatchDeleteDetectorResponse * const q);

    void parseBatchDeleteDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteDetectorResponse)
    Q_DISABLE_COPY(BatchDeleteDetectorResponsePrivate)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
