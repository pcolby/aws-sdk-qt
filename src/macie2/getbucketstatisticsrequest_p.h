// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETSTATISTICSREQUEST_P_H
#define QTAWS_GETBUCKETSTATISTICSREQUEST_P_H

#include "macie2request_p.h"
#include "getbucketstatisticsrequest.h"

namespace QtAws {
namespace Macie2 {

class GetBucketStatisticsRequest;

class GetBucketStatisticsRequestPrivate : public Macie2RequestPrivate {

public:
    GetBucketStatisticsRequestPrivate(const Macie2Request::Action action,
                                   GetBucketStatisticsRequest * const q);
    GetBucketStatisticsRequestPrivate(const GetBucketStatisticsRequestPrivate &other,
                                   GetBucketStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketStatisticsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
