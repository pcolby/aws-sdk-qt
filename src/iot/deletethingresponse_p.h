// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHINGRESPONSE_P_H
#define QTAWS_DELETETHINGRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteThingResponse;

class DeleteThingResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteThingResponsePrivate(DeleteThingResponse * const q);

    void parseDeleteThingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteThingResponse)
    Q_DISABLE_COPY(DeleteThingResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
