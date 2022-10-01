// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOUTCOMERESPONSE_P_H
#define QTAWS_PUTOUTCOMERESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class PutOutcomeResponse;

class PutOutcomeResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit PutOutcomeResponsePrivate(PutOutcomeResponse * const q);

    void parsePutOutcomeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutOutcomeResponse)
    Q_DISABLE_COPY(PutOutcomeResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
