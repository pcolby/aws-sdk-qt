// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINAPPTEMPLATERESPONSE_P_H
#define QTAWS_CREATEINAPPTEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class CreateInAppTemplateResponse;

class CreateInAppTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit CreateInAppTemplateResponsePrivate(CreateInAppTemplateResponse * const q);

    void parseCreateInAppTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInAppTemplateResponse)
    Q_DISABLE_COPY(CreateInAppTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
