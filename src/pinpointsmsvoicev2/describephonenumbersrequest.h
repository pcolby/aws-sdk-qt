// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPHONENUMBERSREQUEST_H
#define QTAWS_DESCRIBEPHONENUMBERSREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribePhoneNumbersRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribePhoneNumbersRequest : public PinpointSmsVoiceV2Request {

public:
    DescribePhoneNumbersRequest(const DescribePhoneNumbersRequest &other);
    DescribePhoneNumbersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePhoneNumbersRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
