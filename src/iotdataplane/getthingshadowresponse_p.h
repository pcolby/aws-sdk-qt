// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHINGSHADOWRESPONSE_P_H
#define QTAWS_GETTHINGSHADOWRESPONSE_P_H

#include "iotdataplaneresponse_p.h"

namespace QtAws {
namespace IoTDataPlane {

class GetThingShadowResponse;

class GetThingShadowResponsePrivate : public IoTDataPlaneResponsePrivate {

public:

    explicit GetThingShadowResponsePrivate(GetThingShadowResponse * const q);

    void parseGetThingShadowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetThingShadowResponse)
    Q_DISABLE_COPY(GetThingShadowResponsePrivate)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
