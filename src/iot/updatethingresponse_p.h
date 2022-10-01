// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGRESPONSE_P_H
#define QTAWS_UPDATETHINGRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateThingResponse;

class UpdateThingResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateThingResponsePrivate(UpdateThingResponse * const q);

    void parseUpdateThingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateThingResponse)
    Q_DISABLE_COPY(UpdateThingResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
