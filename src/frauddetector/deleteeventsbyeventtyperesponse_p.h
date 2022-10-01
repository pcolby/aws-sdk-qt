// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSBYEVENTTYPERESPONSE_P_H
#define QTAWS_DELETEEVENTSBYEVENTTYPERESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEventsByEventTypeResponse;

class DeleteEventsByEventTypeResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DeleteEventsByEventTypeResponsePrivate(DeleteEventsByEventTypeResponse * const q);

    void parseDeleteEventsByEventTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEventsByEventTypeResponse)
    Q_DISABLE_COPY(DeleteEventsByEventTypeResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
