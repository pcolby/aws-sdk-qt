// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAVAILABILITYMONITORTESTRESPONSE_H
#define QTAWS_DESCRIBEAVAILABILITYMONITORTESTRESPONSE_H

#include "storagegatewayresponse.h"
#include "describeavailabilitymonitortestrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeAvailabilityMonitorTestResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeAvailabilityMonitorTestResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeAvailabilityMonitorTestResponse(const DescribeAvailabilityMonitorTestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAvailabilityMonitorTestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAvailabilityMonitorTestResponse)
    Q_DISABLE_COPY(DescribeAvailabilityMonitorTestResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
