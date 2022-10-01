// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDEVENTRESPONSE_P_H
#define QTAWS_SENDEVENTRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class SendEventResponse;

class SendEventResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit SendEventResponsePrivate(SendEventResponse * const q);

    void parseSendEventResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendEventResponse)
    Q_DISABLE_COPY(SendEventResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
