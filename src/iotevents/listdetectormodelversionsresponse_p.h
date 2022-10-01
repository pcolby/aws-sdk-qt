// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTORMODELVERSIONSRESPONSE_P_H
#define QTAWS_LISTDETECTORMODELVERSIONSRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class ListDetectorModelVersionsResponse;

class ListDetectorModelVersionsResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit ListDetectorModelVersionsResponsePrivate(ListDetectorModelVersionsResponse * const q);

    void parseListDetectorModelVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDetectorModelVersionsResponse)
    Q_DISABLE_COPY(ListDetectorModelVersionsResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
