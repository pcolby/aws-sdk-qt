// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERCENTILESRESPONSE_P_H
#define QTAWS_GETPERCENTILESRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class GetPercentilesResponse;

class GetPercentilesResponsePrivate : public IoTResponsePrivate {

public:

    explicit GetPercentilesResponsePrivate(GetPercentilesResponse * const q);

    void parseGetPercentilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPercentilesResponse)
    Q_DISABLE_COPY(GetPercentilesResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
