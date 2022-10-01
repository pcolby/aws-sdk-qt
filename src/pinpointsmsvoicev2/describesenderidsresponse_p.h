// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESENDERIDSRESPONSE_P_H
#define QTAWS_DESCRIBESENDERIDSRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeSenderIdsResponse;

class DescribeSenderIdsResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DescribeSenderIdsResponsePrivate(DescribeSenderIdsResponse * const q);

    void parseDescribeSenderIdsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSenderIdsResponse)
    Q_DISABLE_COPY(DescribeSenderIdsResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
