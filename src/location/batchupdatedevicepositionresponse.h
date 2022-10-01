// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEDEVICEPOSITIONRESPONSE_H
#define QTAWS_BATCHUPDATEDEVICEPOSITIONRESPONSE_H

#include "locationresponse.h"
#include "batchupdatedevicepositionrequest.h"

namespace QtAws {
namespace Location {

class BatchUpdateDevicePositionResponsePrivate;

class QTAWSLOCATION_EXPORT BatchUpdateDevicePositionResponse : public LocationResponse {
    Q_OBJECT

public:
    BatchUpdateDevicePositionResponse(const BatchUpdateDevicePositionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchUpdateDevicePositionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdateDevicePositionResponse)
    Q_DISABLE_COPY(BatchUpdateDevicePositionResponse)

};

} // namespace Location
} // namespace QtAws

#endif
