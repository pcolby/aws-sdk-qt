// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGEIMPORTJOBRESPONSE_P_H
#define QTAWS_DESCRIBEPACKAGEIMPORTJOBRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class DescribePackageImportJobResponse;

class DescribePackageImportJobResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit DescribePackageImportJobResponsePrivate(DescribePackageImportJobResponse * const q);

    void parseDescribePackageImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePackageImportJobResponse)
    Q_DISABLE_COPY(DescribePackageImportJobResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
