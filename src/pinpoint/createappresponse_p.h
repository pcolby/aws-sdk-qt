// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPRESPONSE_P_H
#define QTAWS_CREATEAPPRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class CreateAppResponse;

class CreateAppResponsePrivate : public PinpointResponsePrivate {

public:

    explicit CreateAppResponsePrivate(CreateAppResponse * const q);

    void parseCreateAppResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAppResponse)
    Q_DISABLE_COPY(CreateAppResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
