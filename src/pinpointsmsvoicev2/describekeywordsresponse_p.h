// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKEYWORDSRESPONSE_P_H
#define QTAWS_DESCRIBEKEYWORDSRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeKeywordsResponse;

class DescribeKeywordsResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DescribeKeywordsResponsePrivate(DescribeKeywordsResponse * const q);

    void parseDescribeKeywordsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeKeywordsResponse)
    Q_DISABLE_COPY(DescribeKeywordsResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
