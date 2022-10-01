// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICETEMPLATERESPONSE_P_H
#define QTAWS_UPDATEVOICETEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateVoiceTemplateResponse;

class UpdateVoiceTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateVoiceTemplateResponsePrivate(UpdateVoiceTemplateResponse * const q);

    void parseUpdateVoiceTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVoiceTemplateResponse)
    Q_DISABLE_COPY(UpdateVoiceTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
