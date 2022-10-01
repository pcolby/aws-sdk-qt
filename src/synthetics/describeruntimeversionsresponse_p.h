// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERUNTIMEVERSIONSRESPONSE_P_H
#define QTAWS_DESCRIBERUNTIMEVERSIONSRESPONSE_P_H

#include "syntheticsresponse_p.h"

namespace QtAws {
namespace Synthetics {

class DescribeRuntimeVersionsResponse;

class DescribeRuntimeVersionsResponsePrivate : public SyntheticsResponsePrivate {

public:

    explicit DescribeRuntimeVersionsResponsePrivate(DescribeRuntimeVersionsResponse * const q);

    void parseDescribeRuntimeVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRuntimeVersionsResponse)
    Q_DISABLE_COPY(DescribeRuntimeVersionsResponsePrivate)

};

} // namespace Synthetics
} // namespace QtAws

#endif
