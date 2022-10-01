// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERETENTIONCONFIGURATIONSRESPONSE_P_H
#define QTAWS_DESCRIBERETENTIONCONFIGURATIONSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeRetentionConfigurationsResponse;

class DescribeRetentionConfigurationsResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeRetentionConfigurationsResponsePrivate(DescribeRetentionConfigurationsResponse * const q);

    void parseDescribeRetentionConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRetentionConfigurationsResponse)
    Q_DISABLE_COPY(DescribeRetentionConfigurationsResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
