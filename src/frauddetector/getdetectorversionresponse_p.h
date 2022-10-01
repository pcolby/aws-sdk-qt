// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORVERSIONRESPONSE_P_H
#define QTAWS_GETDETECTORVERSIONRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetDetectorVersionResponse;

class GetDetectorVersionResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetDetectorVersionResponsePrivate(GetDetectorVersionResponse * const q);

    void parseGetDetectorVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDetectorVersionResponse)
    Q_DISABLE_COPY(GetDetectorVersionResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
