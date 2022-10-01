// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBEXECUTIONSFORTHINGRESPONSE_P_H
#define QTAWS_LISTJOBEXECUTIONSFORTHINGRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListJobExecutionsForThingResponse;

class ListJobExecutionsForThingResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListJobExecutionsForThingResponsePrivate(ListJobExecutionsForThingResponse * const q);

    void parseListJobExecutionsForThingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListJobExecutionsForThingResponse)
    Q_DISABLE_COPY(ListJobExecutionsForThingResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
