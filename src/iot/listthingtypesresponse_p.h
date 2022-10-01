// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGTYPESRESPONSE_P_H
#define QTAWS_LISTTHINGTYPESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListThingTypesResponse;

class ListThingTypesResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListThingTypesResponsePrivate(ListThingTypesResponse * const q);

    void parseListThingTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListThingTypesResponse)
    Q_DISABLE_COPY(ListThingTypesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
