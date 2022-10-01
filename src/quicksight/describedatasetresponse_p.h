// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETRESPONSE_P_H
#define QTAWS_DESCRIBEDATASETRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeDataSetResponse;

class DescribeDataSetResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeDataSetResponsePrivate(DescribeDataSetResponse * const q);

    void parseDescribeDataSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDataSetResponse)
    Q_DISABLE_COPY(DescribeDataSetResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
