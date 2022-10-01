// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREALTIMELOGCONFIGSREQUEST_P_H
#define QTAWS_LISTREALTIMELOGCONFIGSREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "listrealtimelogconfigsrequest.h"

namespace QtAws {
namespace CloudFront {

class ListRealtimeLogConfigsRequest;

class ListRealtimeLogConfigsRequestPrivate : public CloudFrontRequestPrivate {

public:
    ListRealtimeLogConfigsRequestPrivate(const CloudFrontRequest::Action action,
                                   ListRealtimeLogConfigsRequest * const q);
    ListRealtimeLogConfigsRequestPrivate(const ListRealtimeLogConfigsRequestPrivate &other,
                                   ListRealtimeLogConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRealtimeLogConfigsRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
