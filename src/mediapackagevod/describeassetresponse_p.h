// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSETRESPONSE_P_H
#define QTAWS_DESCRIBEASSETRESPONSE_P_H

#include "mediapackagevodresponse_p.h"

namespace QtAws {
namespace MediaPackageVod {

class DescribeAssetResponse;

class DescribeAssetResponsePrivate : public MediaPackageVodResponsePrivate {

public:

    explicit DescribeAssetResponsePrivate(DescribeAssetResponse * const q);

    void parseDescribeAssetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAssetResponse)
    Q_DISABLE_COPY(DescribeAssetResponsePrivate)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
