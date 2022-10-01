// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDELIVERYCHANNELSTATUSRESPONSE_H
#define QTAWS_DESCRIBEDELIVERYCHANNELSTATUSRESPONSE_H

#include "configserviceresponse.h"
#include "describedeliverychannelstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeDeliveryChannelStatusResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeDeliveryChannelStatusResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeDeliveryChannelStatusResponse(const DescribeDeliveryChannelStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDeliveryChannelStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeliveryChannelStatusResponse)
    Q_DISABLE_COPY(DescribeDeliveryChannelStatusResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
