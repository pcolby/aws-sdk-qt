// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEDEVICEPOSITIONHISTORYRESPONSE_P_H
#define QTAWS_BATCHDELETEDEVICEPOSITIONHISTORYRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class BatchDeleteDevicePositionHistoryResponse;

class BatchDeleteDevicePositionHistoryResponsePrivate : public LocationResponsePrivate {

public:

    explicit BatchDeleteDevicePositionHistoryResponsePrivate(BatchDeleteDevicePositionHistoryResponse * const q);

    void parseBatchDeleteDevicePositionHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteDevicePositionHistoryResponse)
    Q_DISABLE_COPY(BatchDeleteDevicePositionHistoryResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
