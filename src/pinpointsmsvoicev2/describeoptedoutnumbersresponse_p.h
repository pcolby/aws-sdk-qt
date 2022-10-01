// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTEDOUTNUMBERSRESPONSE_P_H
#define QTAWS_DESCRIBEOPTEDOUTNUMBERSRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeOptedOutNumbersResponse;

class DescribeOptedOutNumbersResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DescribeOptedOutNumbersResponsePrivate(DescribeOptedOutNumbersResponse * const q);

    void parseDescribeOptedOutNumbersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOptedOutNumbersResponse)
    Q_DISABLE_COPY(DescribeOptedOutNumbersResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
