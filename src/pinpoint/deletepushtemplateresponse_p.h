// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUSHTEMPLATERESPONSE_P_H
#define QTAWS_DELETEPUSHTEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeletePushTemplateResponse;

class DeletePushTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeletePushTemplateResponsePrivate(DeletePushTemplateResponse * const q);

    void parseDeletePushTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePushTemplateResponse)
    Q_DISABLE_COPY(DeletePushTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
