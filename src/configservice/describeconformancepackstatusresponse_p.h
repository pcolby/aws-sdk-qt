// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFORMANCEPACKSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBECONFORMANCEPACKSTATUSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeConformancePackStatusResponse;

class DescribeConformancePackStatusResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeConformancePackStatusResponsePrivate(DescribeConformancePackStatusResponse * const q);

    void parseDescribeConformancePackStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConformancePackStatusResponse)
    Q_DISABLE_COPY(DescribeConformancePackStatusResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
