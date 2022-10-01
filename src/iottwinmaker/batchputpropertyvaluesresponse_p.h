// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTPROPERTYVALUESRESPONSE_P_H
#define QTAWS_BATCHPUTPROPERTYVALUESRESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class BatchPutPropertyValuesResponse;

class BatchPutPropertyValuesResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit BatchPutPropertyValuesResponsePrivate(BatchPutPropertyValuesResponse * const q);

    void parseBatchPutPropertyValuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchPutPropertyValuesResponse)
    Q_DISABLE_COPY(BatchPutPropertyValuesResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
