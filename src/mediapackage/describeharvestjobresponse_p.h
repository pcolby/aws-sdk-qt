// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHARVESTJOBRESPONSE_P_H
#define QTAWS_DESCRIBEHARVESTJOBRESPONSE_P_H

#include "mediapackageresponse_p.h"

namespace QtAws {
namespace MediaPackage {

class DescribeHarvestJobResponse;

class DescribeHarvestJobResponsePrivate : public MediaPackageResponsePrivate {

public:

    explicit DescribeHarvestJobResponsePrivate(DescribeHarvestJobResponse * const q);

    void parseDescribeHarvestJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHarvestJobResponse)
    Q_DISABLE_COPY(DescribeHarvestJobResponsePrivate)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
