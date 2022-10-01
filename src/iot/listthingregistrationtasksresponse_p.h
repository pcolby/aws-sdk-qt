// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGREGISTRATIONTASKSRESPONSE_P_H
#define QTAWS_LISTTHINGREGISTRATIONTASKSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListThingRegistrationTasksResponse;

class ListThingRegistrationTasksResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListThingRegistrationTasksResponsePrivate(ListThingRegistrationTasksResponse * const q);

    void parseListThingRegistrationTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListThingRegistrationTasksResponse)
    Q_DISABLE_COPY(ListThingRegistrationTasksResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
