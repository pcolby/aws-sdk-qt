// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILTEMPLATERESPONSE_P_H
#define QTAWS_DELETEEMAILTEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteEmailTemplateResponse;

class DeleteEmailTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteEmailTemplateResponsePrivate(DeleteEmailTemplateResponse * const q);

    void parseDeleteEmailTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEmailTemplateResponse)
    Q_DISABLE_COPY(DeleteEmailTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
