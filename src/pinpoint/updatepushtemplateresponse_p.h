// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUSHTEMPLATERESPONSE_P_H
#define QTAWS_UPDATEPUSHTEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdatePushTemplateResponse;

class UpdatePushTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdatePushTemplateResponsePrivate(UpdatePushTemplateResponse * const q);

    void parseUpdatePushTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePushTemplateResponse)
    Q_DISABLE_COPY(UpdatePushTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
