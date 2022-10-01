// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHTHINGPRINCIPALRESPONSE_P_H
#define QTAWS_DETACHTHINGPRINCIPALRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DetachThingPrincipalResponse;

class DetachThingPrincipalResponsePrivate : public IoTResponsePrivate {

public:

    explicit DetachThingPrincipalResponsePrivate(DetachThingPrincipalResponse * const q);

    void parseDetachThingPrincipalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachThingPrincipalResponse)
    Q_DISABLE_COPY(DetachThingPrincipalResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
