// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORIGINACCESSCONTROLREQUEST_P_H
#define QTAWS_GETORIGINACCESSCONTROLREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getoriginaccesscontrolrequest.h"

namespace QtAws {
namespace CloudFront {

class GetOriginAccessControlRequest;

class GetOriginAccessControlRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetOriginAccessControlRequestPrivate(const CloudFrontRequest::Action action,
                                   GetOriginAccessControlRequest * const q);
    GetOriginAccessControlRequestPrivate(const GetOriginAccessControlRequestPrivate &other,
                                   GetOriginAccessControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOriginAccessControlRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
