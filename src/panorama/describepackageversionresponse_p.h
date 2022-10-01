// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGEVERSIONRESPONSE_P_H
#define QTAWS_DESCRIBEPACKAGEVERSIONRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class DescribePackageVersionResponse;

class DescribePackageVersionResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit DescribePackageVersionResponsePrivate(DescribePackageVersionResponse * const q);

    void parseDescribePackageVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePackageVersionResponse)
    Q_DISABLE_COPY(DescribePackageVersionResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
