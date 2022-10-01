// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSETRESPONSE_P_H
#define QTAWS_DESCRIBEASSETRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeAssetResponse;

class DescribeAssetResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit DescribeAssetResponsePrivate(DescribeAssetResponse * const q);

    void parseDescribeAssetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAssetResponse)
    Q_DISABLE_COPY(DescribeAssetResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
