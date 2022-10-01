// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSYSTEMINSTANCERESPONSE_P_H
#define QTAWS_GETSYSTEMINSTANCERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetSystemInstanceResponse;

class GetSystemInstanceResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit GetSystemInstanceResponsePrivate(GetSystemInstanceResponse * const q);

    void parseGetSystemInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSystemInstanceResponse)
    Q_DISABLE_COPY(GetSystemInstanceResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
