// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFORMANCEPACKSRESPONSE_P_H
#define QTAWS_DESCRIBECONFORMANCEPACKSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeConformancePacksResponse;

class DescribeConformancePacksResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeConformancePacksResponsePrivate(DescribeConformancePacksResponse * const q);

    void parseDescribeConformancePacksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConformancePacksResponse)
    Q_DISABLE_COPY(DescribeConformancePacksResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
