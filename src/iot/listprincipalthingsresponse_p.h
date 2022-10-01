// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRINCIPALTHINGSRESPONSE_P_H
#define QTAWS_LISTPRINCIPALTHINGSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListPrincipalThingsResponse;

class ListPrincipalThingsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListPrincipalThingsResponsePrivate(ListPrincipalThingsResponse * const q);

    void parseListPrincipalThingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPrincipalThingsResponse)
    Q_DISABLE_COPY(ListPrincipalThingsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
