// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGERESPONSE_P_H
#define QTAWS_DESCRIBEPACKAGERESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class DescribePackageResponse;

class DescribePackageResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit DescribePackageResponsePrivate(DescribePackageResponse * const q);

    void parseDescribePackageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePackageResponse)
    Q_DISABLE_COPY(DescribePackageResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
