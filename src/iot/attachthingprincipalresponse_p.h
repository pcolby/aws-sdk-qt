// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHTHINGPRINCIPALRESPONSE_P_H
#define QTAWS_ATTACHTHINGPRINCIPALRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class AttachThingPrincipalResponse;

class AttachThingPrincipalResponsePrivate : public IoTResponsePrivate {

public:

    explicit AttachThingPrincipalResponsePrivate(AttachThingPrincipalResponse * const q);

    void parseAttachThingPrincipalResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachThingPrincipalResponse)
    Q_DISABLE_COPY(AttachThingPrincipalResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
