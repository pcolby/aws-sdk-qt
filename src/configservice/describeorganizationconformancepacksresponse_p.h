// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSRESPONSE_P_H
#define QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConformancePacksResponse;

class DescribeOrganizationConformancePacksResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeOrganizationConformancePacksResponsePrivate(DescribeOrganizationConformancePacksResponse * const q);

    void parseDescribeOrganizationConformancePacksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationConformancePacksResponse)
    Q_DISABLE_COPY(DescribeOrganizationConformancePacksResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
