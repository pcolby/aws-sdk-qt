// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOURCEREGIONSRESPONSE_P_H
#define QTAWS_DESCRIBESOURCEREGIONSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeSourceRegionsResponse;

class DescribeSourceRegionsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeSourceRegionsResponsePrivate(DescribeSourceRegionsResponse * const q);

    void parseDescribeSourceRegionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSourceRegionsResponse)
    Q_DISABLE_COPY(DescribeSourceRegionsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
