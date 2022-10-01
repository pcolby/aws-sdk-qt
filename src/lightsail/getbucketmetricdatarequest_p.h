// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETMETRICDATAREQUEST_P_H
#define QTAWS_GETBUCKETMETRICDATAREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getbucketmetricdatarequest.h"

namespace QtAws {
namespace Lightsail {

class GetBucketMetricDataRequest;

class GetBucketMetricDataRequestPrivate : public LightsailRequestPrivate {

public:
    GetBucketMetricDataRequestPrivate(const LightsailRequest::Action action,
                                   GetBucketMetricDataRequest * const q);
    GetBucketMetricDataRequestPrivate(const GetBucketMetricDataRequestPrivate &other,
                                   GetBucketMetricDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketMetricDataRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
