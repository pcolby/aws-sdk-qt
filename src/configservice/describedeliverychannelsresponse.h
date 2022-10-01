// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDELIVERYCHANNELSRESPONSE_H
#define QTAWS_DESCRIBEDELIVERYCHANNELSRESPONSE_H

#include "configserviceresponse.h"
#include "describedeliverychannelsrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeDeliveryChannelsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeDeliveryChannelsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeDeliveryChannelsResponse(const DescribeDeliveryChannelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDeliveryChannelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeliveryChannelsResponse)
    Q_DISABLE_COPY(DescribeDeliveryChannelsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
