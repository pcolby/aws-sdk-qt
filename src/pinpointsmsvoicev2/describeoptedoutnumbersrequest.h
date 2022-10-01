// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTEDOUTNUMBERSREQUEST_H
#define QTAWS_DESCRIBEOPTEDOUTNUMBERSREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeOptedOutNumbersRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribeOptedOutNumbersRequest : public PinpointSmsVoiceV2Request {

public:
    DescribeOptedOutNumbersRequest(const DescribeOptedOutNumbersRequest &other);
    DescribeOptedOutNumbersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOptedOutNumbersRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
