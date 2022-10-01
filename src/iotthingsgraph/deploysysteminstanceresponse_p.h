// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPLOYSYSTEMINSTANCERESPONSE_P_H
#define QTAWS_DEPLOYSYSTEMINSTANCERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeploySystemInstanceResponse;

class DeploySystemInstanceResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit DeploySystemInstanceResponsePrivate(DeploySystemInstanceResponse * const q);

    void parseDeploySystemInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeploySystemInstanceResponse)
    Q_DISABLE_COPY(DeploySystemInstanceResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
