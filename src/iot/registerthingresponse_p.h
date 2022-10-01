// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTHINGRESPONSE_P_H
#define QTAWS_REGISTERTHINGRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class RegisterThingResponse;

class RegisterThingResponsePrivate : public IoTResponsePrivate {

public:

    explicit RegisterThingResponsePrivate(RegisterThingResponse * const q);

    void parseRegisterThingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterThingResponse)
    Q_DISABLE_COPY(RegisterThingResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
