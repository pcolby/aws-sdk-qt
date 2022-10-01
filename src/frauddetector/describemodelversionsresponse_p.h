// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELVERSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEMODELVERSIONSRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class DescribeModelVersionsResponse;

class DescribeModelVersionsResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit DescribeModelVersionsResponsePrivate(DescribeModelVersionsResponse * const q);

    void parseDescribeModelVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeModelVersionsResponse)
    Q_DISABLE_COPY(DescribeModelVersionsResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
