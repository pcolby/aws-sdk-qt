// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDETECTORMODELRESPONSE_P_H
#define QTAWS_CREATEDETECTORMODELRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class CreateDetectorModelResponse;

class CreateDetectorModelResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit CreateDetectorModelResponsePrivate(CreateDetectorModelResponse * const q);

    void parseCreateDetectorModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDetectorModelResponse)
    Q_DISABLE_COPY(CreateDetectorModelResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
