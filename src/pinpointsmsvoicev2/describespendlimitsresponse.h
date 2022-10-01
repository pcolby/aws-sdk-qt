// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPENDLIMITSRESPONSE_H
#define QTAWS_DESCRIBESPENDLIMITSRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "describespendlimitsrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeSpendLimitsResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribeSpendLimitsResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DescribeSpendLimitsResponse(const DescribeSpendLimitsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSpendLimitsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSpendLimitsResponse)
    Q_DISABLE_COPY(DescribeSpendLimitsResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
