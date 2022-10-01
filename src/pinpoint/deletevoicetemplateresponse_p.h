// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICETEMPLATERESPONSE_P_H
#define QTAWS_DELETEVOICETEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteVoiceTemplateResponse;

class DeleteVoiceTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteVoiceTemplateResponsePrivate(DeleteVoiceTemplateResponse * const q);

    void parseDeleteVoiceTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceTemplateResponse)
    Q_DISABLE_COPY(DeleteVoiceTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
