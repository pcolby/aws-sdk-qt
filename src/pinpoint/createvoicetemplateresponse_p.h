// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOICETEMPLATERESPONSE_P_H
#define QTAWS_CREATEVOICETEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class CreateVoiceTemplateResponse;

class CreateVoiceTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit CreateVoiceTemplateResponsePrivate(CreateVoiceTemplateResponse * const q);

    void parseCreateVoiceTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVoiceTemplateResponse)
    Q_DISABLE_COPY(CreateVoiceTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
