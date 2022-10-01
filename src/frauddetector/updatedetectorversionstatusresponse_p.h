// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORVERSIONSTATUSRESPONSE_P_H
#define QTAWS_UPDATEDETECTORVERSIONSTATUSRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class UpdateDetectorVersionStatusResponse;

class UpdateDetectorVersionStatusResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit UpdateDetectorVersionStatusResponsePrivate(UpdateDetectorVersionStatusResponse * const q);

    void parseUpdateDetectorVersionStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDetectorVersionStatusResponse)
    Q_DISABLE_COPY(UpdateDetectorVersionStatusResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
