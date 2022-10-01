// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTORRESPONSE_P_H
#define QTAWS_DESCRIBEDETECTORRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DescribeDetectorResponse;

class DescribeDetectorResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DescribeDetectorResponsePrivate(DescribeDetectorResponse * const q);

    void parseDescribeDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDetectorResponse)
    Q_DISABLE_COPY(DescribeDetectorResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
