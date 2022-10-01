// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHINGSHADOWRESPONSE_P_H
#define QTAWS_DELETETHINGSHADOWRESPONSE_P_H

#include "iotdataplaneresponse_p.h"

namespace QtAws {
namespace IoTDataPlane {

class DeleteThingShadowResponse;

class DeleteThingShadowResponsePrivate : public IoTDataPlaneResponsePrivate {

public:

    explicit DeleteThingShadowResponsePrivate(DeleteThingShadowResponse * const q);

    void parseDeleteThingShadowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteThingShadowResponse)
    Q_DISABLE_COPY(DeleteThingShadowResponsePrivate)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
