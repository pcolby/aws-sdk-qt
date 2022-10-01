// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTSMSVOICEV2RESPONSE_P_H
#define QTAWS_PINPOINTSMSVOICEV2RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class PinpointSmsVoiceV2Response;

class PinpointSmsVoiceV2ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit PinpointSmsVoiceV2ResponsePrivate(PinpointSmsVoiceV2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PinpointSmsVoiceV2Response)
    Q_DISABLE_COPY(PinpointSmsVoiceV2ResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
