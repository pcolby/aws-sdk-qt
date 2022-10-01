// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSMSTEMPLATERESPONSE_P_H
#define QTAWS_GETSMSTEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetSmsTemplateResponse;

class GetSmsTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetSmsTemplateResponsePrivate(GetSmsTemplateResponse * const q);

    void parseGetSmsTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSmsTemplateResponse)
    Q_DISABLE_COPY(GetSmsTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
