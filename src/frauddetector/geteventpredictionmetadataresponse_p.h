// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTPREDICTIONMETADATARESPONSE_P_H
#define QTAWS_GETEVENTPREDICTIONMETADATARESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetEventPredictionMetadataResponse;

class GetEventPredictionMetadataResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetEventPredictionMetadataResponsePrivate(GetEventPredictionMetadataResponse * const q);

    void parseGetEventPredictionMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEventPredictionMetadataResponse)
    Q_DISABLE_COPY(GetEventPredictionMetadataResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
