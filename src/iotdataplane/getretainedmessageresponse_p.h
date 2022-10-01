// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRETAINEDMESSAGERESPONSE_P_H
#define QTAWS_GETRETAINEDMESSAGERESPONSE_P_H

#include "iotdataplaneresponse_p.h"

namespace QtAws {
namespace IoTDataPlane {

class GetRetainedMessageResponse;

class GetRetainedMessageResponsePrivate : public IoTDataPlaneResponsePrivate {

public:

    explicit GetRetainedMessageResponsePrivate(GetRetainedMessageResponse * const q);

    void parseGetRetainedMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRetainedMessageResponse)
    Q_DISABLE_COPY(GetRetainedMessageResponsePrivate)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
