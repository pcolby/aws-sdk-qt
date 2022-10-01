// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESESSIONSRESPONSE_P_H
#define QTAWS_DESCRIBESESSIONSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeSessionsResponse;

class DescribeSessionsResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeSessionsResponsePrivate(DescribeSessionsResponse * const q);

    void parseDescribeSessionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSessionsResponse)
    Q_DISABLE_COPY(DescribeSessionsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
