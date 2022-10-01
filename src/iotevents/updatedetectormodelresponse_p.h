// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORMODELRESPONSE_P_H
#define QTAWS_UPDATEDETECTORMODELRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class UpdateDetectorModelResponse;

class UpdateDetectorModelResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit UpdateDetectorModelResponsePrivate(UpdateDetectorModelResponse * const q);

    void parseUpdateDetectorModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDetectorModelResponse)
    Q_DISABLE_COPY(UpdateDetectorModelResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
