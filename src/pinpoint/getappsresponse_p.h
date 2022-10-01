// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPSRESPONSE_P_H
#define QTAWS_GETAPPSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetAppsResponse;

class GetAppsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetAppsResponsePrivate(GetAppsResponse * const q);

    void parseGetAppsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAppsResponse)
    Q_DISABLE_COPY(GetAppsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
