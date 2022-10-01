// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINAPPTEMPLATERESPONSE_P_H
#define QTAWS_DELETEINAPPTEMPLATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteInAppTemplateResponse;

class DeleteInAppTemplateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteInAppTemplateResponsePrivate(DeleteInAppTemplateResponse * const q);

    void parseDeleteInAppTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInAppTemplateResponse)
    Q_DISABLE_COPY(DeleteInAppTemplateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
