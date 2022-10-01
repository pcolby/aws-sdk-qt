// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINAPPTEMPLATERESPONSE_P_H
#define QTAWS_UPDATEINAPPTEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateInAppTemplateResponse;

class UpdateInAppTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateInAppTemplateResponsePrivate(UpdateInAppTemplateResponse * const q);

    void parseUpdateInAppTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateInAppTemplateResponse)
    Q_DISABLE_COPY(UpdateInAppTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
