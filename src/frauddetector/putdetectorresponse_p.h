// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDETECTORRESPONSE_P_H
#define QTAWS_PUTDETECTORRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class PutDetectorResponse;

class PutDetectorResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit PutDetectorResponsePrivate(PutDetectorResponse * const q);

    void parsePutDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDetectorResponse)
    Q_DISABLE_COPY(PutDetectorResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
