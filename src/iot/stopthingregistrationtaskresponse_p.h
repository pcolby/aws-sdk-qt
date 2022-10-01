// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTHINGREGISTRATIONTASKRESPONSE_P_H
#define QTAWS_STOPTHINGREGISTRATIONTASKRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class StopThingRegistrationTaskResponse;

class StopThingRegistrationTaskResponsePrivate : public IoTResponsePrivate {

public:

    explicit StopThingRegistrationTaskResponsePrivate(StopThingRegistrationTaskResponse * const q);

    void parseStopThingRegistrationTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopThingRegistrationTaskResponse)
    Q_DISABLE_COPY(StopThingRegistrationTaskResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
