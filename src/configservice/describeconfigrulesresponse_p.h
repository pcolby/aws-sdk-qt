// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGRULESRESPONSE_P_H
#define QTAWS_DESCRIBECONFIGRULESRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigRulesResponse;

class DescribeConfigRulesResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit DescribeConfigRulesResponsePrivate(DescribeConfigRulesResponse * const q);

    void parseDescribeConfigRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConfigRulesResponse)
    Q_DISABLE_COPY(DescribeConfigRulesResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
