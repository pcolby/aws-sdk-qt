// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONVERSIONRESPONSE_P_H
#define QTAWS_DESCRIBEAPPLICATIONVERSIONRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DescribeApplicationVersionResponse;

class DescribeApplicationVersionResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit DescribeApplicationVersionResponsePrivate(DescribeApplicationVersionResponse * const q);

    void parseDescribeApplicationVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationVersionResponse)
    Q_DISABLE_COPY(DescribeApplicationVersionResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
