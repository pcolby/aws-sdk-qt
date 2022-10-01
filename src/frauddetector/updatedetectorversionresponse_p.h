// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORVERSIONRESPONSE_P_H
#define QTAWS_UPDATEDETECTORVERSIONRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class UpdateDetectorVersionResponse;

class UpdateDetectorVersionResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit UpdateDetectorVersionResponsePrivate(UpdateDetectorVersionResponse * const q);

    void parseUpdateDetectorVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDetectorVersionResponse)
    Q_DISABLE_COPY(UpdateDetectorVersionResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
