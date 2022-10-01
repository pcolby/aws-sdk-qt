// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONAGGREGATORSRESPONSE_P_H
#define QTAWS_DESCRIBECONFIGURATIONAGGREGATORSRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigurationAggregatorsResponse;

class DescribeConfigurationAggregatorsResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeConfigurationAggregatorsResponsePrivate(DescribeConfigurationAggregatorsResponse * const q);

    void parseDescribeConfigurationAggregatorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationAggregatorsResponse)
    Q_DISABLE_COPY(DescribeConfigurationAggregatorsResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
