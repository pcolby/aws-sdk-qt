// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTRESPONSE_P_H
#define QTAWS_GETEVENTRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetEventResponse;

class GetEventResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetEventResponsePrivate(GetEventResponse * const q);

    void parseGetEventResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEventResponse)
    Q_DISABLE_COPY(GetEventResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
