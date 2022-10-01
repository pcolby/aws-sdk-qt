// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTPREDICTIONSRESPONSE_P_H
#define QTAWS_LISTEVENTPREDICTIONSRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class ListEventPredictionsResponse;

class ListEventPredictionsResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit ListEventPredictionsResponsePrivate(ListEventPredictionsResponse * const q);

    void parseListEventPredictionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEventPredictionsResponse)
    Q_DISABLE_COPY(ListEventPredictionsResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
