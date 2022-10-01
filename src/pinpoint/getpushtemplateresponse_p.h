// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUSHTEMPLATERESPONSE_P_H
#define QTAWS_GETPUSHTEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetPushTemplateResponse;

class GetPushTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetPushTemplateResponsePrivate(GetPushTemplateResponse * const q);

    void parseGetPushTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPushTemplateResponse)
    Q_DISABLE_COPY(GetPushTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
