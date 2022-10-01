// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHINGRESPONSE_P_H
#define QTAWS_CREATETHINGRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateThingResponse;

class CreateThingResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateThingResponsePrivate(CreateThingResponse * const q);

    void parseCreateThingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateThingResponse)
    Q_DISABLE_COPY(CreateThingResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
