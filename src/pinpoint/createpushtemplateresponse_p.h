// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUSHTEMPLATERESPONSE_P_H
#define QTAWS_CREATEPUSHTEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class CreatePushTemplateResponse;

class CreatePushTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit CreatePushTemplateResponsePrivate(CreatePushTemplateResponse * const q);

    void parseCreatePushTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePushTemplateResponse)
    Q_DISABLE_COPY(CreatePushTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
