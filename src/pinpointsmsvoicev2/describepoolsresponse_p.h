// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPOOLSRESPONSE_P_H
#define QTAWS_DESCRIBEPOOLSRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribePoolsResponse;

class DescribePoolsResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DescribePoolsResponsePrivate(DescribePoolsResponse * const q);

    void parseDescribePoolsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePoolsResponse)
    Q_DISABLE_COPY(DescribePoolsResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
