// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONMETRICDATAREQUEST_P_H
#define QTAWS_GETDISTRIBUTIONMETRICDATAREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getdistributionmetricdatarequest.h"

namespace QtAws {
namespace Lightsail {

class GetDistributionMetricDataRequest;

class GetDistributionMetricDataRequestPrivate : public LightsailRequestPrivate {

public:
    GetDistributionMetricDataRequestPrivate(const LightsailRequest::Action action,
                                   GetDistributionMetricDataRequest * const q);
    GetDistributionMetricDataRequestPrivate(const GetDistributionMetricDataRequestPrivate &other,
                                   GetDistributionMetricDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDistributionMetricDataRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
