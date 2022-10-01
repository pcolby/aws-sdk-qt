// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTORMODELSRESPONSE_P_H
#define QTAWS_LISTDETECTORMODELSRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class ListDetectorModelsResponse;

class ListDetectorModelsResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit ListDetectorModelsResponsePrivate(ListDetectorModelsResponse * const q);

    void parseListDetectorModelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDetectorModelsResponse)
    Q_DISABLE_COPY(ListDetectorModelsResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
