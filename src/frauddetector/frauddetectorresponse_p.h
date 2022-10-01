// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FRAUDDETECTORRESPONSE_P_H
#define QTAWS_FRAUDDETECTORRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class FraudDetectorResponse;

class FraudDetectorResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit FraudDetectorResponsePrivate(FraudDetectorResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FraudDetectorResponse)
    Q_DISABLE_COPY(FraudDetectorResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
