// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMSTEMPLATERESPONSE_P_H
#define QTAWS_UPDATESMSTEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateSmsTemplateResponse;

class UpdateSmsTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateSmsTemplateResponsePrivate(UpdateSmsTemplateResponse * const q);

    void parseUpdateSmsTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSmsTemplateResponse)
    Q_DISABLE_COPY(UpdateSmsTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
