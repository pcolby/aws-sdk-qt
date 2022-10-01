// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAILSRESPONSE_P_H
#define QTAWS_DESCRIBETRAILSRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class DescribeTrailsResponse;

class DescribeTrailsResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit DescribeTrailsResponsePrivate(DescribeTrailsResponse * const q);

    void parseDescribeTrailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTrailsResponse)
    Q_DISABLE_COPY(DescribeTrailsResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
