// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEMAILTEMPLATERESPONSE_P_H
#define QTAWS_UPDATEEMAILTEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateEmailTemplateResponse;

class UpdateEmailTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateEmailTemplateResponsePrivate(UpdateEmailTemplateResponse * const q);

    void parseUpdateEmailTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEmailTemplateResponse)
    Q_DISABLE_COPY(UpdateEmailTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
