// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGESCANFINDINGSRESPONSE_P_H
#define QTAWS_DESCRIBEIMAGESCANFINDINGSRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class DescribeImageScanFindingsResponse;

class DescribeImageScanFindingsResponsePrivate : public EcrResponsePrivate {

public:

    explicit DescribeImageScanFindingsResponsePrivate(DescribeImageScanFindingsResponse * const q);

    void parseDescribeImageScanFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImageScanFindingsResponse)
    Q_DISABLE_COPY(DescribeImageScanFindingsResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
