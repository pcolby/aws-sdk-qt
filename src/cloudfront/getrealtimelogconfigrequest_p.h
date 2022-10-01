// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREALTIMELOGCONFIGREQUEST_P_H
#define QTAWS_GETREALTIMELOGCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getrealtimelogconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetRealtimeLogConfigRequest;

class GetRealtimeLogConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetRealtimeLogConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   GetRealtimeLogConfigRequest * const q);
    GetRealtimeLogConfigRequestPrivate(const GetRealtimeLogConfigRequestPrivate &other,
                                   GetRealtimeLogConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRealtimeLogConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
