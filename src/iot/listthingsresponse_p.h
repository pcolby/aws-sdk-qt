// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGSRESPONSE_P_H
#define QTAWS_LISTTHINGSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListThingsResponse;

class ListThingsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListThingsResponsePrivate(ListThingsResponse * const q);

    void parseListThingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListThingsResponse)
    Q_DISABLE_COPY(ListThingsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
