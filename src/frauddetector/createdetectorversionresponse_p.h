// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDETECTORVERSIONRESPONSE_P_H
#define QTAWS_CREATEDETECTORVERSIONRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class CreateDetectorVersionResponse;

class CreateDetectorVersionResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit CreateDetectorVersionResponsePrivate(CreateDetectorVersionResponse * const q);

    void parseCreateDetectorVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDetectorVersionResponse)
    Q_DISABLE_COPY(CreateDetectorVersionResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
