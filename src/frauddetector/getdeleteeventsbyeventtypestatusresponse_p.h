// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELETEEVENTSBYEVENTTYPESTATUSRESPONSE_P_H
#define QTAWS_GETDELETEEVENTSBYEVENTTYPESTATUSRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetDeleteEventsByEventTypeStatusResponse;

class GetDeleteEventsByEventTypeStatusResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetDeleteEventsByEventTypeStatusResponsePrivate(GetDeleteEventsByEventTypeStatusResponse * const q);

    void parseGetDeleteEventsByEventTypeStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeleteEventsByEventTypeStatusResponse)
    Q_DISABLE_COPY(GetDeleteEventsByEventTypeStatusResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
