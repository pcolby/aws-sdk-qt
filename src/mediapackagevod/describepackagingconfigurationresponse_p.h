// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEPACKAGINGCONFIGURATIONRESPONSE_P_H

#include "mediapackagevodresponse_p.h"

namespace QtAws {
namespace MediaPackageVod {

class DescribePackagingConfigurationResponse;

class DescribePackagingConfigurationResponsePrivate : public MediaPackageVodResponsePrivate {

public:

    explicit DescribePackagingConfigurationResponsePrivate(DescribePackagingConfigurationResponse * const q);

    void parseDescribePackagingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePackagingConfigurationResponse)
    Q_DISABLE_COPY(DescribePackagingConfigurationResponsePrivate)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
