// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPENDLIMITSREQUEST_H
#define QTAWS_DESCRIBESPENDLIMITSREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeSpendLimitsRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribeSpendLimitsRequest : public PinpointSmsVoiceV2Request {

public:
    DescribeSpendLimitsRequest(const DescribeSpendLimitsRequest &other);
    DescribeSpendLimitsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSpendLimitsRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
