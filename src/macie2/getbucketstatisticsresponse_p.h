// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETSTATISTICSRESPONSE_P_H
#define QTAWS_GETBUCKETSTATISTICSRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class GetBucketStatisticsResponse;

class GetBucketStatisticsResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit GetBucketStatisticsResponsePrivate(GetBucketStatisticsResponse * const q);

    void parseGetBucketStatisticsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketStatisticsResponse)
    Q_DISABLE_COPY(GetBucketStatisticsResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
