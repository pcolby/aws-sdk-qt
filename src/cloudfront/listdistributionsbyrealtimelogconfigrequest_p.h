// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYREALTIMELOGCONFIGREQUEST_P_H
#define QTAWS_LISTDISTRIBUTIONSBYREALTIMELOGCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listdistributionsbyrealtimelogconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByRealtimeLogConfigRequest;

class ListDistributionsByRealtimeLogConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListDistributionsByRealtimeLogConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   ListDistributionsByRealtimeLogConfigRequest * const q);
    ListDistributionsByRealtimeLogConfigRequestPrivate(const ListDistributionsByRealtimeLogConfigRequestPrivate &other,
                                   ListDistributionsByRealtimeLogConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDistributionsByRealtimeLogConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
