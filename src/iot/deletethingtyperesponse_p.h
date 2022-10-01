// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHINGTYPERESPONSE_P_H
#define QTAWS_DELETETHINGTYPERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteThingTypeResponse;

class DeleteThingTypeResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteThingTypeResponsePrivate(DeleteThingTypeResponse * const q);

    void parseDeleteThingTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteThingTypeResponse)
    Q_DISABLE_COPY(DeleteThingTypeResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
