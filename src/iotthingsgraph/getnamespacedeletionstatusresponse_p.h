// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNAMESPACEDELETIONSTATUSRESPONSE_P_H
#define QTAWS_GETNAMESPACEDELETIONSTATUSRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetNamespaceDeletionStatusResponse;

class GetNamespaceDeletionStatusResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit GetNamespaceDeletionStatusResponsePrivate(GetNamespaceDeletionStatusResponse * const q);

    void parseGetNamespaceDeletionStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNamespaceDeletionStatusResponse)
    Q_DISABLE_COPY(GetNamespaceDeletionStatusResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
