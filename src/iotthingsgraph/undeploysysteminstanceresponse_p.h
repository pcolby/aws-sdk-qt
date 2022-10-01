// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNDEPLOYSYSTEMINSTANCERESPONSE_P_H
#define QTAWS_UNDEPLOYSYSTEMINSTANCERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class UndeploySystemInstanceResponse;

class UndeploySystemInstanceResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit UndeploySystemInstanceResponsePrivate(UndeploySystemInstanceResponse * const q);

    void parseUndeploySystemInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UndeploySystemInstanceResponse)
    Q_DISABLE_COPY(UndeploySystemInstanceResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
