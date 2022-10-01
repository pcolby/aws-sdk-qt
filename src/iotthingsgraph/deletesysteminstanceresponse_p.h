// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESYSTEMINSTANCERESPONSE_P_H
#define QTAWS_DELETESYSTEMINSTANCERESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeleteSystemInstanceResponse;

class DeleteSystemInstanceResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit DeleteSystemInstanceResponsePrivate(DeleteSystemInstanceResponse * const q);

    void parseDeleteSystemInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSystemInstanceResponse)
    Q_DISABLE_COPY(DeleteSystemInstanceResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
