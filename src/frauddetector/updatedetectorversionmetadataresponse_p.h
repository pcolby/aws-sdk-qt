// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORVERSIONMETADATARESPONSE_P_H
#define QTAWS_UPDATEDETECTORVERSIONMETADATARESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class UpdateDetectorVersionMetadataResponse;

class UpdateDetectorVersionMetadataResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit UpdateDetectorVersionMetadataResponsePrivate(UpdateDetectorVersionMetadataResponse * const q);

    void parseUpdateDetectorVersionMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDetectorVersionMetadataResponse)
    Q_DISABLE_COPY(UpdateDetectorVersionMetadataResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
