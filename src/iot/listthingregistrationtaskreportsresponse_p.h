// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGREGISTRATIONTASKREPORTSRESPONSE_P_H
#define QTAWS_LISTTHINGREGISTRATIONTASKREPORTSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListThingRegistrationTaskReportsResponse;

class ListThingRegistrationTaskReportsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListThingRegistrationTaskReportsResponsePrivate(ListThingRegistrationTaskReportsResponse * const q);

    void parseListThingRegistrationTaskReportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListThingRegistrationTaskReportsResponse)
    Q_DISABLE_COPY(ListThingRegistrationTaskReportsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
