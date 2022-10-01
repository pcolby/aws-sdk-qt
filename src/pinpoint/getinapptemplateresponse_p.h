// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINAPPTEMPLATERESPONSE_P_H
#define QTAWS_GETINAPPTEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetInAppTemplateResponse;

class GetInAppTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetInAppTemplateResponsePrivate(GetInAppTemplateResponse * const q);

    void parseGetInAppTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInAppTemplateResponse)
    Q_DISABLE_COPY(GetInAppTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
