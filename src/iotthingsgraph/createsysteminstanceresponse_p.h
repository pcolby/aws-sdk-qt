// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESYSTEMINSTANCERESPONSE_P_H
#define QTAWS_CREATESYSTEMINSTANCERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class CreateSystemInstanceResponse;

class CreateSystemInstanceResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit CreateSystemInstanceResponsePrivate(CreateSystemInstanceResponse * const q);

    void parseCreateSystemInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSystemInstanceResponse)
    Q_DISABLE_COPY(CreateSystemInstanceResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
