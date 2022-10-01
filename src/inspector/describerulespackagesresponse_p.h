// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULESPACKAGESRESPONSE_P_H
#define QTAWS_DESCRIBERULESPACKAGESRESPONSE_P_H

#include "inspectorresponse_p.h"

namespace QtAws {
namespace Inspector {

class DescribeRulesPackagesResponse;

class DescribeRulesPackagesResponsePrivate : public InspectorResponsePrivate {

public:

    explicit DescribeRulesPackagesResponsePrivate(DescribeRulesPackagesResponse * const q);

    void parseDescribeRulesPackagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRulesPackagesResponse)
    Q_DISABLE_COPY(DescribeRulesPackagesResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
