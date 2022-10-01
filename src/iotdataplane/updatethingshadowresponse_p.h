// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGSHADOWRESPONSE_P_H
#define QTAWS_UPDATETHINGSHADOWRESPONSE_P_H

#include "iotdataplaneresponse_p.h"

namespace QtAws {
namespace IoTDataPlane {

class UpdateThingShadowResponse;

class UpdateThingShadowResponsePrivate : public IoTDataPlaneResponsePrivate {

public:

    explicit UpdateThingShadowResponsePrivate(UpdateThingShadowResponse * const q);

    void parseUpdateThingShadowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateThingShadowResponse)
    Q_DISABLE_COPY(UpdateThingShadowResponsePrivate)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
