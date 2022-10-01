// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEVICEPOSITIONRESPONSE_H
#define QTAWS_BATCHGETDEVICEPOSITIONRESPONSE_H

#include "locationresponse.h"
#include "batchgetdevicepositionrequest.h"

namespace QtAws {
namespace Location {

class BatchGetDevicePositionResponsePrivate;

class QTAWSLOCATION_EXPORT BatchGetDevicePositionResponse : public LocationResponse {
    Q_OBJECT

public:
    BatchGetDevicePositionResponse(const BatchGetDevicePositionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetDevicePositionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetDevicePositionResponse)
    Q_DISABLE_COPY(BatchGetDevicePositionResponse)

};

} // namespace Location
} // namespace QtAws

#endif
