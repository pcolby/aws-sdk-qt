// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONLATESTCACHERESETREQUEST_P_H
#define QTAWS_GETDISTRIBUTIONLATESTCACHERESETREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getdistributionlatestcacheresetrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDistributionLatestCacheResetRequest;

class GetDistributionLatestCacheResetRequestPrivate : public LightsailRequestPrivate {

public:
    GetDistributionLatestCacheResetRequestPrivate(const LightsailRequest::Action action,
                                   GetDistributionLatestCacheResetRequest * const q);
    GetDistributionLatestCacheResetRequestPrivate(const GetDistributionLatestCacheResetRequestPrivate &other,
                                   GetDistributionLatestCacheResetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDistributionLatestCacheResetRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
