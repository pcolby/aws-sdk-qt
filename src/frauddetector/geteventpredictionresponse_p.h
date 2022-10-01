// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTPREDICTIONRESPONSE_P_H
#define QTAWS_GETEVENTPREDICTIONRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetEventPredictionResponse;

class GetEventPredictionResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetEventPredictionResponsePrivate(GetEventPredictionResponse * const q);

    void parseGetEventPredictionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEventPredictionResponse)
    Q_DISABLE_COPY(GetEventPredictionResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
