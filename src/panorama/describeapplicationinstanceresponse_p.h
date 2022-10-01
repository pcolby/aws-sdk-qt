// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONINSTANCERESPONSE_P_H
#define QTAWS_DESCRIBEAPPLICATIONINSTANCERESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class DescribeApplicationInstanceResponse;

class DescribeApplicationInstanceResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit DescribeApplicationInstanceResponsePrivate(DescribeApplicationInstanceResponse * const q);

    void parseDescribeApplicationInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationInstanceResponse)
    Q_DISABLE_COPY(DescribeApplicationInstanceResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
