// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESMSTEMPLATERESPONSE_P_H
#define QTAWS_DELETESMSTEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteSmsTemplateResponse;

class DeleteSmsTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteSmsTemplateResponsePrivate(DeleteSmsTemplateResponse * const q);

    void parseDeleteSmsTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSmsTemplateResponse)
    Q_DISABLE_COPY(DeleteSmsTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
