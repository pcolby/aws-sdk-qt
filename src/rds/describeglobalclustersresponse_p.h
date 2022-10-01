// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALCLUSTERSRESPONSE_P_H
#define QTAWS_DESCRIBEGLOBALCLUSTERSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeGlobalClustersResponse;

class DescribeGlobalClustersResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeGlobalClustersResponsePrivate(DescribeGlobalClustersResponse * const q);

    void parseDescribeGlobalClustersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGlobalClustersResponse)
    Q_DISABLE_COPY(DescribeGlobalClustersResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
