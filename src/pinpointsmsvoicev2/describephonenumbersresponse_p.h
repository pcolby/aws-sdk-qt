// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPHONENUMBERSRESPONSE_P_H
#define QTAWS_DESCRIBEPHONENUMBERSRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribePhoneNumbersResponse;

class DescribePhoneNumbersResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DescribePhoneNumbersResponsePrivate(DescribePhoneNumbersResponse * const q);

    void parseDescribePhoneNumbersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePhoneNumbersResponse)
    Q_DISABLE_COPY(DescribePhoneNumbersResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
