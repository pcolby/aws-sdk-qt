// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASOURCERESPONSE_P_H
#define QTAWS_DESCRIBEDATASOURCERESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeDataSourceResponse;

class DescribeDataSourceResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeDataSourceResponsePrivate(DescribeDataSourceResponse * const q);

    void parseDescribeDataSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDataSourceResponse)
    Q_DISABLE_COPY(DescribeDataSourceResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
