// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMOBILESDKRELEASEREQUEST_P_H
#define QTAWS_GETMOBILESDKRELEASEREQUEST_P_H

#include "wafv2request_p.h"
#include "getmobilesdkreleaserequest.h"

namespace QtAws {
namespace Wafv2 {

class GetMobileSdkReleaseRequest;

class GetMobileSdkReleaseRequestPrivate : public Wafv2RequestPrivate {

public:
    GetMobileSdkReleaseRequestPrivate(const Wafv2Request::Action action,
                                   GetMobileSdkReleaseRequest * const q);
    GetMobileSdkReleaseRequestPrivate(const GetMobileSdkReleaseRequestPrivate &other,
                                   GetMobileSdkReleaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMobileSdkReleaseRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
