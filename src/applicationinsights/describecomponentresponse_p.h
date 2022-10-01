// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPONENTRESPONSE_P_H
#define QTAWS_DESCRIBECOMPONENTRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeComponentResponse;

class DescribeComponentResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit DescribeComponentResponsePrivate(DescribeComponentResponse * const q);

    void parseDescribeComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeComponentResponse)
    Q_DISABLE_COPY(DescribeComponentResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
