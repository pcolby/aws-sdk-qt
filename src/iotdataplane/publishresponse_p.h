// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHRESPONSE_P_H
#define QTAWS_PUBLISHRESPONSE_P_H

#include "iotdataplaneresponse_p.h"

namespace QtAws {
namespace IoTDataPlane {

class PublishResponse;

class PublishResponsePrivate : public IoTDataPlaneResponsePrivate {

public:

    explicit PublishResponsePrivate(PublishResponse * const q);

    void parsePublishResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PublishResponse)
    Q_DISABLE_COPY(PublishResponsePrivate)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
