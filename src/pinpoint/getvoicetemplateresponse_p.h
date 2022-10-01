// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICETEMPLATERESPONSE_P_H
#define QTAWS_GETVOICETEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetVoiceTemplateResponse;

class GetVoiceTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetVoiceTemplateResponsePrivate(GetVoiceTemplateResponse * const q);

    void parseGetVoiceTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVoiceTemplateResponse)
    Q_DISABLE_COPY(GetVoiceTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
