// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTHINGREGISTRATIONTASKRESPONSE_P_H
#define QTAWS_STARTTHINGREGISTRATIONTASKRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class StartThingRegistrationTaskResponse;

class StartThingRegistrationTaskResponsePrivate : public IoTResponsePrivate {

public:

    explicit StartThingRegistrationTaskResponsePrivate(StartThingRegistrationTaskResponse * const q);

    void parseStartThingRegistrationTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartThingRegistrationTaskResponse)
    Q_DISABLE_COPY(StartThingRegistrationTaskResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
