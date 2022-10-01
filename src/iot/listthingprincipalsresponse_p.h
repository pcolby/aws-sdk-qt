// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGPRINCIPALSRESPONSE_P_H
#define QTAWS_LISTTHINGPRINCIPALSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListThingPrincipalsResponse;

class ListThingPrincipalsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListThingPrincipalsResponsePrivate(ListThingPrincipalsResponse * const q);

    void parseListThingPrincipalsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListThingPrincipalsResponse)
    Q_DISABLE_COPY(ListThingPrincipalsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
