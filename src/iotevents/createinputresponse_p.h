// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINPUTRESPONSE_P_H
#define QTAWS_CREATEINPUTRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class CreateInputResponse;

class CreateInputResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit CreateInputResponsePrivate(CreateInputResponse * const q);

    void parseCreateInputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInputResponse)
    Q_DISABLE_COPY(CreateInputResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
