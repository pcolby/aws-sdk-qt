// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFORMANCEPACKCOMPLIANCERESPONSE_P_H
#define QTAWS_DESCRIBECONFORMANCEPACKCOMPLIANCERESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeConformancePackComplianceResponse;

class DescribeConformancePackComplianceResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeConformancePackComplianceResponsePrivate(DescribeConformancePackComplianceResponse * const q);

    void parseDescribeConformancePackComplianceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConformancePackComplianceResponse)
    Q_DISABLE_COPY(DescribeConformancePackComplianceResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
