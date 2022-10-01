// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORSRESPONSE_P_H
#define QTAWS_GETDETECTORSRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetDetectorsResponse;

class GetDetectorsResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetDetectorsResponsePrivate(GetDetectorsResponse * const q);

    void parseGetDetectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDetectorsResponse)
    Q_DISABLE_COPY(GetDetectorsResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
