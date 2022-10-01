// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECANARIESLASTRUNRESPONSE_P_H
#define QTAWS_DESCRIBECANARIESLASTRUNRESPONSE_P_H

#include "syntheticsresponse_p.h"

namespace QtAws {
namespace Synthetics {

class DescribeCanariesLastRunResponse;

class DescribeCanariesLastRunResponsePrivate : public SyntheticsResponsePrivate {

public:

    explicit DescribeCanariesLastRunResponsePrivate(DescribeCanariesLastRunResponse * const q);

    void parseDescribeCanariesLastRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCanariesLastRunResponse)
    Q_DISABLE_COPY(DescribeCanariesLastRunResponsePrivate)

};

} // namespace Synthetics
} // namespace QtAws

#endif
