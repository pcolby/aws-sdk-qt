// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTSMSVOICERESPONSE_P_H
#define QTAWS_PINPOINTSMSVOICERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace PinpointSmsVoice {

class PinpointSmsVoiceResponse;

class PinpointSmsVoiceResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit PinpointSmsVoiceResponsePrivate(PinpointSmsVoiceResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PinpointSmsVoiceResponse)
    Q_DISABLE_COPY(PinpointSmsVoiceResponsePrivate)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
