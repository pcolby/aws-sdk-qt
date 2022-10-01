// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREALTIMELOGCONFIGREQUEST_P_H
#define QTAWS_DELETEREALTIMELOGCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "deleterealtimelogconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteRealtimeLogConfigRequest;

class DeleteRealtimeLogConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    DeleteRealtimeLogConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   DeleteRealtimeLogConfigRequest * const q);
    DeleteRealtimeLogConfigRequestPrivate(const DeleteRealtimeLogConfigRequestPrivate &other,
                                   DeleteRealtimeLogConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRealtimeLogConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
