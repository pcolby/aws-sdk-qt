// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAVAILABILITYMONITORTESTRESPONSE_H
#define QTAWS_STARTAVAILABILITYMONITORTESTRESPONSE_H

#include "storagegatewayresponse.h"
#include "startavailabilitymonitortestrequest.h"

namespace QtAws {
namespace StorageGateway {

class StartAvailabilityMonitorTestResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT StartAvailabilityMonitorTestResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    StartAvailabilityMonitorTestResponse(const StartAvailabilityMonitorTestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartAvailabilityMonitorTestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAvailabilityMonitorTestResponse)
    Q_DISABLE_COPY(StartAvailabilityMonitorTestResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
