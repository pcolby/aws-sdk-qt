// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONBUNDLESREQUEST_P_H
#define QTAWS_GETDISTRIBUTIONBUNDLESREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getdistributionbundlesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDistributionBundlesRequest;

class GetDistributionBundlesRequestPrivate : public LightsailRequestPrivate {

public:
    GetDistributionBundlesRequestPrivate(const LightsailRequest::Action action,
                                   GetDistributionBundlesRequest * const q);
    GetDistributionBundlesRequestPrivate(const GetDistributionBundlesRequestPrivate &other,
                                   GetDistributionBundlesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDistributionBundlesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
