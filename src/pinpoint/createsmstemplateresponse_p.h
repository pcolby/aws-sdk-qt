// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESMSTEMPLATERESPONSE_P_H
#define QTAWS_CREATESMSTEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class CreateSmsTemplateResponse;

class CreateSmsTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit CreateSmsTemplateResponsePrivate(CreateSmsTemplateResponse * const q);

    void parseCreateSmsTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSmsTemplateResponse)
    Q_DISABLE_COPY(CreateSmsTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
