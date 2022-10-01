// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREALTIMELOGCONFIGREQUEST_P_H
#define QTAWS_UPDATEREALTIMELOGCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "updaterealtimelogconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateRealtimeLogConfigRequest;

class UpdateRealtimeLogConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    UpdateRealtimeLogConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   UpdateRealtimeLogConfigRequest * const q);
    UpdateRealtimeLogConfigRequestPrivate(const UpdateRealtimeLogConfigRequestPrivate &other,
                                   UpdateRealtimeLogConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRealtimeLogConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
