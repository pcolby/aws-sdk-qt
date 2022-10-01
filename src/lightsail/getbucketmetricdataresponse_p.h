// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETMETRICDATARESPONSE_P_H
#define QTAWS_GETBUCKETMETRICDATARESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetBucketMetricDataResponse;

class GetBucketMetricDataResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetBucketMetricDataResponsePrivate(GetBucketMetricDataResponse * const q);

    void parseGetBucketMetricDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketMetricDataResponse)
    Q_DISABLE_COPY(GetBucketMetricDataResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
