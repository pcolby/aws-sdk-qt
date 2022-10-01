// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATEACTIVEVERSIONRESPONSE_P_H
#define QTAWS_UPDATETEMPLATEACTIVEVERSIONRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateTemplateActiveVersionResponse;

class UpdateTemplateActiveVersionResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateTemplateActiveVersionResponsePrivate(UpdateTemplateActiveVersionResponse * const q);

    void parseUpdateTemplateActiveVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTemplateActiveVersionResponse)
    Q_DISABLE_COPY(UpdateTemplateActiveVersionResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
