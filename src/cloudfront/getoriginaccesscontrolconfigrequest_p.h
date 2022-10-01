// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORIGINACCESSCONTROLCONFIGREQUEST_P_H
#define QTAWS_GETORIGINACCESSCONTROLCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getoriginaccesscontrolconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetOriginAccessControlConfigRequest;

class GetOriginAccessControlConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetOriginAccessControlConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   GetOriginAccessControlConfigRequest * const q);
    GetOriginAccessControlConfigRequestPrivate(const GetOriginAccessControlConfigRequestPrivate &other,
                                   GetOriginAccessControlConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOriginAccessControlConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
