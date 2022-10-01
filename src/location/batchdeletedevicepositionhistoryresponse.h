// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEDEVICEPOSITIONHISTORYRESPONSE_H
#define QTAWS_BATCHDELETEDEVICEPOSITIONHISTORYRESPONSE_H

#include "locationresponse.h"
#include "batchdeletedevicepositionhistoryrequest.h"

namespace QtAws {
namespace Location {

class BatchDeleteDevicePositionHistoryResponsePrivate;

class QTAWSLOCATION_EXPORT BatchDeleteDevicePositionHistoryResponse : public LocationResponse {
    Q_OBJECT

public:
    BatchDeleteDevicePositionHistoryResponse(const BatchDeleteDevicePositionHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteDevicePositionHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteDevicePositionHistoryResponse)
    Q_DISABLE_COPY(BatchDeleteDevicePositionHistoryResponse)

};

} // namespace Location
} // namespace QtAws

#endif
