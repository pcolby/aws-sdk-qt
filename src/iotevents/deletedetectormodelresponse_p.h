// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDETECTORMODELRESPONSE_P_H
#define QTAWS_DELETEDETECTORMODELRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class DeleteDetectorModelResponse;

class DeleteDetectorModelResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit DeleteDetectorModelResponsePrivate(DeleteDetectorModelResponse * const q);

    void parseDeleteDetectorModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDetectorModelResponse)
    Q_DISABLE_COPY(DeleteDetectorModelResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
