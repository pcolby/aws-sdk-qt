// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECANARIESRESPONSE_P_H
#define QTAWS_DESCRIBECANARIESRESPONSE_P_H

#include "syntheticsresponse_p.h"

namespace QtAws {
namespace Synthetics {

class DescribeCanariesResponse;

class DescribeCanariesResponsePrivate : public SyntheticsResponsePrivate {

public:

    explicit DescribeCanariesResponsePrivate(DescribeCanariesResponse * const q);

    void parseDescribeCanariesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCanariesResponse)
    Q_DISABLE_COPY(DescribeCanariesResponsePrivate)

};

} // namespace Synthetics
} // namespace QtAws

#endif
