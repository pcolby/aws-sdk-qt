// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEJOBRESPONSE_P_H
#define QTAWS_DESCRIBEDEVICEJOBRESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class DescribeDeviceJobResponse;

class DescribeDeviceJobResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit DescribeDeviceJobResponsePrivate(DescribeDeviceJobResponse * const q);

    void parseDescribeDeviceJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDeviceJobResponse)
    Q_DISABLE_COPY(DescribeDeviceJobResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
