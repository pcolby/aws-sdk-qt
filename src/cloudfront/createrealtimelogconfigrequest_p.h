// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREALTIMELOGCONFIGREQUEST_P_H
#define QTAWS_CREATEREALTIMELOGCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createrealtimelogconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateRealtimeLogConfigRequest;

class CreateRealtimeLogConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateRealtimeLogConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateRealtimeLogConfigRequest * const q);
    CreateRealtimeLogConfigRequestPrivate(const CreateRealtimeLogConfigRequestPrivate &other,
                                   CreateRealtimeLogConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRealtimeLogConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
